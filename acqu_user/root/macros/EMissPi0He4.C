// Tagger Energy
typedef struct {

	Double_t elec;
	Int_t egamma;
	Double_t energy;
	Double_t denergy;
	Int_t scaler;

} TData;

TData tdata[328];

// Histogram File
//TFile he4_data( "ARout/CB/ARH_He4.root");
TFile he4_data( "ARout/CB/ARH_31837_He4.root");
//TFile he4_data( "ARout/CB/ARH_30files_He4.root");

// Tagger-Pi0 Time for Random Subtraction
TH1D *tt = (TH1D*)he4_data.Get( "PHYS_TaggerPi0Time");

// Tagger Sum Scalers
TH1D *ts = (TH1D*)he4_data.Get( "SumScalers2000to3000");
TH1D *ss = new TH1D( "TaggerScalers", "TaggerScalers", 328, 0, 327);

// InvMass
TH2D *im2d_p = (TH2D*)he4_data.Get( "PHYS_TaggerChannelPromptIM_v_2PhotonIMPrompt");
TH2D *im2d_r = (TH2D*)he4_data.Get( "PHYS_TaggerChannelRandomIM_v_2PhotonIMRandom");

// 2D Tagger Channel vs. Missing Energy
TH2D *hP = (TH2D*)he4_data.Get( "PHYS_TaggerChannelPromptPi0_v_MissingEnergyPromptPi0");
TH2D *hR = (TH2D*)he4_data.Get( "PHYS_TaggerChannelRandomPi0_v_MissingEnergyRandomPi0");

// Prompt-Accidental Subtraction Ratio
const Double_t rPR = 0.0636;

// Target thickness in nuclei/cm^2 for the 5-cm cell.
const Double_t t_cm2 = 0.940e23;
// Converts cm^2 to microbarn.
const Double_t t_ub = 1e30/t_cm2;
// Approximate Detection Efficiency
//const Double_t edet = 0.64;
// For 210 MeV
//const Double_t edet = 0.73;
const Double_t edet = 0.50;
// Approximate Tagging Efficiency
const Double_t etag = 0.185;

TH2D *hS2;

TH2D *im2d_sub2;
TH2D *im2d_sub3;

TH1D *scalers;

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

void EMissHe4()
{

	TString name;

	gROOT->ProcessLine( "ReadTagEng(883)");

	TCanvas *c1 = new TCanvas ( "c1", "EMissHe4", 200, 350, 1000, 500);
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

	c1->Print( "plots/CB/EMissHe4-2D.pdf");
//	c1->Print( "plots/CB/emiss_data.eps");

}

void ProjEMiss( UInt_t lo, UInt_t hi)
{
	UInt_t eg_lo, eg_hi;
	TString name;

	eg_lo = tdata[lo].egamma;
	eg_hi = tdata[hi].egamma;

	TCanvas *c1 = new TCanvas ( "c1", "EMissHe4", 20, 350, 700, 500);

	hS2->GetYaxis()->SetRange( lo, hi);
	TH1D *proj = hS2->ProjectionX( "projX");
	proj->Draw();
	proj->SetTitle( "Missing Energy");

	TPaveText *pt = new TPaveText( 0.2, 0.4, 0.8, 0.9, "NDC");
	pt->SetBorderSize( 0);
	pt->SetFillStyle( 0);
	pt->SetTextAlign( 12);
	pt->SetTextSize( 0.05);
	name = Form( "E_{#gamma} = %d - %d MeV\n", eg_lo, eg_hi);
	pt->AddText( name);
	pt->Draw();

	name = Form( "plots/CB/EMissPi0_chan%d-%d.pdf", lo, hi);
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

//	c1->Print( "plots/CB/TaggerTimeCut.pdf");

}

void TaggerScalers()
{
	UInt_t i, s_chan;
	Double_t scal;

	gROOT->ProcessLine( "ReadTagEng(883)");

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

	scalers = (TH1D*)ss->Clone( "scalers");

	TCanvas *c1 = new TCanvas ( "c1", "Scalers", 20, 350, 700, 500);
	ss->Draw();

}

void XS( UInt_t chan)
{
	Int_t binlo, binhi;
	Double_t yield, tscalers, ratio, xs;

	hS2->GetYaxis()->SetRange( chan, chan);
	TH1D *emiss = hS2->ProjectionX( "projX");

	// Integrate EMiss from -20 to 40
	binlo = emiss->GetXaxis()->FindBin( -20);
	binhi = emiss->GetXaxis()->FindBin( 40);
	yield = emiss->Integral( binlo, binhi);

	tscalers = scalers->GetBinContent( chan);

	ratio = yield/tscalers;

	xs = ratio*t_ub/edet/etag;

	cout << chan;
	cout << " " << tdata[chan].egamma;
	cout << " " << yield;
	cout << " " << tscalers;
	cout << " " << ratio;
	cout << " " << edet;
	cout << " " << etag;
	cout << " " << xs;
	cout << endl;

}

