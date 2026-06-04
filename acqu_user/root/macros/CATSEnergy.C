
// Tagger Energy
typedef struct {

	Int_t egamma;
	Double_t energy;
	Double_t denergy;
	Int_t scaler;

} TData;

TData tdata[328];

// Histogram File
TFile CATSdata( "ARout/CATS/ARH_InBeam.root");

// Tagger-CATS Time for Random Subtraction
TH1D *tt = (TH1D*)CATSdata.Get( "PHYS_CATSTaggerTime");

// 2D Tagger Channel vs. CATS Energy
TH2D *hP = (TH2D*)CATSdata.Get( "PHYS_TaggerChannelCATSP_v_CATSEnergyNoShieldPrompt");
TH2D *hR = (TH2D*)CATSdata.Get( "PHYS_TaggerChannelCATSR_v_CATSEnergyNoShieldRandom");

// Prompt-Accidental Subtraction Ratio
const Double_t rPR = 0.0636;

TH2D *hS2;
TH1D* proj_global = nullptr;

void ReadTagEng( Int_t eg)
{
	UInt_t i, sc;
	Double_t eff, deff;
	TString file;
	//TString file = "includes/tageng855.dat";
	file = Form( "includes/tageng%d.dat", eg);

	ifstream inFile( file);
	while( !inFile.eof()) {
		inFile >> i >> eff >> deff >> sc;
		tdata[i].energy = deff;
		tdata[i].egamma = (int)(deff + 0.5);
		tdata[i].scaler = sc;
	}
	inFile.close();
}

void CATSEnergy()
{
	Double_t par[3];
	TString name;

	gROOT->ProcessLine( "ReadTagEng(855)");

	TCanvas *c1 = new TCanvas ( "c1", "EMissCATS", 200, 350, 1200, 500);
	c1->Divide( 3, 1);

	c1->cd( 1);
	hP->SetTitle( "Prompt");
	hP->Draw();

	c1->cd( 2);
	hR->Draw();
	hR->SetTitle( "Random");

	c1->cd( 3);
	TH2D *hS = (TH2D*)hP->Clone( "subt");
	hS->SetTitle( "Subtracted");
	hS->Sumw2();
	hS->Add( hR, -rPR);
	hS->Draw();

	hS2 = (TH2D*)hS->Clone( "binned");
	hS2->SetTitle( "Binned");

	c1->Print( "plots/CATSEnergy-2D.pdf");

}

void ProjCATSE( UInt_t chan)
{
	UInt_t eg;
	TString name;

	eg = tdata[chan].egamma;
	
	cout << "Scaler for Channel " << chan << " is " << tdata[chan].scaler << endl;

	TCanvas *c1 = new TCanvas ( "c1", "CATSEnergy", 20, 350, 700, 500);

	hS2->GetYaxis()->SetRange( chan, chan);
//	Commented out as proj needed to become proj_golbal to be used in MCvsData 	
/*	TH1D *proj = hS2->ProjectionX( "projX");
	proj->Draw();
	proj->SetTitle( "CATS Energy");
	proj->GetXaxis()->SetRangeUser( 0, 1.25*eg); */
// 	Added by Gen:
	proj_global = hS2->ProjectionX("projX"); 
	proj_global->Draw();
	proj_global->SetTitle( "CATS Energy");
	proj_global->GetXaxis()->SetRangeUser( 0, 1.25*eg); 
	
	proj_global->GetXaxis()->SetTitle("Energy (MeV)");
	proj_global->GetYaxis()->SetTitle("Counts");
	proj_global->GetXaxis()->SetTitleSize(0.045);
	proj_global->GetYaxis()->SetTitleSize(0.045);
	proj_global->GetXaxis()->SetLabelSize(0.035);
	proj_global->GetYaxis()->SetLabelSize(0.035);


	Double_t x[2], y[2];

	x[0] = 0.15;
	x[1] = 0.35;
	y[0] = 0.45;
	y[1] = 0.55;

	TPaveText *pt = new TPaveText( x[0], y[0], x[1], y[1], "NDC");
	pt->SetBorderSize( 0);
	pt->SetFillStyle( 0);
	pt->SetTextAlign( 12);
	pt->SetTextSize( 0.04);
	name = Form( "E_{#gamma} = %d MeV\n", eg);
	pt->AddText( name);
	pt->Draw();

	name = Form( "plots/CATSEnergy_%dMeV.pdf", eg);
	c1->Print( name);

}

void TaggerTime( UInt_t rebin = 1)
{

	Double_t par[3];
	Double_t x[2], y[2], z[2];
	Double_t AR, AP, ratio;
	Double_t w, l;
	TString name;

	TCanvas *c1 = new TCanvas ( "c1", "Tagger Time", 20, 350, 500, 500);
	tt->GetXaxis()->SetRangeUser( -500, 500);
	tt->SetMinimum( 0);
	tt->Draw();

	TF1 *f1 = new TF1( "f1", "pol2", -300, -100);
	tt->Fit( "f1", "R");
	f1->GetParameters( &par[0]);
	f1->SetLineWidth( 4);

	TF1 *f2 = new TF1("f", "[0]*x + 0.5*[1]*x*x + 0.3333*[2]*x*x*x", -1000, 1000);
	f2->SetParameters( par[0], par[1], par[2]);

	x[0] = -25;
	x[1] = -10;

	AP = f2->Eval( x[1]) - f2->Eval( x[0]);
	cout << " AP = " << AP;

	x[0] = -300;
	x[1] = -100;

	AR = f2->Eval( x[1]) - f2->Eval( x[0]);

	cout << "  AR = " << AR;

	ratio = AP/AR;

	cout << "  ratio = " << ratio;
	cout << endl;

//	c1->Print( "plots/TaggerTimeCut.pdf");

}

