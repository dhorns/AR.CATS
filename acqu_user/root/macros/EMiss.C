// Tagger Energy
typedef struct {

	Double_t elec;
	Int_t egamma;
	Double_t energy;
	Double_t denergy;
	Int_t scaler;

} TData;

TData tdata[328];

// Data Histogram File
TFile cats_data( "ARout/CATS/ARH_AllDays.root");

// Tagger Time for Random Subtraction
TH1D *tt = (TH1D*)cats_data.Get( "PHYS_TaggerTime");

// Tagger Sum Scalers
TH1D *ts = (TH1D*)cats_data.Get( "SumScalers2000to3000");
TH1D *ss = new TH1D( "TaggerScalers", "TaggerScalers", 328, 0, 327);

// 2D Tagger Channel vs. Missing Energy
TH2D *hP = (TH2D*)cats_data.Get( "PHYS_TaggerChannelCATSP_v_EmissP");
TH2D *hR = (TH2D*)cats_data.Get( "PHYS_TaggerChannelCATSR_v_EmissR");

// Prompt-Accidental Subtraction Ratio
// From the fit below
//const Double_t rPR = -0.0375;
//const Double_t rPR = -0.3;
//const Double_t rPR = -0.01347;
const Double_t rPR = 0.0458;

TH2D *hS2;

void ReadTagEng( Int_t eg)
{
	UInt_t i, sc;
	Double_t eff, egg, deff;
	TString file;

	file = Form( "includes/tageng%d_new.dat", eg);

	ifstream inFile( file);
	while( !inFile.eof()) {
		inFile >> i >> eff >> egg >> deff >> sc;
		tdata[i].elec = eff;
		tdata[i].energy = egg;
		tdata[i].denergy = deff;
		tdata[i].egamma = (int)(deff + 0.5);
		tdata[i].scaler = sc;
	}
	inFile.close();
}


void EMiss2D( UInt_t rebin = 1)
{

	TString name;

	gROOT->ProcessLine( "ReadTagEng(855)");

	TCanvas *c1 = new TCanvas ( "c1", "EMiss", 20, 350, 1000, 500);
	c1->Divide( 3, 1);

	c1->cd( 1);
	hP->SetTitle( "Prompt");
	hP->Draw();

	c1->cd( 2);
	hR->SetTitle( "Random");
	hR->Draw();

	c1->cd( 3);
	TH2D *hS = (TH2D*)hP->Clone( "subt");
	hS->SetTitle( "Subtracted");
	hS->Sumw2();
	hS->Add( hR, -rPR);
	hS->Draw();

	hS2 = (TH2D*)hS->Clone( "binned");
	hS2->SetTitle( "Binned");

	c1->Print( "plots/CATS/EMiss2D.pdf");

}

// Projects Missing Mass from tagger channel 'lo' to tagger channel 'hi'
void ProjEMiss( UInt_t lo, UInt_t hi)
{
	UInt_t eg_l, eg_h;
	TString name;

	eg_l = tdata[lo].egamma;
	eg_h = tdata[hi].egamma;

	TCanvas *c1 = new TCanvas ( "c1", "EMiss", 20, 350, 700, 500);

	hS2->GetYaxis()->SetRange( lo, hi);
	TH1D *proj = hS2->ProjectionX( "projX");
	proj->Draw();
	proj->SetTitle( "Missing Energy");

	TPaveText *pt = new TPaveText( 0.2, 0.4, 0.8, 0.9, "NDC");
	pt->SetBorderSize( 0);
	pt->SetFillStyle( 0);
	pt->SetTextAlign( 12);
	pt->SetTextSize( 0.05);
	name = Form( "E_{#gamma} = %d - %d MeV\n", eg_l, eg_h);
	pt->AddText( name);
	pt->Draw();

	name = Form( "plots/CATS/EMiss_%d-%d_MeV.pdf", eg_l, eg_h);
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

	TF1 *f1 = new TF1( "f1", "pol2", -50, 300);
	tt->Fit( "f1", "R");
	f1->GetParameters( &par[0]);
	f1->SetLineColor( 4);
	f1->SetLineWidth( 4);
	f1->Draw( "same");

	TF1 *f2 = new TF1("f", "[0]*x + 0.5*[1]*x*x + 0.3333*[2]*x*x*x", -1000, 1000);
	f2->SetParameters( par[0], par[1], par[2]);

	x[0] = -115;
	x[1] = -100;

	AP = f2->Eval( x[1]) - f2->Eval( x[0]);
	cout << " AP = " << AP;

	x[0] = -50;
	x[1] = 350;

	AR = f2->Eval( x[1]) - f2->Eval( x[0]);

	cout << "  AR = " << AR;

	ratio = AP/AR;

	cout << "  ratio = " << ratio;
	cout << endl;

//	c1->Print( "plots/TaggerTimeCut.pdf");

}

