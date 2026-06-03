// Tagger Energy
typedef struct {

	Double_t elec;
	Int_t egamma;
	Double_t energy;
	Double_t denergy;
	Int_t scaler;

} TData;

TData tdata[328];

Double_t ResFunc( UInt_t i)
{
	Double_t start, end;
	Double_t delta;

	start = 0.004;
	end = 0.0011;

	delta = (start - end)/327;

	return( start - i*delta);

}

void ReadTagEng( Int_t eg)
{
	UInt_t i, sc;
	Double_t eff, deff;
	TString file, name;

	file = Form( "includes/tageng%d.dat", eg);

	ifstream inFile( file);
	while( !inFile.eof()) {
		inFile >> i >> eff >> deff >> sc;
		tdata[i].elec = eff;
		tdata[i].energy = deff;
		tdata[i].egamma = (int)(deff + 0.5);
		tdata[i].denergy = ResFunc( i)*eg;
		tdata[i].scaler = sc;
	}
	inFile.close();

	file = Form( "includes/tageng%d_new.dat", eg);
	ofstream outFile( file);
	for ( i = 0; i < 327; i++)
	{
		name = Form( "%3d %5.1f %5.1f %3.1f %4d\n", i, tdata[i].elec, tdata[i].energy, tdata[i].denergy, tdata[i].scaler);
		outFile << name;
	}
	outFile.close();

}

void PrintRes()
{
	UInt_t i;

	for ( i = 0; i < 328; i++)
	{
		cout << i;
		cout << " " << ResFunc( i);
		cout << endl;
	}
}
