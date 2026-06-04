// Data Histogram File
TFile he4_data( "ARout/CB/ARH_He4.root");

// Simulation Histogram File
TFile he4_sim( "ARout/CB/MC_He4_210MeV.root");

TH1D *data_IM = (TH1D*)he4_data.Get( "PHYS_2PhotonInvariantMass");
TH1D *sim_IM = (TH1D*)he4_sim.Get( "PHYS_2PhotonInvariantMass");

void InvMass()
{
	UInt_t left, right;
	Int_t Nd, Ns;
	Double_t max, scale;
	Double_t par[3], sigma[2];

	TString name;

	TCanvas *c1 = new TCanvas ( "c1", "EMissHe4", 200, 350, 1000, 500);

	data_IM->SetTitle( "2#gamma Invariant Mass");
	data_IM->Draw();

	max = data_IM->GetMaximum();
	max *= 1.2;
	data_IM->SetMaximum( max);

	TF1 *f1 = new TF1( "f1", "gaus", 110, 150);
	data_IM->Fit( f1, "R0", "same");

	f1->GetParameters( &par[0]);
	sigma[0] = par[2];

	left = data_IM->GetXaxis()->FindBin( 100);
	right = data_IM->GetXaxis()->FindBin( 160);

	Nd = data_IM->Integral( left, right);
	Ns = sim_IM->Integral( left, right);
	scale = 0.55*Nd/Ns;

	sim_IM->Scale( scale);

	sim_IM->SetLineColor( 4);
	sim_IM->Draw( "HISTsame");

	TF1 *f2 = new TF1( "f2", "gaus", 110, 135);
	sim_IM->Fit( f2, "R0", "same");

	f2->GetParameters( &par[0]);
	sigma[1] = par[2];

	TLine *l1 = new TLine( 135, 0, 135, max);
	l1->SetLineWidth( 2);
	l1->SetLineStyle( 2);
	l1->Draw( "same");

	TLegend *pt = new TLegend( 0.2, 0.7, 0.4, 0.85);
	pt->SetFillColor( 0);
	pt->SetBorderSize( 0);
	pt->SetTextSize( 0.04);

	pt->AddEntry( sim_IM, "Simulation", "l");
	pt->AddEntry( data_IM, "Data", "l");
	pt->Draw();

	f1->Draw( "same");
	f2->SetLineColor( 4);
	f2->Draw( "same");

	TPaveText *pl = new TPaveText( 0.7, 0.5, 0.9, 0.6, "NDC");
   pl->SetBorderSize( 0);
   pl->SetFillColor( 0);
   pl->SetTextAlign( 12);
   pl->SetTextSize( 0.035);

	name = Form( "Data #sigma = %4.1f MeV", sigma[0]);
	pl->AddText( name);
	name = Form( "Simulation #sigma = %4.1f MeV", sigma[1]);
	pl->AddText( name);

	pl->Draw( "same");

	c1->Print( "plots/CB/invmass.pdf");

}