void TaggerScalers()
{
	UInt_t i, s_chan;
	Double_t scal;

	gROOT->ProcessLine( "ReadTagEng(855)");

	for ( i = 0; i < 328; i++)
	{
		s_chan = tdata[i].scaler;
		scal = ts->GetBinContent( s_chan-1999);
		ss->SetBinContent( i, scal);

//		cout << i;
//		cout << " " << s_chan;
//		cout << " " << scal;
//		cout << endl;

	}

	TCanvas *c1 = new TCanvas ( "c1", "Scalers", 20, 350, 700, 500);
	ss->Draw();

}

void MCvsData(UInt_t lo, UInt_t hi){// by Gen
	if (!hS2) {
        	std::cerr << "Error: Run EMiss2D() first!" << std::endl;
        	return;
    	}
    	//Reproducing projection from ProjEMiss
    	hS2->GetYaxis()->SetRange(lo, hi);
    	TH1D *h_ARH = hS2->ProjectionX("projX_temp");

    	if (!h_ARH) {
        	std::cerr << "Error: Projection failed!" << std::endl;
        	return;
    	}
	
	h_ARH->SetTitle("Missing Energy");
    	h_ARH->GetXaxis()->SetTitle("Energy (MeV)");
    	h_ARH->GetYaxis()->SetTitle("Counts");

    	// Photon energy range
    	UInt_t eg_l = tdata[lo].egamma;
    	UInt_t eg_h = tdata[hi].egamma;

    	//Retriving simulated data directories
    	TFile *f_mc_pi0 = TFile::Open("ARout/CATS/MC_Pi0.root");
    	TFile *f_mc_compton = TFile::Open("ARout/CATS/MC_Compton.root");

    	if (!f_mc_pi0 || !f_mc_compton) {
        	std::cerr << "Error opening MC files!" << std::endl;
        	return;
    	}
	//Retriving EMiss Prompt files 
    	TH1F* h_mc_pi0 = (TH1F*)f_mc_pi0->Get("PHYS_EmissP");
    	TH1F* h_mc_compton = (TH1F*)f_mc_compton->Get("PHYS_EmissP");

    	if (!h_mc_pi0 || !h_mc_compton) {
        	std::cerr << "Error: MC histograms not found!" << std::endl;
        	return;
    	}
// The above should not need changing it is calling and setting up the input files we want 

    	//Pi0 scaling
    	double eg_mid = 0.5 * (eg_l + eg_h);

    	double scale_factor;
    	if (eg_mid <= 200) scale_factor = 60;
    	else if (eg_mid >= 300) scale_factor = 30;
    	else scale_factor = 60 - (eg_mid - 200) * (30.0 / 100.0);
	
//    	TH1F* h_mc_pi0_scaled = (TH1F*)h_mc_pi0->Clone("h_mc_pi0_scaled");
//   	h_mc_pi0_scaled->Scale(scale_factor);

//	Combining MC Compton and Scaled Pi0 
//    	TH1F* h_mc_combined = (TH1F*)h_mc_compton->Clone("h_mc_combined");
//    	h_mc_combined->Add(h_mc_pi0_scaled);

	
	TH1F* h_mc_compton_norm = (TH1F*)h_mc_compton->Clone("h_mc_compton_norm");
	double int_compton = h_mc_compton_norm->Integral();
	if (int_compton > 0) {
    		h_mc_compton_norm->Scale(1.0 / int_compton);
	} else {
    		std::cerr << "Compton integral is zero!" << std::endl;
	}

	TH1F* h_mc_pi0_norm = (TH1F*)h_mc_pi0->Clone("h_mc_pi0_norm");
	double int_pi0 = h_mc_pi0_norm->Integral();
	if (int_pi0 > 0) {
   		h_mc_pi0_norm->Scale(1.0 / int_pi0);
	} else {
    	std::cerr << "Pi0 integral is zero!" << std::endl;
	}

	//Applying Pi0 scaling (relative weight) 
	TH1F* h_mc_pi0_scaled = (TH1F*)h_mc_pi0_norm->Clone("h_mc_pi0_scaled");
	h_mc_pi0_scaled->Scale(scale_factor);

	// Combining MC Pi0 scaled and MC Comtpon
	TH1F* h_mc_combined = (TH1F*)h_mc_compton_norm->Clone("h_mc_combined");
	h_mc_combined->Add(h_mc_pi0_scaled);


	TCanvas *c_mc = new TCanvas(Form("c_mc_%d_%d", eg_l, eg_h), "MC Components", 800, 900);
	c_mc->Divide(1,3);

	//MC Compton Histogram Components 
	c_mc->cd(1);
	h_mc_compton->SetTitle("Compton");
	h_mc_compton->GetXaxis()->SetTitle("Energy (MeV)");
	h_mc_compton->GetYaxis()->SetTitle("Counts");
	h_mc_compton->SetLineColor(kBlue);
	h_mc_compton->SetLineWidth(2);
	h_mc_compton->Draw("HIST");
	//h_mc_compton_norm->Draw("HIST");

	//MC Pi0 scaled Histogram Components
	c_mc->cd(2);
	h_mc_pi0_scaled->SetTitle("Pi0 (Scaled)");
	h_mc_pi0_scaled->GetXaxis()->SetTitle("Energy (MeV)");
	h_mc_pi0_scaled->GetYaxis()->SetTitle("Counts");
	h_mc_pi0_scaled->SetLineColor(kRed);
	h_mc_pi0_scaled->SetLineWidth(2);
	h_mc_pi0_scaled->Draw("HIST");

	//MC Combined Histogram (Compton + Scaled Pi0) Components
	c_mc->cd(3);
	h_mc_combined->SetTitle("Combined");
	h_mc_combined->GetXaxis()->SetTitle("Energy (MeV)");
	h_mc_combined->GetYaxis()->SetTitle("Counts");
	h_mc_combined->SetLineColor(kBlack);
	h_mc_combined->SetLineWidth(2);
	h_mc_combined->Draw("HIST");

	// Save it
	c_mc->Print(Form("plots/CATS/MC_components_%d_%d.pdf", eg_l, eg_h));

 /*   	// Peak-based scaling 
   	int peakBin = h_ARH->GetMaximumBin();
    	double peakCentre = h_ARH->GetBinCenter(peakBin);

	std::cout << "Data peak centre = " << peakCentre << std::endl;

    	double xmin = peakCentre -25;
    	double xmax = peakCentre +35;
	
   	double data_int = h_ARH->Integral(h_ARH->FindBin(xmin), h_ARH->FindBin(xmax));
    	double mc_int   = h_mc_combined->Integral(h_mc_combined->FindBin(xmin), h_mc_combined->FindBin(xmax));
	*/
	double xmin = -40;
	double xmax =  40;

	double data_int = h_ARH->Integral( h_ARH->FindBin(xmin),h_ARH->FindBin(xmax));
	double mc_int = h_mc_combined->Integral(h_mc_combined->FindBin(xmin), h_mc_combined->FindBin(xmax));

    	if (mc_int <= 0) {
        	std::cerr << "Error: MC integral is zero!" << std::endl;
        	return;
    	}

	std::cout << "xmin = " << xmin << " xmax = " << xmax << std::endl;
	std::cout << "Data integral = " << data_int << std::endl;
	std::cout << "MC integral   = " << mc_int << std::endl;

    	TH1F* h_mc_scaled = (TH1F*)h_mc_combined->Clone("h_mc_scaled");
    	if(mc_int > 0) {
    		double scale = data_int / mc_int;
    		h_mc_scaled->Scale(scale);
    		std::cout << "MC scaled by factor: " << scale << std::endl;
	} else {
    		std::cerr << "MC integral is zero in selected window!" << std::endl;
	}
	
	//h_mc_scaled->Scale(data_int / mc_int);

    	//Ploting
    	TCanvas *c = new TCanvas("c_compare", "EMiss Data vs MC", 800, 600);

    	h_ARH->SetMarkerStyle(20);
    	h_ARH->SetMarkerColor(kRed);
	h_ARH->SetMarkerSize(1.5);
    	h_mc_scaled->SetLineColor(kBlue);

    	double maxY = std::max(h_ARH->GetMaximum(), h_mc_scaled->GetMaximum());
    	h_ARH->SetMaximum(1.1 * maxY);
	
    	h_ARH->Draw("E1");
    	h_mc_scaled->Draw("HIST SAME");
	
    	// Label
    	TPaveText *pt = new TPaveText(0.2, 0.7, 0.5, 0.85, "NDC");
    	pt->SetFillStyle(0);
    	pt->SetBorderSize(0);
    	pt->AddText(Form("E_{#gamma} = %d - %d MeV", eg_l, eg_h));
    	pt->Draw();
	
    	// Legend
    	TLegend *leg = new TLegend(0.7, 0.7, 0.88, 0.88);
    	leg->AddEntry(h_ARH, "Data", "lep");
    	leg->AddEntry(h_mc_scaled, "Simulation", "l");
    	leg->Draw();

    	c->Print(Form("plots/CATS/MCvsData_%d_%d.pdf", eg_l, eg_h));
}