void InvMass2D()
{

	TString name;

	gROOT->ProcessLine( "ReadTagEng(883)");

	TCanvas *c1 = new TCanvas ( "c1", "EMissHe4", 200, 350, 1000, 500);
	c1->Divide( 3, 1);

	c1->cd( 1);
	im2d_p->SetTitle( "Prompt");
	im2d_p->Draw();

	c1->cd( 2);
	im2d_r->Draw();
	im2d_r->SetTitle( "Random");

	c1->cd( 3);
	TH2D *im2d_sub = (TH2D*)im2d_p->Clone( "subt");
	im2d_sub->SetTitle( "Subtracted");
	im2d_sub->Sumw2();
	im2d_sub->Add( im2d_r, -rPR);
	im2d_sub->Draw();

	im2d_sub2 = (TH2D*)im2d_sub->Clone( "binned");
	im2d_sub2->SetTitle( "Binned");

	c1->Print( "plots/CB/InvMass2D.pdf");

}

void ProjInvMass( UInt_t lo, UInt_t hi)
{
	UInt_t eg_lo, eg_hi;
	TString name;

	gROOT->ProcessLine( "ReadTagEng(883)");

	eg_lo = tdata[lo].egamma;
	eg_hi = tdata[hi].egamma;

	TCanvas *c1 = new TCanvas ( "c1", "2g Invariant Mass", 20, 350, 700, 500);

	im2d_sub2->GetYaxis()->SetRange( lo, hi);
	TH1D *proj = im2d_sub2->ProjectionX( "projX");
	proj->Draw();
	proj->SetTitle( "Invariant Mass");

	TPaveText *pt = new TPaveText( 0.5, 0.5, 0.7, 0.6, "NDC");
	pt->SetBorderSize( 0);
	pt->SetFillStyle( 0);
	pt->SetTextAlign( 12);
	pt->SetTextSize( 0.05);
	name = Form( "E_{#gamma} = %d - %d MeV\n", eg_lo, eg_hi);
	pt->AddText( name);
	pt->Draw();

	name = Form( "plots/CB/InvMass_chan%d-%d.pdf", lo, hi);
	c1->Print( name);

}

// Simulation Histogram File
//TFile he4_sim( "ARout/CB/MC_He4_210MeV.root");
TFile he4_sim( "ARout/CB/MC_He4_300MeV.root");
TH1D *sim_IM = (TH1D*)he4_sim.Get( "PHYS_2PhotonIM");

void InvMassComp()
{
	UInt_t left, right;
	Int_t Nd, Ns;
	Double_t max, scale;
	Double_t par[3], mean[2], sigma[2];
	UInt_t eg_lo, eg_hi;

	TString name;

//	UInt_t lo = 50;
//	UInt_t hi = 50;
	UInt_t lo = 87;
	UInt_t hi = 87;

	gROOT->ProcessLine( "ReadTagEng(883)");

	eg_lo = tdata[lo].egamma;
	eg_hi = tdata[hi].egamma;

	TCanvas *c1 = new TCanvas ( "c1", "EMissHe4", 200, 350, 1000, 500);

	im2d_sub3 = (TH2D*)im2d_sub2->Clone( "binned");
	TH1D *proj = im2d_sub3->ProjectionX( "projX");
	proj->Draw();
	proj->SetTitle( "Invariant Mass");

	max = proj->GetMaximum();
	max *= 1.2;
	proj->SetMaximum( max);

	TF1 *f1 = new TF1( "f1", "gaus", 110, 150);
	proj->Fit( f1, "R0", "same");

	f1->GetParameters( &par[0]);
	mean[0] = par[1];
	sigma[0] = par[2];

	left = proj->GetXaxis()->FindBin( 100);
	right = proj->GetXaxis()->FindBin( 170);
	Nd = proj->Integral( left, right);
	cout << left;
	cout << " " << right;
	cout << " " << Nd;
	cout << endl;

	left = sim_IM->GetXaxis()->FindBin( 100);
	right = sim_IM->GetXaxis()->FindBin( 170);
	Ns = sim_IM->Integral( left, right);
	scale = (Double_t) Nd/Ns;
	cout << left;
	cout << " " << right;
	cout << " " << Ns;
	cout << " " << scale;
	cout << endl;

	sim_IM->Scale( scale);

	sim_IM->SetLineColor( 4);
	sim_IM->Draw( "HISTsame");

	TF1 *f2 = new TF1( "f2", "gaus", 110, 135);
	sim_IM->Fit( f2, "R0", "same");

	f2->GetParameters( &par[0]);
	mean[1] = par[1];
	sigma[1] = par[2];

	TLine *l1 = new TLine( 135, 0, 135, max);
	l1->SetLineWidth( 2);
	l1->SetLineStyle( 2);
	l1->Draw( "same");

	TLegend *pt = new TLegend( 0.5, 0.7, 0.7, 0.85);
	pt->SetFillColor( 0);
	pt->SetBorderSize( 0);
	pt->SetTextSize( 0.04);

	pt->AddEntry( sim_IM, "Simulation", "l");
	pt->AddEntry( im2d_sub3, "Data", "l");
	pt->Draw();

	f1->Draw( "same");
	f2->SetLineColor( 4);
	f2->Draw( "same");

	TPaveText *pl = new TPaveText( 0.6, 0.2, 0.9, 0.3, "NDC");
   pl->SetBorderSize( 0);
   pl->SetFillColor( 0);
   pl->SetTextAlign( 12);
   pl->SetTextSize( 0.035);

	name = Form( "Data: mean = %5.1f MeV  #sigma = %4.1f MeV", mean[0], sigma[0]);
	pl->AddText( name);
	name = Form( "Sim: mean = %5.1f MeV  #sigma = %4.1f MeV", mean[1], sigma[1]);
	pl->AddText( name);

	pl->Draw( "same");

	c1->Print( "plots/CB/invmass.pdf");

}