void MCvsData0(UInt_t chan){ //Added by gen
	//Collecting the histogram from CATSEnergy 
	ProjCATSE(chan);
	TH1D* h_ARH = proj_global;

	//Warning message
 	if (!h_ARH) {
        	std::cerr << "Error: Failed to retrive ProjCATSE!" << std::endl;
        return;	
	}
	
	//To denote the incident photon energy as done in ProjCATSE()	
	UInt_t eg;
	TString name;

	eg = tdata[chan].egamma;

	//Calling in the Monte Carlo simulation 
	TFile *f_mc = TFile::Open("ARout/CATS/MC_InBeam.root");
	//Testing error message if Monte Carlo simulation has no plot
	TH1F* h_mc = dynamic_cast<TH1F*>(f_mc ->Get("PHYS_CATSEnergy"));

	if (!h_mc){
		std::cerr << "Error: MC histogram not found!" <<  std::endl;
	}
	//Attempting to scale the simulated histogram here:
	int peakBin = h_ARH->GetMaximumBin();
    	double peakCentre = h_ARH->GetBinCenter(peakBin);

	//attempting to plot with axes from peak +/- 20% intergration regions 
	double frac = 0.10; // 20%

	double xmin = peakCentre * (1.0 - frac);
	double xmax = peakCentre * (1.0 + frac);

	int data_bin_min = h_ARH->FindBin(xmin);
	int data_bin_max = h_ARH->FindBin(xmax);
	
    	double data_int = h_ARH->Integral(data_bin_min, data_bin_max);

	int mc_bin_min = h_mc->FindBin(xmin);
	int mc_bin_max = h_mc->FindBin(xmax);

	double mc_int = h_mc->Integral(mc_bin_min, mc_bin_max);

	//Scaling the histogram: 
	TH1F* h_mc_scaled = nullptr; 
	if (mc_int > 0) {
    		double scale = data_int / mc_int;
    		h_mc_scaled = (TH1F*)h_mc->Clone("h_mc_scaled");
    		h_mc_scaled->Scale(scale);
    		std::cout << "Scaling MC by factor: " << scale << std::endl;
		} 
	else {
   	 	std::cerr << "Error: MC integral is zero in selected region!" << std::endl;
	}

	TCanvas *c = new TCanvas("c_comapre", "Data vs Simulation", 800, 600);
	
	//Style for ARH
	h_ARH->SetMarkerStyle(20);
	h_ARH->SetMarkerColor(kRed);
	h_ARH->SetLineWidth(0);
	//Style for MC
	if (h_mc_scaled){ 
        	h_mc_scaled->SetMarkerStyle(21);
        	h_mc_scaled->SetMarkerColor(kBlue);
	}

	double maxY = h_mc_scaled ? std::max(h_ARH->GetMaximum(), h_mc_scaled->GetMaximum())
                          : h_ARH->GetMaximum();
	h_ARH->SetMaximum(1.1 * maxY);

	//setting axis title, size and location
	h_ARH->GetXaxis()->SetTitle("Energy (MeV)");   
	h_ARH->GetYaxis()->SetTitle("Counts");      
	h_ARH->GetXaxis()->SetTitleSize(0.045);
	h_ARH->GetYaxis()->SetTitleSize(0.045);
	h_ARH->GetXaxis()->SetLabelSize(0.035);
	h_ARH->GetYaxis()->SetLabelSize(0.035);

	h_ARH->GetXaxis()->SetRangeUser(xmin, xmax);

	if(h_mc_scaled){
		h_mc_scaled->GetXaxis()->SetRangeUser(xmin,xmax);
	}

	h_ARH->Draw("E1 P");
	if (h_mc_scaled) h_mc_scaled->Draw("HIST SAME");

	//To denote the incident photon energy as done in ProjCATSE()
	Double_t x[2], y[2];

    	x[0] = 0.15;
    	x[1] = 0.35;
    	y[0] = 0.45;
    	y[1] = 0.55;
	
    	TPaveText *pt = new TPaveText(x[0], y[0], x[1], y[1], "NDC");
    	pt->SetBorderSize(0);
   	pt->SetFillStyle(0);
    	pt->SetTextAlign(12);
    	pt->SetTextSize(0.04);
   
    	name = Form("E_{#gamma} = %d MeV", eg);
   	pt->AddText(name);
    	pt->Draw();

	//Legend
	TLegend *leg = new TLegend(0.75, 0.4, 0.88, 0.58);
	leg->SetHeader("In Beam", "C");
	leg->AddEntry(h_ARH, "Data", "lep");
	leg->AddEntry(h_mc_scaled, "Simulation" , "l");
	leg->Draw();

	c->Print("plots/MCvsDATA.pdf");	
}


