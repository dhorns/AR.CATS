#include "TA2GenericApp_CATSCore.h"

TA2GenericApp_CATSCore::TA2GenericApp_CATSCore(const char* name, TA2System* apparatus)
  :TA2Detector(name, apparatus)
//TA2TAPS_BaF2::TA2TAPS_BaF2(const char* name, TA2System* apparatus)
//             :TA2ClusterDetector(name, apparatus) //Vergleich TAPS-BaFs
{
      
}

TA2GenericApp_CATSCore::~TA2GenericApp_CATSCore()
//2TAPS_BaF2::~TA2TAPS_BaF2()// Vergleich TAPS-BaFs
{  
    DeleteArrays();
}

void TA2GenericApp_CATSCore::LoadVariable()
{
  //Input name - variable pointer associations for any subsequent
  //cut or histogram setup.
  //LoadVariable( "name", pointer-to-variable, type-spec );
  //NB scaler variable pointers need the preceeding &
  //while array variable pointers do not.
  //type-spec ED prefix for a Double_t variable
  //          EI prefix for an Int_t variable
  //type-spec SingleX for a single-valued variable
  //          MultiX  for a multi-valued variable

  //                              name     pointer          type-spec
  //TA2DataManager::LoadVariable("Energy", &fTotalEnergy,   EDSingleX);

  //Call the standard detector
  TA2Detector::LoadVariable();
}

void TA2GenericApp_CATSCore::SaveDecoded()
{
  // Save decoded info to Root Tree file
}

void TA2GenericApp_CATSCore::SetConfig(Char_t* line, Int_t key)
{
    //Load parameters from file or command line
  switch(key)
  {
  default:
    //Command not found...possible pass to next config
    TA2Detector::SetConfig(line, key);
    break;
  }
  return;
}

//void TA2GenericApp_CATSCore::PostInit()
//{
//}

ClassImp(TA2GenericApp_CATSCore)
