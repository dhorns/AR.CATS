// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddICaLibdIsrcdIG__CaLib
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibCBTimeWalk.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibData.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibEnergy.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDDroop.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDEnergy.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDEnergyTrad.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDPhi.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPed.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibQuadEnergy.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibTAPSEnergySG.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibTAPSPSA.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibTargetPosition.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibType.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibVetoCorr.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibVetoEnergy.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCConfig.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCContainer.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCFileManager.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCMySQLManager.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCReadACQU.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCReadARCalib.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCReadConfig.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCUtils.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCWriteARCalib.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TIndicatorLine.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace TCConfig {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TCConfig_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TCConfig", 0 /*version*/, "TCConfig.h", 35,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TCConfig_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TCConfig_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace TCUtils {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TCUtils_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TCUtils", 0 /*version*/, "TCUtils.h", 25,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TCUtils_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TCUtils_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_TCCalibData(void *p = nullptr);
   static void *newArray_TCCalibData(Long_t size, void *p);
   static void delete_TCCalibData(void *p);
   static void deleteArray_TCCalibData(void *p);
   static void destruct_TCCalibData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibData*)
   {
      ::TCCalibData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibData", ::TCCalibData::Class_Version(), "TCCalibData.h", 22,
                  typeid(::TCCalibData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibData::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibData) );
      instance.SetNew(&new_TCCalibData);
      instance.SetNewArray(&newArray_TCCalibData);
      instance.SetDelete(&delete_TCCalibData);
      instance.SetDeleteArray(&deleteArray_TCCalibData);
      instance.SetDestructor(&destruct_TCCalibData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibData*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibType(void *p = nullptr);
   static void *newArray_TCCalibType(Long_t size, void *p);
   static void delete_TCCalibType(void *p);
   static void deleteArray_TCCalibType(void *p);
   static void destruct_TCCalibType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibType*)
   {
      ::TCCalibType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibType >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibType", ::TCCalibType::Class_Version(), "TCCalibType.h", 24,
                  typeid(::TCCalibType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibType::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibType) );
      instance.SetNew(&new_TCCalibType);
      instance.SetNewArray(&newArray_TCCalibType);
      instance.SetDelete(&delete_TCCalibType);
      instance.SetDeleteArray(&deleteArray_TCCalibType);
      instance.SetDestructor(&destruct_TCCalibType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibType*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCConfigElement(void *p);
   static void deleteArray_TCConfigElement(void *p);
   static void destruct_TCConfigElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCConfigElement*)
   {
      ::TCConfigElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCConfigElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCConfigElement", ::TCConfigElement::Class_Version(), "TCReadConfig.h", 28,
                  typeid(::TCConfigElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCConfigElement::Dictionary, isa_proxy, 4,
                  sizeof(::TCConfigElement) );
      instance.SetDelete(&delete_TCConfigElement);
      instance.SetDeleteArray(&deleteArray_TCConfigElement);
      instance.SetDestructor(&destruct_TCConfigElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCConfigElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCConfigElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCConfigElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCReadConfig(void *p = nullptr);
   static void *newArray_TCReadConfig(Long_t size, void *p);
   static void delete_TCReadConfig(void *p);
   static void deleteArray_TCReadConfig(void *p);
   static void destruct_TCReadConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCReadConfig*)
   {
      ::TCReadConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCReadConfig >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCReadConfig", ::TCReadConfig::Class_Version(), "TCReadConfig.h", 47,
                  typeid(::TCReadConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCReadConfig::Dictionary, isa_proxy, 4,
                  sizeof(::TCReadConfig) );
      instance.SetNew(&new_TCReadConfig);
      instance.SetNewArray(&newArray_TCReadConfig);
      instance.SetDelete(&delete_TCReadConfig);
      instance.SetDeleteArray(&deleteArray_TCReadConfig);
      instance.SetDestructor(&destruct_TCReadConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCReadConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCReadConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCReadConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCACQUFile(void *p = nullptr);
   static void *newArray_TCACQUFile(Long_t size, void *p);
   static void delete_TCACQUFile(void *p);
   static void deleteArray_TCACQUFile(void *p);
   static void destruct_TCACQUFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCACQUFile*)
   {
      ::TCACQUFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCACQUFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCACQUFile", ::TCACQUFile::Class_Version(), "TCReadACQU.h", 68,
                  typeid(::TCACQUFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCACQUFile::Dictionary, isa_proxy, 4,
                  sizeof(::TCACQUFile) );
      instance.SetNew(&new_TCACQUFile);
      instance.SetNewArray(&newArray_TCACQUFile);
      instance.SetDelete(&delete_TCACQUFile);
      instance.SetDeleteArray(&deleteArray_TCACQUFile);
      instance.SetDestructor(&destruct_TCACQUFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCACQUFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCACQUFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCACQUFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCReadACQU(void *p = nullptr);
   static void *newArray_TCReadACQU(Long_t size, void *p);
   static void delete_TCReadACQU(void *p);
   static void deleteArray_TCReadACQU(void *p);
   static void destruct_TCReadACQU(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCReadACQU*)
   {
      ::TCReadACQU *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCReadACQU >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCReadACQU", ::TCReadACQU::Class_Version(), "TCReadACQU.h", 284,
                  typeid(::TCReadACQU), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCReadACQU::Dictionary, isa_proxy, 4,
                  sizeof(::TCReadACQU) );
      instance.SetNew(&new_TCReadACQU);
      instance.SetNewArray(&newArray_TCReadACQU);
      instance.SetDelete(&delete_TCReadACQU);
      instance.SetDeleteArray(&deleteArray_TCReadACQU);
      instance.SetDestructor(&destruct_TCReadACQU);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCReadACQU*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCReadACQU*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCReadACQU*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCARElement(void *p = nullptr);
   static void *newArray_TCARElement(Long_t size, void *p);
   static void delete_TCARElement(void *p);
   static void deleteArray_TCARElement(void *p);
   static void destruct_TCARElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCARElement*)
   {
      ::TCARElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCARElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCARElement", ::TCARElement::Class_Version(), "TCReadARCalib.h", 28,
                  typeid(::TCARElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCARElement::Dictionary, isa_proxy, 4,
                  sizeof(::TCARElement) );
      instance.SetNew(&new_TCARElement);
      instance.SetNewArray(&newArray_TCARElement);
      instance.SetDelete(&delete_TCARElement);
      instance.SetDeleteArray(&deleteArray_TCARElement);
      instance.SetDestructor(&destruct_TCARElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCARElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCARElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCARElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCARTimeWalk(void *p = nullptr);
   static void *newArray_TCARTimeWalk(Long_t size, void *p);
   static void delete_TCARTimeWalk(void *p);
   static void deleteArray_TCARTimeWalk(void *p);
   static void destruct_TCARTimeWalk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCARTimeWalk*)
   {
      ::TCARTimeWalk *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCARTimeWalk >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCARTimeWalk", ::TCARTimeWalk::Class_Version(), "TCReadARCalib.h", 168,
                  typeid(::TCARTimeWalk), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCARTimeWalk::Dictionary, isa_proxy, 4,
                  sizeof(::TCARTimeWalk) );
      instance.SetNew(&new_TCARTimeWalk);
      instance.SetNewArray(&newArray_TCARTimeWalk);
      instance.SetDelete(&delete_TCARTimeWalk);
      instance.SetDeleteArray(&deleteArray_TCARTimeWalk);
      instance.SetDestructor(&destruct_TCARTimeWalk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCARTimeWalk*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCARTimeWalk*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCARTimeWalk*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCARNeighbours(void *p = nullptr);
   static void *newArray_TCARNeighbours(Long_t size, void *p);
   static void delete_TCARNeighbours(void *p);
   static void deleteArray_TCARNeighbours(void *p);
   static void destruct_TCARNeighbours(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCARNeighbours*)
   {
      ::TCARNeighbours *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCARNeighbours >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCARNeighbours", ::TCARNeighbours::Class_Version(), "TCReadARCalib.h", 216,
                  typeid(::TCARNeighbours), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCARNeighbours::Dictionary, isa_proxy, 4,
                  sizeof(::TCARNeighbours) );
      instance.SetNew(&new_TCARNeighbours);
      instance.SetNewArray(&newArray_TCARNeighbours);
      instance.SetDelete(&delete_TCARNeighbours);
      instance.SetDeleteArray(&deleteArray_TCARNeighbours);
      instance.SetDestructor(&destruct_TCARNeighbours);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCARNeighbours*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCARNeighbours*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCARNeighbours*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCReadARCalib(void *p = nullptr);
   static void *newArray_TCReadARCalib(Long_t size, void *p);
   static void delete_TCReadARCalib(void *p);
   static void deleteArray_TCReadARCalib(void *p);
   static void destruct_TCReadARCalib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCReadARCalib*)
   {
      ::TCReadARCalib *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCReadARCalib >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCReadARCalib", ::TCReadARCalib::Class_Version(), "TCReadARCalib.h", 261,
                  typeid(::TCReadARCalib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCReadARCalib::Dictionary, isa_proxy, 4,
                  sizeof(::TCReadARCalib) );
      instance.SetNew(&new_TCReadARCalib);
      instance.SetNewArray(&newArray_TCReadARCalib);
      instance.SetDelete(&delete_TCReadARCalib);
      instance.SetDeleteArray(&deleteArray_TCReadARCalib);
      instance.SetDestructor(&destruct_TCReadARCalib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCReadARCalib*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCReadARCalib*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCReadARCalib*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCRun(void *p = nullptr);
   static void *newArray_TCRun(Long_t size, void *p);
   static void delete_TCRun(void *p);
   static void deleteArray_TCRun(void *p);
   static void destruct_TCRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCRun*)
   {
      ::TCRun *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCRun >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCRun", ::TCRun::Class_Version(), "TCContainer.h", 26,
                  typeid(::TCRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCRun::Dictionary, isa_proxy, 4,
                  sizeof(::TCRun) );
      instance.SetNew(&new_TCRun);
      instance.SetNewArray(&newArray_TCRun);
      instance.SetDelete(&delete_TCRun);
      instance.SetDeleteArray(&deleteArray_TCRun);
      instance.SetDestructor(&destruct_TCRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCRun*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCRun*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCRun*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibration(void *p = nullptr);
   static void *newArray_TCCalibration(Long_t size, void *p);
   static void delete_TCCalibration(void *p);
   static void deleteArray_TCCalibration(void *p);
   static void destruct_TCCalibration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibration*)
   {
      ::TCCalibration *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibration >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibration", ::TCCalibration::Class_Version(), "TCContainer.h", 109,
                  typeid(::TCCalibration), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibration::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibration) );
      instance.SetNew(&new_TCCalibration);
      instance.SetNewArray(&newArray_TCCalibration);
      instance.SetDelete(&delete_TCCalibration);
      instance.SetDeleteArray(&deleteArray_TCCalibration);
      instance.SetDestructor(&destruct_TCCalibration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibration*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibration*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibration*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCContainer(void *p = nullptr);
   static void *newArray_TCContainer(Long_t size, void *p);
   static void delete_TCContainer(void *p);
   static void deleteArray_TCContainer(void *p);
   static void destruct_TCContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCContainer*)
   {
      ::TCContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCContainer", ::TCContainer::Class_Version(), "TCContainer.h", 178,
                  typeid(::TCContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCContainer::Dictionary, isa_proxy, 4,
                  sizeof(::TCContainer) );
      instance.SetNew(&new_TCContainer);
      instance.SetNewArray(&newArray_TCContainer);
      instance.SetDelete(&delete_TCContainer);
      instance.SetDeleteArray(&deleteArray_TCContainer);
      instance.SetDestructor(&destruct_TCContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCMySQLManager(void *p = nullptr);
   static void *newArray_TCMySQLManager(Long_t size, void *p);
   static void delete_TCMySQLManager(void *p);
   static void deleteArray_TCMySQLManager(void *p);
   static void destruct_TCMySQLManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCMySQLManager*)
   {
      ::TCMySQLManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCMySQLManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCMySQLManager", ::TCMySQLManager::Class_Version(), "TCMySQLManager.h", 38,
                  typeid(::TCMySQLManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCMySQLManager::Dictionary, isa_proxy, 4,
                  sizeof(::TCMySQLManager) );
      instance.SetNew(&new_TCMySQLManager);
      instance.SetNewArray(&newArray_TCMySQLManager);
      instance.SetDelete(&delete_TCMySQLManager);
      instance.SetDeleteArray(&deleteArray_TCMySQLManager);
      instance.SetDestructor(&destruct_TCMySQLManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCMySQLManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCMySQLManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCMySQLManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCCalib(void *p);
   static void deleteArray_TCCalib(void *p);
   static void destruct_TCCalib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalib*)
   {
      ::TCCalib *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalib >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalib", ::TCCalib::Class_Version(), "TCCalib.h", 36,
                  typeid(::TCCalib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalib::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalib) );
      instance.SetDelete(&delete_TCCalib);
      instance.SetDeleteArray(&deleteArray_TCCalib);
      instance.SetDestructor(&destruct_TCCalib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalib*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalib*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalib*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCFileManager(void *p = nullptr);
   static void *newArray_TCFileManager(Long_t size, void *p);
   static void delete_TCFileManager(void *p);
   static void deleteArray_TCFileManager(void *p);
   static void destruct_TCFileManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCFileManager*)
   {
      ::TCFileManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCFileManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCFileManager", ::TCFileManager::Class_Version(), "TCFileManager.h", 32,
                  typeid(::TCFileManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCFileManager::Dictionary, isa_proxy, 4,
                  sizeof(::TCFileManager) );
      instance.SetNew(&new_TCFileManager);
      instance.SetNewArray(&newArray_TCFileManager);
      instance.SetDelete(&delete_TCFileManager);
      instance.SetDeleteArray(&deleteArray_TCFileManager);
      instance.SetDestructor(&destruct_TCFileManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCFileManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCFileManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCFileManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibCBTimeWalk(void *p = nullptr);
   static void *newArray_TCCalibCBTimeWalk(Long_t size, void *p);
   static void delete_TCCalibCBTimeWalk(void *p);
   static void deleteArray_TCCalibCBTimeWalk(void *p);
   static void destruct_TCCalibCBTimeWalk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibCBTimeWalk*)
   {
      ::TCCalibCBTimeWalk *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibCBTimeWalk >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibCBTimeWalk", ::TCCalibCBTimeWalk::Class_Version(), "TCCalibCBTimeWalk.h", 28,
                  typeid(::TCCalibCBTimeWalk), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibCBTimeWalk::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibCBTimeWalk) );
      instance.SetNew(&new_TCCalibCBTimeWalk);
      instance.SetNewArray(&newArray_TCCalibCBTimeWalk);
      instance.SetDelete(&delete_TCCalibCBTimeWalk);
      instance.SetDeleteArray(&deleteArray_TCCalibCBTimeWalk);
      instance.SetDestructor(&destruct_TCCalibCBTimeWalk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibCBTimeWalk*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibCBTimeWalk*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibCBTimeWalk*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibDiscrThr(void *p = nullptr);
   static void *newArray_TCCalibDiscrThr(Long_t size, void *p);
   static void delete_TCCalibDiscrThr(void *p);
   static void deleteArray_TCCalibDiscrThr(void *p);
   static void destruct_TCCalibDiscrThr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibDiscrThr*)
   {
      ::TCCalibDiscrThr *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibDiscrThr >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibDiscrThr", ::TCCalibDiscrThr::Class_Version(), "TCCalibDiscrThr.h", 28,
                  typeid(::TCCalibDiscrThr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibDiscrThr::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibDiscrThr) );
      instance.SetNew(&new_TCCalibDiscrThr);
      instance.SetNewArray(&newArray_TCCalibDiscrThr);
      instance.SetDelete(&delete_TCCalibDiscrThr);
      instance.SetDeleteArray(&deleteArray_TCCalibDiscrThr);
      instance.SetDestructor(&destruct_TCCalibDiscrThr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibDiscrThr*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibDiscrThr*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibDiscrThr*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibCBLED(void *p = nullptr);
   static void *newArray_TCCalibCBLED(Long_t size, void *p);
   static void delete_TCCalibCBLED(void *p);
   static void deleteArray_TCCalibCBLED(void *p);
   static void destruct_TCCalibCBLED(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibCBLED*)
   {
      ::TCCalibCBLED *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibCBLED >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibCBLED", ::TCCalibCBLED::Class_Version(), "TCCalibDiscrThr.h", 59,
                  typeid(::TCCalibCBLED), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibCBLED::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibCBLED) );
      instance.SetNew(&new_TCCalibCBLED);
      instance.SetNewArray(&newArray_TCCalibCBLED);
      instance.SetDelete(&delete_TCCalibCBLED);
      instance.SetDeleteArray(&deleteArray_TCCalibCBLED);
      instance.SetDestructor(&destruct_TCCalibCBLED);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibCBLED*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibCBLED*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibCBLED*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSLED1(void *p = nullptr);
   static void *newArray_TCCalibTAPSLED1(Long_t size, void *p);
   static void delete_TCCalibTAPSLED1(void *p);
   static void deleteArray_TCCalibTAPSLED1(void *p);
   static void destruct_TCCalibTAPSLED1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSLED1*)
   {
      ::TCCalibTAPSLED1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSLED1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSLED1", ::TCCalibTAPSLED1::Class_Version(), "TCCalibDiscrThr.h", 73,
                  typeid(::TCCalibTAPSLED1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSLED1::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSLED1) );
      instance.SetNew(&new_TCCalibTAPSLED1);
      instance.SetNewArray(&newArray_TCCalibTAPSLED1);
      instance.SetDelete(&delete_TCCalibTAPSLED1);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSLED1);
      instance.SetDestructor(&destruct_TCCalibTAPSLED1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSLED1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSLED1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSLED1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSLED2(void *p = nullptr);
   static void *newArray_TCCalibTAPSLED2(Long_t size, void *p);
   static void delete_TCCalibTAPSLED2(void *p);
   static void deleteArray_TCCalibTAPSLED2(void *p);
   static void destruct_TCCalibTAPSLED2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSLED2*)
   {
      ::TCCalibTAPSLED2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSLED2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSLED2", ::TCCalibTAPSLED2::Class_Version(), "TCCalibDiscrThr.h", 87,
                  typeid(::TCCalibTAPSLED2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSLED2::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSLED2) );
      instance.SetNew(&new_TCCalibTAPSLED2);
      instance.SetNewArray(&newArray_TCCalibTAPSLED2);
      instance.SetDelete(&delete_TCCalibTAPSLED2);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSLED2);
      instance.SetDestructor(&destruct_TCCalibTAPSLED2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSLED2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSLED2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSLED2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSCFD(void *p = nullptr);
   static void *newArray_TCCalibTAPSCFD(Long_t size, void *p);
   static void delete_TCCalibTAPSCFD(void *p);
   static void deleteArray_TCCalibTAPSCFD(void *p);
   static void destruct_TCCalibTAPSCFD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSCFD*)
   {
      ::TCCalibTAPSCFD *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSCFD >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSCFD", ::TCCalibTAPSCFD::Class_Version(), "TCCalibDiscrThr.h", 100,
                  typeid(::TCCalibTAPSCFD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSCFD::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSCFD) );
      instance.SetNew(&new_TCCalibTAPSCFD);
      instance.SetNewArray(&newArray_TCCalibTAPSCFD);
      instance.SetDelete(&delete_TCCalibTAPSCFD);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSCFD);
      instance.SetDestructor(&destruct_TCCalibTAPSCFD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSCFD*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSCFD*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSCFD*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibVetoLED(void *p = nullptr);
   static void *newArray_TCCalibVetoLED(Long_t size, void *p);
   static void delete_TCCalibVetoLED(void *p);
   static void deleteArray_TCCalibVetoLED(void *p);
   static void destruct_TCCalibVetoLED(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibVetoLED*)
   {
      ::TCCalibVetoLED *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibVetoLED >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibVetoLED", ::TCCalibVetoLED::Class_Version(), "TCCalibDiscrThr.h", 113,
                  typeid(::TCCalibVetoLED), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibVetoLED::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibVetoLED) );
      instance.SetNew(&new_TCCalibVetoLED);
      instance.SetNewArray(&newArray_TCCalibVetoLED);
      instance.SetDelete(&delete_TCCalibVetoLED);
      instance.SetDeleteArray(&deleteArray_TCCalibVetoLED);
      instance.SetDestructor(&destruct_TCCalibVetoLED);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibVetoLED*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibVetoLED*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibVetoLED*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TIndicatorLine(void *p = nullptr);
   static void *newArray_TIndicatorLine(Long_t size, void *p);
   static void delete_TIndicatorLine(void *p);
   static void deleteArray_TIndicatorLine(void *p);
   static void destruct_TIndicatorLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TIndicatorLine*)
   {
      ::TIndicatorLine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TIndicatorLine >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TIndicatorLine", ::TIndicatorLine::Class_Version(), "TIndicatorLine.h", 6,
                  typeid(::TIndicatorLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TIndicatorLine::Dictionary, isa_proxy, 4,
                  sizeof(::TIndicatorLine) );
      instance.SetNew(&new_TIndicatorLine);
      instance.SetNewArray(&newArray_TIndicatorLine);
      instance.SetDelete(&delete_TIndicatorLine);
      instance.SetDeleteArray(&deleteArray_TIndicatorLine);
      instance.SetDestructor(&destruct_TIndicatorLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TIndicatorLine*)
   {
      return GenerateInitInstanceLocal(static_cast<::TIndicatorLine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TIndicatorLine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCCalibEnergy(void *p);
   static void deleteArray_TCCalibEnergy(void *p);
   static void destruct_TCCalibEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibEnergy*)
   {
      ::TCCalibEnergy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibEnergy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibEnergy", ::TCCalibEnergy::Class_Version(), "TCCalibEnergy.h", 31,
                  typeid(::TCCalibEnergy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibEnergy::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibEnergy) );
      instance.SetDelete(&delete_TCCalibEnergy);
      instance.SetDeleteArray(&deleteArray_TCCalibEnergy);
      instance.SetDestructor(&destruct_TCCalibEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibEnergy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibEnergy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibEnergy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibCBEnergy(void *p = nullptr);
   static void *newArray_TCCalibCBEnergy(Long_t size, void *p);
   static void delete_TCCalibCBEnergy(void *p);
   static void deleteArray_TCCalibCBEnergy(void *p);
   static void destruct_TCCalibCBEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibCBEnergy*)
   {
      ::TCCalibCBEnergy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibCBEnergy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibCBEnergy", ::TCCalibCBEnergy::Class_Version(), "TCCalibEnergy.h", 62,
                  typeid(::TCCalibCBEnergy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibCBEnergy::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibCBEnergy) );
      instance.SetNew(&new_TCCalibCBEnergy);
      instance.SetNewArray(&newArray_TCCalibCBEnergy);
      instance.SetDelete(&delete_TCCalibCBEnergy);
      instance.SetDeleteArray(&deleteArray_TCCalibCBEnergy);
      instance.SetDestructor(&destruct_TCCalibCBEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibCBEnergy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibCBEnergy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibCBEnergy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSEnergyLG(void *p = nullptr);
   static void *newArray_TCCalibTAPSEnergyLG(Long_t size, void *p);
   static void delete_TCCalibTAPSEnergyLG(void *p);
   static void deleteArray_TCCalibTAPSEnergyLG(void *p);
   static void destruct_TCCalibTAPSEnergyLG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSEnergyLG*)
   {
      ::TCCalibTAPSEnergyLG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSEnergyLG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSEnergyLG", ::TCCalibTAPSEnergyLG::Class_Version(), "TCCalibEnergy.h", 80,
                  typeid(::TCCalibTAPSEnergyLG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSEnergyLG::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSEnergyLG) );
      instance.SetNew(&new_TCCalibTAPSEnergyLG);
      instance.SetNewArray(&newArray_TCCalibTAPSEnergyLG);
      instance.SetDelete(&delete_TCCalibTAPSEnergyLG);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSEnergyLG);
      instance.SetDestructor(&destruct_TCCalibTAPSEnergyLG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSEnergyLG*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSEnergyLG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSEnergyLG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibPIDDroop(void *p = nullptr);
   static void *newArray_TCCalibPIDDroop(Long_t size, void *p);
   static void delete_TCCalibPIDDroop(void *p);
   static void deleteArray_TCCalibPIDDroop(void *p);
   static void destruct_TCCalibPIDDroop(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibPIDDroop*)
   {
      ::TCCalibPIDDroop *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibPIDDroop >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibPIDDroop", ::TCCalibPIDDroop::Class_Version(), "TCCalibPIDDroop.h", 30,
                  typeid(::TCCalibPIDDroop), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibPIDDroop::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibPIDDroop) );
      instance.SetNew(&new_TCCalibPIDDroop);
      instance.SetNewArray(&newArray_TCCalibPIDDroop);
      instance.SetDelete(&delete_TCCalibPIDDroop);
      instance.SetDeleteArray(&deleteArray_TCCalibPIDDroop);
      instance.SetDestructor(&destruct_TCCalibPIDDroop);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibPIDDroop*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibPIDDroop*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibPIDDroop*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibPIDEnergy(void *p = nullptr);
   static void *newArray_TCCalibPIDEnergy(Long_t size, void *p);
   static void delete_TCCalibPIDEnergy(void *p);
   static void deleteArray_TCCalibPIDEnergy(void *p);
   static void destruct_TCCalibPIDEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibPIDEnergy*)
   {
      ::TCCalibPIDEnergy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibPIDEnergy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibPIDEnergy", ::TCCalibPIDEnergy::Class_Version(), "TCCalibPIDEnergy.h", 31,
                  typeid(::TCCalibPIDEnergy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibPIDEnergy::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibPIDEnergy) );
      instance.SetNew(&new_TCCalibPIDEnergy);
      instance.SetNewArray(&newArray_TCCalibPIDEnergy);
      instance.SetDelete(&delete_TCCalibPIDEnergy);
      instance.SetDeleteArray(&deleteArray_TCCalibPIDEnergy);
      instance.SetDestructor(&destruct_TCCalibPIDEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibPIDEnergy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibPIDEnergy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibPIDEnergy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibPIDEnergyTrad(void *p = nullptr);
   static void *newArray_TCCalibPIDEnergyTrad(Long_t size, void *p);
   static void delete_TCCalibPIDEnergyTrad(void *p);
   static void deleteArray_TCCalibPIDEnergyTrad(void *p);
   static void destruct_TCCalibPIDEnergyTrad(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibPIDEnergyTrad*)
   {
      ::TCCalibPIDEnergyTrad *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibPIDEnergyTrad >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibPIDEnergyTrad", ::TCCalibPIDEnergyTrad::Class_Version(), "TCCalibPIDEnergyTrad.h", 31,
                  typeid(::TCCalibPIDEnergyTrad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibPIDEnergyTrad::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibPIDEnergyTrad) );
      instance.SetNew(&new_TCCalibPIDEnergyTrad);
      instance.SetNewArray(&newArray_TCCalibPIDEnergyTrad);
      instance.SetDelete(&delete_TCCalibPIDEnergyTrad);
      instance.SetDeleteArray(&deleteArray_TCCalibPIDEnergyTrad);
      instance.SetDestructor(&destruct_TCCalibPIDEnergyTrad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibPIDEnergyTrad*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibPIDEnergyTrad*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibPIDEnergyTrad*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibPIDPhi(void *p = nullptr);
   static void *newArray_TCCalibPIDPhi(Long_t size, void *p);
   static void delete_TCCalibPIDPhi(void *p);
   static void deleteArray_TCCalibPIDPhi(void *p);
   static void destruct_TCCalibPIDPhi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibPIDPhi*)
   {
      ::TCCalibPIDPhi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibPIDPhi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibPIDPhi", ::TCCalibPIDPhi::Class_Version(), "TCCalibPIDPhi.h", 28,
                  typeid(::TCCalibPIDPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibPIDPhi::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibPIDPhi) );
      instance.SetNew(&new_TCCalibPIDPhi);
      instance.SetNewArray(&newArray_TCCalibPIDPhi);
      instance.SetDelete(&delete_TCCalibPIDPhi);
      instance.SetDeleteArray(&deleteArray_TCCalibPIDPhi);
      instance.SetDestructor(&destruct_TCCalibPIDPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibPIDPhi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibPIDPhi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibPIDPhi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibPed(void *p = nullptr);
   static void *newArray_TCCalibPed(Long_t size, void *p);
   static void delete_TCCalibPed(void *p);
   static void deleteArray_TCCalibPed(void *p);
   static void destruct_TCCalibPed(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibPed*)
   {
      ::TCCalibPed *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibPed >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibPed", ::TCCalibPed::Class_Version(), "TCCalibPed.h", 34,
                  typeid(::TCCalibPed), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibPed::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibPed) );
      instance.SetNew(&new_TCCalibPed);
      instance.SetNewArray(&newArray_TCCalibPed);
      instance.SetDelete(&delete_TCCalibPed);
      instance.SetDeleteArray(&deleteArray_TCCalibPed);
      instance.SetDestructor(&destruct_TCCalibPed);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibPed*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibPed*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibPed*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSPedLG(void *p = nullptr);
   static void *newArray_TCCalibTAPSPedLG(Long_t size, void *p);
   static void delete_TCCalibTAPSPedLG(void *p);
   static void deleteArray_TCCalibTAPSPedLG(void *p);
   static void destruct_TCCalibTAPSPedLG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSPedLG*)
   {
      ::TCCalibTAPSPedLG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSPedLG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSPedLG", ::TCCalibTAPSPedLG::Class_Version(), "TCCalibPed.h", 62,
                  typeid(::TCCalibTAPSPedLG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSPedLG::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSPedLG) );
      instance.SetNew(&new_TCCalibTAPSPedLG);
      instance.SetNewArray(&newArray_TCCalibTAPSPedLG);
      instance.SetDelete(&delete_TCCalibTAPSPedLG);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSPedLG);
      instance.SetDestructor(&destruct_TCCalibTAPSPedLG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSPedLG*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSPedLG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSPedLG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSPedSG(void *p = nullptr);
   static void *newArray_TCCalibTAPSPedSG(Long_t size, void *p);
   static void delete_TCCalibTAPSPedSG(void *p);
   static void deleteArray_TCCalibTAPSPedSG(void *p);
   static void destruct_TCCalibTAPSPedSG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSPedSG*)
   {
      ::TCCalibTAPSPedSG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSPedSG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSPedSG", ::TCCalibTAPSPedSG::Class_Version(), "TCCalibPed.h", 80,
                  typeid(::TCCalibTAPSPedSG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSPedSG::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSPedSG) );
      instance.SetNew(&new_TCCalibTAPSPedSG);
      instance.SetNewArray(&newArray_TCCalibTAPSPedSG);
      instance.SetDelete(&delete_TCCalibTAPSPedSG);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSPedSG);
      instance.SetDestructor(&destruct_TCCalibTAPSPedSG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSPedSG*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSPedSG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSPedSG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSPedVeto(void *p = nullptr);
   static void *newArray_TCCalibTAPSPedVeto(Long_t size, void *p);
   static void delete_TCCalibTAPSPedVeto(void *p);
   static void deleteArray_TCCalibTAPSPedVeto(void *p);
   static void destruct_TCCalibTAPSPedVeto(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSPedVeto*)
   {
      ::TCCalibTAPSPedVeto *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSPedVeto >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSPedVeto", ::TCCalibTAPSPedVeto::Class_Version(), "TCCalibPed.h", 98,
                  typeid(::TCCalibTAPSPedVeto), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSPedVeto::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSPedVeto) );
      instance.SetNew(&new_TCCalibTAPSPedVeto);
      instance.SetNewArray(&newArray_TCCalibTAPSPedVeto);
      instance.SetDelete(&delete_TCCalibTAPSPedVeto);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSPedVeto);
      instance.SetDestructor(&destruct_TCCalibTAPSPedVeto);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSPedVeto*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSPedVeto*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSPedVeto*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibQuadEnergy(void *p = nullptr);
   static void *newArray_TCCalibQuadEnergy(Long_t size, void *p);
   static void delete_TCCalibQuadEnergy(void *p);
   static void deleteArray_TCCalibQuadEnergy(void *p);
   static void destruct_TCCalibQuadEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibQuadEnergy*)
   {
      ::TCCalibQuadEnergy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibQuadEnergy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibQuadEnergy", ::TCCalibQuadEnergy::Class_Version(), "TCCalibQuadEnergy.h", 28,
                  typeid(::TCCalibQuadEnergy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibQuadEnergy::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibQuadEnergy) );
      instance.SetNew(&new_TCCalibQuadEnergy);
      instance.SetNewArray(&newArray_TCCalibQuadEnergy);
      instance.SetDelete(&delete_TCCalibQuadEnergy);
      instance.SetDeleteArray(&deleteArray_TCCalibQuadEnergy);
      instance.SetDestructor(&destruct_TCCalibQuadEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibQuadEnergy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibQuadEnergy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibQuadEnergy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibCBQuadEnergy(void *p = nullptr);
   static void *newArray_TCCalibCBQuadEnergy(Long_t size, void *p);
   static void delete_TCCalibCBQuadEnergy(void *p);
   static void deleteArray_TCCalibCBQuadEnergy(void *p);
   static void destruct_TCCalibCBQuadEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibCBQuadEnergy*)
   {
      ::TCCalibCBQuadEnergy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibCBQuadEnergy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibCBQuadEnergy", ::TCCalibCBQuadEnergy::Class_Version(), "TCCalibQuadEnergy.h", 74,
                  typeid(::TCCalibCBQuadEnergy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibCBQuadEnergy::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibCBQuadEnergy) );
      instance.SetNew(&new_TCCalibCBQuadEnergy);
      instance.SetNewArray(&newArray_TCCalibCBQuadEnergy);
      instance.SetDelete(&delete_TCCalibCBQuadEnergy);
      instance.SetDeleteArray(&deleteArray_TCCalibCBQuadEnergy);
      instance.SetDestructor(&destruct_TCCalibCBQuadEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibCBQuadEnergy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibCBQuadEnergy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibCBQuadEnergy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSQuadEnergy(void *p = nullptr);
   static void *newArray_TCCalibTAPSQuadEnergy(Long_t size, void *p);
   static void delete_TCCalibTAPSQuadEnergy(void *p);
   static void deleteArray_TCCalibTAPSQuadEnergy(void *p);
   static void destruct_TCCalibTAPSQuadEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSQuadEnergy*)
   {
      ::TCCalibTAPSQuadEnergy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSQuadEnergy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSQuadEnergy", ::TCCalibTAPSQuadEnergy::Class_Version(), "TCCalibQuadEnergy.h", 88,
                  typeid(::TCCalibTAPSQuadEnergy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSQuadEnergy::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSQuadEnergy) );
      instance.SetNew(&new_TCCalibTAPSQuadEnergy);
      instance.SetNewArray(&newArray_TCCalibTAPSQuadEnergy);
      instance.SetDelete(&delete_TCCalibTAPSQuadEnergy);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSQuadEnergy);
      instance.SetDestructor(&destruct_TCCalibTAPSQuadEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSQuadEnergy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSQuadEnergy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSQuadEnergy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSEnergySG(void *p = nullptr);
   static void *newArray_TCCalibTAPSEnergySG(Long_t size, void *p);
   static void delete_TCCalibTAPSEnergySG(void *p);
   static void deleteArray_TCCalibTAPSEnergySG(void *p);
   static void destruct_TCCalibTAPSEnergySG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSEnergySG*)
   {
      ::TCCalibTAPSEnergySG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSEnergySG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSEnergySG", ::TCCalibTAPSEnergySG::Class_Version(), "TCCalibTAPSEnergySG.h", 28,
                  typeid(::TCCalibTAPSEnergySG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSEnergySG::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSEnergySG) );
      instance.SetNew(&new_TCCalibTAPSEnergySG);
      instance.SetNewArray(&newArray_TCCalibTAPSEnergySG);
      instance.SetDelete(&delete_TCCalibTAPSEnergySG);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSEnergySG);
      instance.SetDestructor(&destruct_TCCalibTAPSEnergySG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSEnergySG*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSEnergySG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSEnergySG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSPSA(void *p = nullptr);
   static void *newArray_TCCalibTAPSPSA(Long_t size, void *p);
   static void delete_TCCalibTAPSPSA(void *p);
   static void deleteArray_TCCalibTAPSPSA(void *p);
   static void destruct_TCCalibTAPSPSA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSPSA*)
   {
      ::TCCalibTAPSPSA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSPSA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSPSA", ::TCCalibTAPSPSA::Class_Version(), "TCCalibTAPSPSA.h", 30,
                  typeid(::TCCalibTAPSPSA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSPSA::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSPSA) );
      instance.SetNew(&new_TCCalibTAPSPSA);
      instance.SetNewArray(&newArray_TCCalibTAPSPSA);
      instance.SetDelete(&delete_TCCalibTAPSPSA);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSPSA);
      instance.SetDestructor(&destruct_TCCalibTAPSPSA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSPSA*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSPSA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSPSA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTargetPosition(void *p = nullptr);
   static void *newArray_TCCalibTargetPosition(Long_t size, void *p);
   static void delete_TCCalibTargetPosition(void *p);
   static void deleteArray_TCCalibTargetPosition(void *p);
   static void destruct_TCCalibTargetPosition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTargetPosition*)
   {
      ::TCCalibTargetPosition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTargetPosition >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTargetPosition", ::TCCalibTargetPosition::Class_Version(), "TCCalibTargetPosition.h", 27,
                  typeid(::TCCalibTargetPosition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTargetPosition::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTargetPosition) );
      instance.SetNew(&new_TCCalibTargetPosition);
      instance.SetNewArray(&newArray_TCCalibTargetPosition);
      instance.SetDelete(&delete_TCCalibTargetPosition);
      instance.SetDeleteArray(&deleteArray_TCCalibTargetPosition);
      instance.SetDestructor(&destruct_TCCalibTargetPosition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTargetPosition*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTargetPosition*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTargetPosition*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTime(void *p = nullptr);
   static void *newArray_TCCalibTime(Long_t size, void *p);
   static void delete_TCCalibTime(void *p);
   static void deleteArray_TCCalibTime(void *p);
   static void destruct_TCCalibTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTime*)
   {
      ::TCCalibTime *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTime >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTime", ::TCCalibTime::Class_Version(), "TCCalibTime.h", 28,
                  typeid(::TCCalibTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTime::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTime) );
      instance.SetNew(&new_TCCalibTime);
      instance.SetNewArray(&newArray_TCCalibTime);
      instance.SetDelete(&delete_TCCalibTime);
      instance.SetDeleteArray(&deleteArray_TCCalibTime);
      instance.SetDestructor(&destruct_TCCalibTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTime*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTime*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTime*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTaggerTime(void *p = nullptr);
   static void *newArray_TCCalibTaggerTime(Long_t size, void *p);
   static void delete_TCCalibTaggerTime(void *p);
   static void deleteArray_TCCalibTaggerTime(void *p);
   static void destruct_TCCalibTaggerTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTaggerTime*)
   {
      ::TCCalibTaggerTime *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTaggerTime >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTaggerTime", ::TCCalibTaggerTime::Class_Version(), "TCCalibTime.h", 50,
                  typeid(::TCCalibTaggerTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTaggerTime::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTaggerTime) );
      instance.SetNew(&new_TCCalibTaggerTime);
      instance.SetNewArray(&newArray_TCCalibTaggerTime);
      instance.SetDelete(&delete_TCCalibTaggerTime);
      instance.SetDeleteArray(&deleteArray_TCCalibTaggerTime);
      instance.SetDestructor(&destruct_TCCalibTaggerTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTaggerTime*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTaggerTime*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTaggerTime*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibCBTime(void *p = nullptr);
   static void *newArray_TCCalibCBTime(Long_t size, void *p);
   static void delete_TCCalibCBTime(void *p);
   static void deleteArray_TCCalibCBTime(void *p);
   static void destruct_TCCalibCBTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibCBTime*)
   {
      ::TCCalibCBTime *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibCBTime >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibCBTime", ::TCCalibCBTime::Class_Version(), "TCCalibTime.h", 64,
                  typeid(::TCCalibCBTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibCBTime::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibCBTime) );
      instance.SetNew(&new_TCCalibCBTime);
      instance.SetNewArray(&newArray_TCCalibCBTime);
      instance.SetDelete(&delete_TCCalibCBTime);
      instance.SetDeleteArray(&deleteArray_TCCalibCBTime);
      instance.SetDestructor(&destruct_TCCalibCBTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibCBTime*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibCBTime*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibCBTime*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibCBRiseTime(void *p = nullptr);
   static void *newArray_TCCalibCBRiseTime(Long_t size, void *p);
   static void delete_TCCalibCBRiseTime(void *p);
   static void deleteArray_TCCalibCBRiseTime(void *p);
   static void destruct_TCCalibCBRiseTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibCBRiseTime*)
   {
      ::TCCalibCBRiseTime *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibCBRiseTime >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibCBRiseTime", ::TCCalibCBRiseTime::Class_Version(), "TCCalibTime.h", 80,
                  typeid(::TCCalibCBRiseTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibCBRiseTime::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibCBRiseTime) );
      instance.SetNew(&new_TCCalibCBRiseTime);
      instance.SetNewArray(&newArray_TCCalibCBRiseTime);
      instance.SetDelete(&delete_TCCalibCBRiseTime);
      instance.SetDeleteArray(&deleteArray_TCCalibCBRiseTime);
      instance.SetDestructor(&destruct_TCCalibCBRiseTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibCBRiseTime*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibCBRiseTime*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibCBRiseTime*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibTAPSTime(void *p = nullptr);
   static void *newArray_TCCalibTAPSTime(Long_t size, void *p);
   static void delete_TCCalibTAPSTime(void *p);
   static void deleteArray_TCCalibTAPSTime(void *p);
   static void destruct_TCCalibTAPSTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibTAPSTime*)
   {
      ::TCCalibTAPSTime *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibTAPSTime >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibTAPSTime", ::TCCalibTAPSTime::Class_Version(), "TCCalibTime.h", 94,
                  typeid(::TCCalibTAPSTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibTAPSTime::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibTAPSTime) );
      instance.SetNew(&new_TCCalibTAPSTime);
      instance.SetNewArray(&newArray_TCCalibTAPSTime);
      instance.SetDelete(&delete_TCCalibTAPSTime);
      instance.SetDeleteArray(&deleteArray_TCCalibTAPSTime);
      instance.SetDestructor(&destruct_TCCalibTAPSTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibTAPSTime*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibTAPSTime*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibTAPSTime*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibPIDTime(void *p = nullptr);
   static void *newArray_TCCalibPIDTime(Long_t size, void *p);
   static void delete_TCCalibPIDTime(void *p);
   static void deleteArray_TCCalibPIDTime(void *p);
   static void destruct_TCCalibPIDTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibPIDTime*)
   {
      ::TCCalibPIDTime *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibPIDTime >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibPIDTime", ::TCCalibPIDTime::Class_Version(), "TCCalibTime.h", 108,
                  typeid(::TCCalibPIDTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibPIDTime::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibPIDTime) );
      instance.SetNew(&new_TCCalibPIDTime);
      instance.SetNewArray(&newArray_TCCalibPIDTime);
      instance.SetDelete(&delete_TCCalibPIDTime);
      instance.SetDeleteArray(&deleteArray_TCCalibPIDTime);
      instance.SetDestructor(&destruct_TCCalibPIDTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibPIDTime*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibPIDTime*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibPIDTime*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibVetoTime(void *p = nullptr);
   static void *newArray_TCCalibVetoTime(Long_t size, void *p);
   static void delete_TCCalibVetoTime(void *p);
   static void deleteArray_TCCalibVetoTime(void *p);
   static void destruct_TCCalibVetoTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibVetoTime*)
   {
      ::TCCalibVetoTime *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibVetoTime >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibVetoTime", ::TCCalibVetoTime::Class_Version(), "TCCalibTime.h", 122,
                  typeid(::TCCalibVetoTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibVetoTime::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibVetoTime) );
      instance.SetNew(&new_TCCalibVetoTime);
      instance.SetNewArray(&newArray_TCCalibVetoTime);
      instance.SetDelete(&delete_TCCalibVetoTime);
      instance.SetDeleteArray(&deleteArray_TCCalibVetoTime);
      instance.SetDestructor(&destruct_TCCalibVetoTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibVetoTime*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibVetoTime*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibVetoTime*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibVetoCorr(void *p = nullptr);
   static void *newArray_TCCalibVetoCorr(Long_t size, void *p);
   static void delete_TCCalibVetoCorr(void *p);
   static void deleteArray_TCCalibVetoCorr(void *p);
   static void destruct_TCCalibVetoCorr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibVetoCorr*)
   {
      ::TCCalibVetoCorr *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibVetoCorr >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibVetoCorr", ::TCCalibVetoCorr::Class_Version(), "TCCalibVetoCorr.h", 28,
                  typeid(::TCCalibVetoCorr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibVetoCorr::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibVetoCorr) );
      instance.SetNew(&new_TCCalibVetoCorr);
      instance.SetNewArray(&newArray_TCCalibVetoCorr);
      instance.SetDelete(&delete_TCCalibVetoCorr);
      instance.SetDeleteArray(&deleteArray_TCCalibVetoCorr);
      instance.SetDestructor(&destruct_TCCalibVetoCorr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibVetoCorr*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibVetoCorr*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibVetoCorr*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCCalibVetoEnergy(void *p = nullptr);
   static void *newArray_TCCalibVetoEnergy(Long_t size, void *p);
   static void delete_TCCalibVetoEnergy(void *p);
   static void deleteArray_TCCalibVetoEnergy(void *p);
   static void destruct_TCCalibVetoEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCCalibVetoEnergy*)
   {
      ::TCCalibVetoEnergy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCCalibVetoEnergy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCCalibVetoEnergy", ::TCCalibVetoEnergy::Class_Version(), "TCCalibVetoEnergy.h", 31,
                  typeid(::TCCalibVetoEnergy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCCalibVetoEnergy::Dictionary, isa_proxy, 4,
                  sizeof(::TCCalibVetoEnergy) );
      instance.SetNew(&new_TCCalibVetoEnergy);
      instance.SetNewArray(&newArray_TCCalibVetoEnergy);
      instance.SetDelete(&delete_TCCalibVetoEnergy);
      instance.SetDeleteArray(&deleteArray_TCCalibVetoEnergy);
      instance.SetDestructor(&destruct_TCCalibVetoEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCCalibVetoEnergy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCCalibVetoEnergy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCCalibVetoEnergy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCWriteARCalib(void *p = nullptr);
   static void *newArray_TCWriteARCalib(Long_t size, void *p);
   static void delete_TCWriteARCalib(void *p);
   static void deleteArray_TCWriteARCalib(void *p);
   static void destruct_TCWriteARCalib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCWriteARCalib*)
   {
      ::TCWriteARCalib *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCWriteARCalib >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCWriteARCalib", ::TCWriteARCalib::Class_Version(), "TCWriteARCalib.h", 25,
                  typeid(::TCWriteARCalib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCWriteARCalib::Dictionary, isa_proxy, 4,
                  sizeof(::TCWriteARCalib) );
      instance.SetNew(&new_TCWriteARCalib);
      instance.SetNewArray(&newArray_TCWriteARCalib);
      instance.SetDelete(&delete_TCWriteARCalib);
      instance.SetDeleteArray(&deleteArray_TCWriteARCalib);
      instance.SetDestructor(&destruct_TCWriteARCalib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCWriteARCalib*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCWriteARCalib*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCWriteARCalib*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCCalibData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibData::Class_Name()
{
   return "TCCalibData";
}

//______________________________________________________________________________
const char *TCCalibData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibType::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibType::Class_Name()
{
   return "TCCalibType";
}

//______________________________________________________________________________
const char *TCCalibType::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibType*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibType::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibType*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibType::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibType*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibType::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibType*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCConfigElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCConfigElement::Class_Name()
{
   return "TCConfigElement";
}

//______________________________________________________________________________
const char *TCConfigElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCConfigElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCConfigElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCConfigElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCConfigElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCConfigElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCConfigElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCConfigElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCReadConfig::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCReadConfig::Class_Name()
{
   return "TCReadConfig";
}

//______________________________________________________________________________
const char *TCReadConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCReadConfig*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCReadConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCReadConfig*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCReadConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCReadConfig*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCReadConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCReadConfig*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCACQUFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCACQUFile::Class_Name()
{
   return "TCACQUFile";
}

//______________________________________________________________________________
const char *TCACQUFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCACQUFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCACQUFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCACQUFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCACQUFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCACQUFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCACQUFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCACQUFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCReadACQU::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCReadACQU::Class_Name()
{
   return "TCReadACQU";
}

//______________________________________________________________________________
const char *TCReadACQU::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCReadACQU*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCReadACQU::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCReadACQU*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCReadACQU::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCReadACQU*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCReadACQU::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCReadACQU*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCARElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCARElement::Class_Name()
{
   return "TCARElement";
}

//______________________________________________________________________________
const char *TCARElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCARElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCARElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCARElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCARElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCARElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCARElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCARElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCARTimeWalk::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCARTimeWalk::Class_Name()
{
   return "TCARTimeWalk";
}

//______________________________________________________________________________
const char *TCARTimeWalk::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCARTimeWalk*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCARTimeWalk::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCARTimeWalk*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCARTimeWalk::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCARTimeWalk*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCARTimeWalk::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCARTimeWalk*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCARNeighbours::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCARNeighbours::Class_Name()
{
   return "TCARNeighbours";
}

//______________________________________________________________________________
const char *TCARNeighbours::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCARNeighbours*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCARNeighbours::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCARNeighbours*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCARNeighbours::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCARNeighbours*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCARNeighbours::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCARNeighbours*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCReadARCalib::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCReadARCalib::Class_Name()
{
   return "TCReadARCalib";
}

//______________________________________________________________________________
const char *TCReadARCalib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCReadARCalib*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCReadARCalib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCReadARCalib*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCReadARCalib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCReadARCalib*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCReadARCalib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCReadARCalib*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCRun::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCRun::Class_Name()
{
   return "TCRun";
}

//______________________________________________________________________________
const char *TCRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCRun*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCRun*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCRun*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCRun*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibration::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibration::Class_Name()
{
   return "TCCalibration";
}

//______________________________________________________________________________
const char *TCCalibration::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibration*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibration::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibration*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibration::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibration*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibration::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibration*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCContainer::Class_Name()
{
   return "TCContainer";
}

//______________________________________________________________________________
const char *TCContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCMySQLManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCMySQLManager::Class_Name()
{
   return "TCMySQLManager";
}

//______________________________________________________________________________
const char *TCMySQLManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCMySQLManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCMySQLManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCMySQLManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCMySQLManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCMySQLManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCMySQLManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCMySQLManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalib::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalib::Class_Name()
{
   return "TCCalib";
}

//______________________________________________________________________________
const char *TCCalib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalib*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalib*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalib*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalib*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCFileManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCFileManager::Class_Name()
{
   return "TCFileManager";
}

//______________________________________________________________________________
const char *TCFileManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCFileManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCFileManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCFileManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCFileManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCFileManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCFileManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCFileManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibCBTimeWalk::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibCBTimeWalk::Class_Name()
{
   return "TCCalibCBTimeWalk";
}

//______________________________________________________________________________
const char *TCCalibCBTimeWalk::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBTimeWalk*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibCBTimeWalk::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBTimeWalk*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibCBTimeWalk::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBTimeWalk*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibCBTimeWalk::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBTimeWalk*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibDiscrThr::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibDiscrThr::Class_Name()
{
   return "TCCalibDiscrThr";
}

//______________________________________________________________________________
const char *TCCalibDiscrThr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibDiscrThr*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibDiscrThr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibDiscrThr*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibDiscrThr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibDiscrThr*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibDiscrThr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibDiscrThr*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibCBLED::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibCBLED::Class_Name()
{
   return "TCCalibCBLED";
}

//______________________________________________________________________________
const char *TCCalibCBLED::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBLED*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibCBLED::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBLED*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibCBLED::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBLED*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibCBLED::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBLED*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSLED1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSLED1::Class_Name()
{
   return "TCCalibTAPSLED1";
}

//______________________________________________________________________________
const char *TCCalibTAPSLED1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSLED1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSLED1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSLED1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSLED1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSLED1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSLED1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSLED1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSLED2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSLED2::Class_Name()
{
   return "TCCalibTAPSLED2";
}

//______________________________________________________________________________
const char *TCCalibTAPSLED2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSLED2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSLED2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSLED2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSLED2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSLED2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSLED2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSLED2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSCFD::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSCFD::Class_Name()
{
   return "TCCalibTAPSCFD";
}

//______________________________________________________________________________
const char *TCCalibTAPSCFD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSCFD*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSCFD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSCFD*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSCFD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSCFD*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSCFD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSCFD*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibVetoLED::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibVetoLED::Class_Name()
{
   return "TCCalibVetoLED";
}

//______________________________________________________________________________
const char *TCCalibVetoLED::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoLED*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibVetoLED::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoLED*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibVetoLED::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoLED*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibVetoLED::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoLED*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TIndicatorLine::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TIndicatorLine::Class_Name()
{
   return "TIndicatorLine";
}

//______________________________________________________________________________
const char *TIndicatorLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndicatorLine*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TIndicatorLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndicatorLine*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TIndicatorLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndicatorLine*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TIndicatorLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndicatorLine*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibEnergy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibEnergy::Class_Name()
{
   return "TCCalibEnergy";
}

//______________________________________________________________________________
const char *TCCalibEnergy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibEnergy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibEnergy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibEnergy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibEnergy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibEnergy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibEnergy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibEnergy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibCBEnergy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibCBEnergy::Class_Name()
{
   return "TCCalibCBEnergy";
}

//______________________________________________________________________________
const char *TCCalibCBEnergy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBEnergy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibCBEnergy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBEnergy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibCBEnergy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBEnergy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibCBEnergy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBEnergy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSEnergyLG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSEnergyLG::Class_Name()
{
   return "TCCalibTAPSEnergyLG";
}

//______________________________________________________________________________
const char *TCCalibTAPSEnergyLG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSEnergyLG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSEnergyLG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSEnergyLG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSEnergyLG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSEnergyLG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSEnergyLG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSEnergyLG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibPIDDroop::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibPIDDroop::Class_Name()
{
   return "TCCalibPIDDroop";
}

//______________________________________________________________________________
const char *TCCalibPIDDroop::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDDroop*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibPIDDroop::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDDroop*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibPIDDroop::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDDroop*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibPIDDroop::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDDroop*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibPIDEnergy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibPIDEnergy::Class_Name()
{
   return "TCCalibPIDEnergy";
}

//______________________________________________________________________________
const char *TCCalibPIDEnergy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDEnergy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibPIDEnergy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDEnergy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibPIDEnergy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDEnergy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibPIDEnergy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDEnergy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibPIDEnergyTrad::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibPIDEnergyTrad::Class_Name()
{
   return "TCCalibPIDEnergyTrad";
}

//______________________________________________________________________________
const char *TCCalibPIDEnergyTrad::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDEnergyTrad*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibPIDEnergyTrad::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDEnergyTrad*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibPIDEnergyTrad::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDEnergyTrad*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibPIDEnergyTrad::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDEnergyTrad*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibPIDPhi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibPIDPhi::Class_Name()
{
   return "TCCalibPIDPhi";
}

//______________________________________________________________________________
const char *TCCalibPIDPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDPhi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibPIDPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDPhi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibPIDPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDPhi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibPIDPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDPhi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibPed::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibPed::Class_Name()
{
   return "TCCalibPed";
}

//______________________________________________________________________________
const char *TCCalibPed::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPed*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibPed::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPed*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibPed::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPed*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibPed::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPed*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSPedLG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSPedLG::Class_Name()
{
   return "TCCalibTAPSPedLG";
}

//______________________________________________________________________________
const char *TCCalibTAPSPedLG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedLG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSPedLG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedLG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSPedLG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedLG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSPedLG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedLG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSPedSG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSPedSG::Class_Name()
{
   return "TCCalibTAPSPedSG";
}

//______________________________________________________________________________
const char *TCCalibTAPSPedSG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedSG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSPedSG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedSG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSPedSG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedSG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSPedSG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedSG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSPedVeto::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSPedVeto::Class_Name()
{
   return "TCCalibTAPSPedVeto";
}

//______________________________________________________________________________
const char *TCCalibTAPSPedVeto::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedVeto*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSPedVeto::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedVeto*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSPedVeto::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedVeto*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSPedVeto::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPedVeto*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibQuadEnergy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibQuadEnergy::Class_Name()
{
   return "TCCalibQuadEnergy";
}

//______________________________________________________________________________
const char *TCCalibQuadEnergy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibQuadEnergy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibQuadEnergy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibQuadEnergy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibQuadEnergy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibQuadEnergy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibQuadEnergy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibQuadEnergy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibCBQuadEnergy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibCBQuadEnergy::Class_Name()
{
   return "TCCalibCBQuadEnergy";
}

//______________________________________________________________________________
const char *TCCalibCBQuadEnergy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBQuadEnergy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibCBQuadEnergy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBQuadEnergy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibCBQuadEnergy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBQuadEnergy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibCBQuadEnergy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBQuadEnergy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSQuadEnergy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSQuadEnergy::Class_Name()
{
   return "TCCalibTAPSQuadEnergy";
}

//______________________________________________________________________________
const char *TCCalibTAPSQuadEnergy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSQuadEnergy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSQuadEnergy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSQuadEnergy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSQuadEnergy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSQuadEnergy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSQuadEnergy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSQuadEnergy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSEnergySG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSEnergySG::Class_Name()
{
   return "TCCalibTAPSEnergySG";
}

//______________________________________________________________________________
const char *TCCalibTAPSEnergySG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSEnergySG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSEnergySG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSEnergySG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSEnergySG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSEnergySG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSEnergySG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSEnergySG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSPSA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSPSA::Class_Name()
{
   return "TCCalibTAPSPSA";
}

//______________________________________________________________________________
const char *TCCalibTAPSPSA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPSA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSPSA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPSA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSPSA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPSA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSPSA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSPSA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTargetPosition::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTargetPosition::Class_Name()
{
   return "TCCalibTargetPosition";
}

//______________________________________________________________________________
const char *TCCalibTargetPosition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTargetPosition*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTargetPosition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTargetPosition*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTargetPosition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTargetPosition*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTargetPosition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTargetPosition*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTime::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTime::Class_Name()
{
   return "TCCalibTime";
}

//______________________________________________________________________________
const char *TCCalibTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTime*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTime*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTime*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTime*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTaggerTime::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTaggerTime::Class_Name()
{
   return "TCCalibTaggerTime";
}

//______________________________________________________________________________
const char *TCCalibTaggerTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTaggerTime*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTaggerTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTaggerTime*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTaggerTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTaggerTime*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTaggerTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTaggerTime*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibCBTime::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibCBTime::Class_Name()
{
   return "TCCalibCBTime";
}

//______________________________________________________________________________
const char *TCCalibCBTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBTime*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibCBTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBTime*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibCBTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBTime*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibCBTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBTime*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibCBRiseTime::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibCBRiseTime::Class_Name()
{
   return "TCCalibCBRiseTime";
}

//______________________________________________________________________________
const char *TCCalibCBRiseTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBRiseTime*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibCBRiseTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBRiseTime*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibCBRiseTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBRiseTime*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibCBRiseTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibCBRiseTime*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibTAPSTime::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibTAPSTime::Class_Name()
{
   return "TCCalibTAPSTime";
}

//______________________________________________________________________________
const char *TCCalibTAPSTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSTime*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibTAPSTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSTime*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibTAPSTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSTime*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibTAPSTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibTAPSTime*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibPIDTime::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibPIDTime::Class_Name()
{
   return "TCCalibPIDTime";
}

//______________________________________________________________________________
const char *TCCalibPIDTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDTime*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibPIDTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDTime*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibPIDTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDTime*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibPIDTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibPIDTime*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibVetoTime::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibVetoTime::Class_Name()
{
   return "TCCalibVetoTime";
}

//______________________________________________________________________________
const char *TCCalibVetoTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoTime*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibVetoTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoTime*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibVetoTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoTime*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibVetoTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoTime*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibVetoCorr::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibVetoCorr::Class_Name()
{
   return "TCCalibVetoCorr";
}

//______________________________________________________________________________
const char *TCCalibVetoCorr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoCorr*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibVetoCorr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoCorr*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibVetoCorr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoCorr*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibVetoCorr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoCorr*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCCalibVetoEnergy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCCalibVetoEnergy::Class_Name()
{
   return "TCCalibVetoEnergy";
}

//______________________________________________________________________________
const char *TCCalibVetoEnergy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoEnergy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCCalibVetoEnergy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoEnergy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCCalibVetoEnergy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoEnergy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCCalibVetoEnergy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCCalibVetoEnergy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCWriteARCalib::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCWriteARCalib::Class_Name()
{
   return "TCWriteARCalib";
}

//______________________________________________________________________________
const char *TCWriteARCalib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCWriteARCalib*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCWriteARCalib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCWriteARCalib*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCWriteARCalib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCWriteARCalib*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCWriteARCalib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCWriteARCalib*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TCCalibData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibData::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibData(void *p) {
      return  p ? new(p) ::TCCalibData : new ::TCCalibData;
   }
   static void *newArray_TCCalibData(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibData[nElements] : new ::TCCalibData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibData(void *p) {
      delete (static_cast<::TCCalibData*>(p));
   }
   static void deleteArray_TCCalibData(void *p) {
      delete [] (static_cast<::TCCalibData*>(p));
   }
   static void destruct_TCCalibData(void *p) {
      typedef ::TCCalibData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibData

//______________________________________________________________________________
void TCCalibType::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibType.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibType::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibType::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibType(void *p) {
      return  p ? new(p) ::TCCalibType : new ::TCCalibType;
   }
   static void *newArray_TCCalibType(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibType[nElements] : new ::TCCalibType[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibType(void *p) {
      delete (static_cast<::TCCalibType*>(p));
   }
   static void deleteArray_TCCalibType(void *p) {
      delete [] (static_cast<::TCCalibType*>(p));
   }
   static void destruct_TCCalibType(void *p) {
      typedef ::TCCalibType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibType

//______________________________________________________________________________
void TCConfigElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCConfigElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCConfigElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCConfigElement::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCConfigElement(void *p) {
      delete (static_cast<::TCConfigElement*>(p));
   }
   static void deleteArray_TCConfigElement(void *p) {
      delete [] (static_cast<::TCConfigElement*>(p));
   }
   static void destruct_TCConfigElement(void *p) {
      typedef ::TCConfigElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCConfigElement

//______________________________________________________________________________
void TCReadConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCReadConfig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCReadConfig::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCReadConfig::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCReadConfig(void *p) {
      return  p ? new(p) ::TCReadConfig : new ::TCReadConfig;
   }
   static void *newArray_TCReadConfig(Long_t nElements, void *p) {
      return p ? new(p) ::TCReadConfig[nElements] : new ::TCReadConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCReadConfig(void *p) {
      delete (static_cast<::TCReadConfig*>(p));
   }
   static void deleteArray_TCReadConfig(void *p) {
      delete [] (static_cast<::TCReadConfig*>(p));
   }
   static void destruct_TCReadConfig(void *p) {
      typedef ::TCReadConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCReadConfig

//______________________________________________________________________________
void TCACQUFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCACQUFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCACQUFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCACQUFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCACQUFile(void *p) {
      return  p ? new(p) ::TCACQUFile : new ::TCACQUFile;
   }
   static void *newArray_TCACQUFile(Long_t nElements, void *p) {
      return p ? new(p) ::TCACQUFile[nElements] : new ::TCACQUFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCACQUFile(void *p) {
      delete (static_cast<::TCACQUFile*>(p));
   }
   static void deleteArray_TCACQUFile(void *p) {
      delete [] (static_cast<::TCACQUFile*>(p));
   }
   static void destruct_TCACQUFile(void *p) {
      typedef ::TCACQUFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCACQUFile

//______________________________________________________________________________
void TCReadACQU::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCReadACQU.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCReadACQU::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCReadACQU::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCReadACQU(void *p) {
      return  p ? new(p) ::TCReadACQU : new ::TCReadACQU;
   }
   static void *newArray_TCReadACQU(Long_t nElements, void *p) {
      return p ? new(p) ::TCReadACQU[nElements] : new ::TCReadACQU[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCReadACQU(void *p) {
      delete (static_cast<::TCReadACQU*>(p));
   }
   static void deleteArray_TCReadACQU(void *p) {
      delete [] (static_cast<::TCReadACQU*>(p));
   }
   static void destruct_TCReadACQU(void *p) {
      typedef ::TCReadACQU current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCReadACQU

//______________________________________________________________________________
void TCARElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCARElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCARElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCARElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCARElement(void *p) {
      return  p ? new(p) ::TCARElement : new ::TCARElement;
   }
   static void *newArray_TCARElement(Long_t nElements, void *p) {
      return p ? new(p) ::TCARElement[nElements] : new ::TCARElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCARElement(void *p) {
      delete (static_cast<::TCARElement*>(p));
   }
   static void deleteArray_TCARElement(void *p) {
      delete [] (static_cast<::TCARElement*>(p));
   }
   static void destruct_TCARElement(void *p) {
      typedef ::TCARElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCARElement

//______________________________________________________________________________
void TCARTimeWalk::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCARTimeWalk.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCARTimeWalk::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCARTimeWalk::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCARTimeWalk(void *p) {
      return  p ? new(p) ::TCARTimeWalk : new ::TCARTimeWalk;
   }
   static void *newArray_TCARTimeWalk(Long_t nElements, void *p) {
      return p ? new(p) ::TCARTimeWalk[nElements] : new ::TCARTimeWalk[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCARTimeWalk(void *p) {
      delete (static_cast<::TCARTimeWalk*>(p));
   }
   static void deleteArray_TCARTimeWalk(void *p) {
      delete [] (static_cast<::TCARTimeWalk*>(p));
   }
   static void destruct_TCARTimeWalk(void *p) {
      typedef ::TCARTimeWalk current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCARTimeWalk

//______________________________________________________________________________
void TCARNeighbours::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCARNeighbours.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCARNeighbours::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCARNeighbours::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCARNeighbours(void *p) {
      return  p ? new(p) ::TCARNeighbours : new ::TCARNeighbours;
   }
   static void *newArray_TCARNeighbours(Long_t nElements, void *p) {
      return p ? new(p) ::TCARNeighbours[nElements] : new ::TCARNeighbours[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCARNeighbours(void *p) {
      delete (static_cast<::TCARNeighbours*>(p));
   }
   static void deleteArray_TCARNeighbours(void *p) {
      delete [] (static_cast<::TCARNeighbours*>(p));
   }
   static void destruct_TCARNeighbours(void *p) {
      typedef ::TCARNeighbours current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCARNeighbours

//______________________________________________________________________________
void TCReadARCalib::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCReadARCalib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCReadARCalib::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCReadARCalib::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCReadARCalib(void *p) {
      return  p ? new(p) ::TCReadARCalib : new ::TCReadARCalib;
   }
   static void *newArray_TCReadARCalib(Long_t nElements, void *p) {
      return p ? new(p) ::TCReadARCalib[nElements] : new ::TCReadARCalib[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCReadARCalib(void *p) {
      delete (static_cast<::TCReadARCalib*>(p));
   }
   static void deleteArray_TCReadARCalib(void *p) {
      delete [] (static_cast<::TCReadARCalib*>(p));
   }
   static void destruct_TCReadARCalib(void *p) {
      typedef ::TCReadARCalib current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCReadARCalib

//______________________________________________________________________________
void TCRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCRun.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCRun::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCRun::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCRun(void *p) {
      return  p ? new(p) ::TCRun : new ::TCRun;
   }
   static void *newArray_TCRun(Long_t nElements, void *p) {
      return p ? new(p) ::TCRun[nElements] : new ::TCRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCRun(void *p) {
      delete (static_cast<::TCRun*>(p));
   }
   static void deleteArray_TCRun(void *p) {
      delete [] (static_cast<::TCRun*>(p));
   }
   static void destruct_TCRun(void *p) {
      typedef ::TCRun current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCRun

//______________________________________________________________________________
void TCCalibration::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibration.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibration::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibration::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibration(void *p) {
      return  p ? new(p) ::TCCalibration : new ::TCCalibration;
   }
   static void *newArray_TCCalibration(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibration[nElements] : new ::TCCalibration[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibration(void *p) {
      delete (static_cast<::TCCalibration*>(p));
   }
   static void deleteArray_TCCalibration(void *p) {
      delete [] (static_cast<::TCCalibration*>(p));
   }
   static void destruct_TCCalibration(void *p) {
      typedef ::TCCalibration current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibration

//______________________________________________________________________________
void TCContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCContainer(void *p) {
      return  p ? new(p) ::TCContainer : new ::TCContainer;
   }
   static void *newArray_TCContainer(Long_t nElements, void *p) {
      return p ? new(p) ::TCContainer[nElements] : new ::TCContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCContainer(void *p) {
      delete (static_cast<::TCContainer*>(p));
   }
   static void deleteArray_TCContainer(void *p) {
      delete [] (static_cast<::TCContainer*>(p));
   }
   static void destruct_TCContainer(void *p) {
      typedef ::TCContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCContainer

//______________________________________________________________________________
void TCMySQLManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCMySQLManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCMySQLManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCMySQLManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCMySQLManager(void *p) {
      return  p ? new(p) ::TCMySQLManager : new ::TCMySQLManager;
   }
   static void *newArray_TCMySQLManager(Long_t nElements, void *p) {
      return p ? new(p) ::TCMySQLManager[nElements] : new ::TCMySQLManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCMySQLManager(void *p) {
      delete (static_cast<::TCMySQLManager*>(p));
   }
   static void deleteArray_TCMySQLManager(void *p) {
      delete [] (static_cast<::TCMySQLManager*>(p));
   }
   static void destruct_TCMySQLManager(void *p) {
      typedef ::TCMySQLManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCMySQLManager

//______________________________________________________________________________
void TCCalib::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalib::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalib::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCCalib(void *p) {
      delete (static_cast<::TCCalib*>(p));
   }
   static void deleteArray_TCCalib(void *p) {
      delete [] (static_cast<::TCCalib*>(p));
   }
   static void destruct_TCCalib(void *p) {
      typedef ::TCCalib current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalib

//______________________________________________________________________________
void TCFileManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCFileManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCFileManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCFileManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCFileManager(void *p) {
      return  p ? new(p) ::TCFileManager : new ::TCFileManager;
   }
   static void *newArray_TCFileManager(Long_t nElements, void *p) {
      return p ? new(p) ::TCFileManager[nElements] : new ::TCFileManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCFileManager(void *p) {
      delete (static_cast<::TCFileManager*>(p));
   }
   static void deleteArray_TCFileManager(void *p) {
      delete [] (static_cast<::TCFileManager*>(p));
   }
   static void destruct_TCFileManager(void *p) {
      typedef ::TCFileManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCFileManager

//______________________________________________________________________________
void TCCalibCBTimeWalk::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibCBTimeWalk.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibCBTimeWalk::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibCBTimeWalk::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibCBTimeWalk(void *p) {
      return  p ? new(p) ::TCCalibCBTimeWalk : new ::TCCalibCBTimeWalk;
   }
   static void *newArray_TCCalibCBTimeWalk(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibCBTimeWalk[nElements] : new ::TCCalibCBTimeWalk[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibCBTimeWalk(void *p) {
      delete (static_cast<::TCCalibCBTimeWalk*>(p));
   }
   static void deleteArray_TCCalibCBTimeWalk(void *p) {
      delete [] (static_cast<::TCCalibCBTimeWalk*>(p));
   }
   static void destruct_TCCalibCBTimeWalk(void *p) {
      typedef ::TCCalibCBTimeWalk current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibCBTimeWalk

//______________________________________________________________________________
void TCCalibDiscrThr::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibDiscrThr.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibDiscrThr::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibDiscrThr::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibDiscrThr(void *p) {
      return  p ? new(p) ::TCCalibDiscrThr : new ::TCCalibDiscrThr;
   }
   static void *newArray_TCCalibDiscrThr(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibDiscrThr[nElements] : new ::TCCalibDiscrThr[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibDiscrThr(void *p) {
      delete (static_cast<::TCCalibDiscrThr*>(p));
   }
   static void deleteArray_TCCalibDiscrThr(void *p) {
      delete [] (static_cast<::TCCalibDiscrThr*>(p));
   }
   static void destruct_TCCalibDiscrThr(void *p) {
      typedef ::TCCalibDiscrThr current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibDiscrThr

//______________________________________________________________________________
void TCCalibCBLED::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibCBLED.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibCBLED::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibCBLED::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibCBLED(void *p) {
      return  p ? new(p) ::TCCalibCBLED : new ::TCCalibCBLED;
   }
   static void *newArray_TCCalibCBLED(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibCBLED[nElements] : new ::TCCalibCBLED[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibCBLED(void *p) {
      delete (static_cast<::TCCalibCBLED*>(p));
   }
   static void deleteArray_TCCalibCBLED(void *p) {
      delete [] (static_cast<::TCCalibCBLED*>(p));
   }
   static void destruct_TCCalibCBLED(void *p) {
      typedef ::TCCalibCBLED current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibCBLED

//______________________________________________________________________________
void TCCalibTAPSLED1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSLED1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSLED1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSLED1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSLED1(void *p) {
      return  p ? new(p) ::TCCalibTAPSLED1 : new ::TCCalibTAPSLED1;
   }
   static void *newArray_TCCalibTAPSLED1(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSLED1[nElements] : new ::TCCalibTAPSLED1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSLED1(void *p) {
      delete (static_cast<::TCCalibTAPSLED1*>(p));
   }
   static void deleteArray_TCCalibTAPSLED1(void *p) {
      delete [] (static_cast<::TCCalibTAPSLED1*>(p));
   }
   static void destruct_TCCalibTAPSLED1(void *p) {
      typedef ::TCCalibTAPSLED1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSLED1

//______________________________________________________________________________
void TCCalibTAPSLED2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSLED2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSLED2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSLED2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSLED2(void *p) {
      return  p ? new(p) ::TCCalibTAPSLED2 : new ::TCCalibTAPSLED2;
   }
   static void *newArray_TCCalibTAPSLED2(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSLED2[nElements] : new ::TCCalibTAPSLED2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSLED2(void *p) {
      delete (static_cast<::TCCalibTAPSLED2*>(p));
   }
   static void deleteArray_TCCalibTAPSLED2(void *p) {
      delete [] (static_cast<::TCCalibTAPSLED2*>(p));
   }
   static void destruct_TCCalibTAPSLED2(void *p) {
      typedef ::TCCalibTAPSLED2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSLED2

//______________________________________________________________________________
void TCCalibTAPSCFD::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSCFD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSCFD::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSCFD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSCFD(void *p) {
      return  p ? new(p) ::TCCalibTAPSCFD : new ::TCCalibTAPSCFD;
   }
   static void *newArray_TCCalibTAPSCFD(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSCFD[nElements] : new ::TCCalibTAPSCFD[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSCFD(void *p) {
      delete (static_cast<::TCCalibTAPSCFD*>(p));
   }
   static void deleteArray_TCCalibTAPSCFD(void *p) {
      delete [] (static_cast<::TCCalibTAPSCFD*>(p));
   }
   static void destruct_TCCalibTAPSCFD(void *p) {
      typedef ::TCCalibTAPSCFD current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSCFD

//______________________________________________________________________________
void TCCalibVetoLED::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibVetoLED.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibVetoLED::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibVetoLED::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibVetoLED(void *p) {
      return  p ? new(p) ::TCCalibVetoLED : new ::TCCalibVetoLED;
   }
   static void *newArray_TCCalibVetoLED(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibVetoLED[nElements] : new ::TCCalibVetoLED[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibVetoLED(void *p) {
      delete (static_cast<::TCCalibVetoLED*>(p));
   }
   static void deleteArray_TCCalibVetoLED(void *p) {
      delete [] (static_cast<::TCCalibVetoLED*>(p));
   }
   static void destruct_TCCalibVetoLED(void *p) {
      typedef ::TCCalibVetoLED current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibVetoLED

//______________________________________________________________________________
void TIndicatorLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TIndicatorLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TIndicatorLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(TIndicatorLine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TIndicatorLine(void *p) {
      return  p ? new(p) ::TIndicatorLine : new ::TIndicatorLine;
   }
   static void *newArray_TIndicatorLine(Long_t nElements, void *p) {
      return p ? new(p) ::TIndicatorLine[nElements] : new ::TIndicatorLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TIndicatorLine(void *p) {
      delete (static_cast<::TIndicatorLine*>(p));
   }
   static void deleteArray_TIndicatorLine(void *p) {
      delete [] (static_cast<::TIndicatorLine*>(p));
   }
   static void destruct_TIndicatorLine(void *p) {
      typedef ::TIndicatorLine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TIndicatorLine

//______________________________________________________________________________
void TCCalibEnergy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibEnergy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibEnergy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibEnergy::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCCalibEnergy(void *p) {
      delete (static_cast<::TCCalibEnergy*>(p));
   }
   static void deleteArray_TCCalibEnergy(void *p) {
      delete [] (static_cast<::TCCalibEnergy*>(p));
   }
   static void destruct_TCCalibEnergy(void *p) {
      typedef ::TCCalibEnergy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibEnergy

//______________________________________________________________________________
void TCCalibCBEnergy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibCBEnergy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibCBEnergy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibCBEnergy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibCBEnergy(void *p) {
      return  p ? new(p) ::TCCalibCBEnergy : new ::TCCalibCBEnergy;
   }
   static void *newArray_TCCalibCBEnergy(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibCBEnergy[nElements] : new ::TCCalibCBEnergy[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibCBEnergy(void *p) {
      delete (static_cast<::TCCalibCBEnergy*>(p));
   }
   static void deleteArray_TCCalibCBEnergy(void *p) {
      delete [] (static_cast<::TCCalibCBEnergy*>(p));
   }
   static void destruct_TCCalibCBEnergy(void *p) {
      typedef ::TCCalibCBEnergy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibCBEnergy

//______________________________________________________________________________
void TCCalibTAPSEnergyLG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSEnergyLG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSEnergyLG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSEnergyLG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSEnergyLG(void *p) {
      return  p ? new(p) ::TCCalibTAPSEnergyLG : new ::TCCalibTAPSEnergyLG;
   }
   static void *newArray_TCCalibTAPSEnergyLG(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSEnergyLG[nElements] : new ::TCCalibTAPSEnergyLG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSEnergyLG(void *p) {
      delete (static_cast<::TCCalibTAPSEnergyLG*>(p));
   }
   static void deleteArray_TCCalibTAPSEnergyLG(void *p) {
      delete [] (static_cast<::TCCalibTAPSEnergyLG*>(p));
   }
   static void destruct_TCCalibTAPSEnergyLG(void *p) {
      typedef ::TCCalibTAPSEnergyLG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSEnergyLG

//______________________________________________________________________________
void TCCalibPIDDroop::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibPIDDroop.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibPIDDroop::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibPIDDroop::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibPIDDroop(void *p) {
      return  p ? new(p) ::TCCalibPIDDroop : new ::TCCalibPIDDroop;
   }
   static void *newArray_TCCalibPIDDroop(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibPIDDroop[nElements] : new ::TCCalibPIDDroop[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibPIDDroop(void *p) {
      delete (static_cast<::TCCalibPIDDroop*>(p));
   }
   static void deleteArray_TCCalibPIDDroop(void *p) {
      delete [] (static_cast<::TCCalibPIDDroop*>(p));
   }
   static void destruct_TCCalibPIDDroop(void *p) {
      typedef ::TCCalibPIDDroop current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibPIDDroop

//______________________________________________________________________________
void TCCalibPIDEnergy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibPIDEnergy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibPIDEnergy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibPIDEnergy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibPIDEnergy(void *p) {
      return  p ? new(p) ::TCCalibPIDEnergy : new ::TCCalibPIDEnergy;
   }
   static void *newArray_TCCalibPIDEnergy(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibPIDEnergy[nElements] : new ::TCCalibPIDEnergy[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibPIDEnergy(void *p) {
      delete (static_cast<::TCCalibPIDEnergy*>(p));
   }
   static void deleteArray_TCCalibPIDEnergy(void *p) {
      delete [] (static_cast<::TCCalibPIDEnergy*>(p));
   }
   static void destruct_TCCalibPIDEnergy(void *p) {
      typedef ::TCCalibPIDEnergy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibPIDEnergy

//______________________________________________________________________________
void TCCalibPIDEnergyTrad::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibPIDEnergyTrad.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibPIDEnergyTrad::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibPIDEnergyTrad::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibPIDEnergyTrad(void *p) {
      return  p ? new(p) ::TCCalibPIDEnergyTrad : new ::TCCalibPIDEnergyTrad;
   }
   static void *newArray_TCCalibPIDEnergyTrad(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibPIDEnergyTrad[nElements] : new ::TCCalibPIDEnergyTrad[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibPIDEnergyTrad(void *p) {
      delete (static_cast<::TCCalibPIDEnergyTrad*>(p));
   }
   static void deleteArray_TCCalibPIDEnergyTrad(void *p) {
      delete [] (static_cast<::TCCalibPIDEnergyTrad*>(p));
   }
   static void destruct_TCCalibPIDEnergyTrad(void *p) {
      typedef ::TCCalibPIDEnergyTrad current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibPIDEnergyTrad

//______________________________________________________________________________
void TCCalibPIDPhi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibPIDPhi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibPIDPhi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibPIDPhi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibPIDPhi(void *p) {
      return  p ? new(p) ::TCCalibPIDPhi : new ::TCCalibPIDPhi;
   }
   static void *newArray_TCCalibPIDPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibPIDPhi[nElements] : new ::TCCalibPIDPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibPIDPhi(void *p) {
      delete (static_cast<::TCCalibPIDPhi*>(p));
   }
   static void deleteArray_TCCalibPIDPhi(void *p) {
      delete [] (static_cast<::TCCalibPIDPhi*>(p));
   }
   static void destruct_TCCalibPIDPhi(void *p) {
      typedef ::TCCalibPIDPhi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibPIDPhi

//______________________________________________________________________________
void TCCalibPed::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibPed.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibPed::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibPed::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibPed(void *p) {
      return  p ? new(p) ::TCCalibPed : new ::TCCalibPed;
   }
   static void *newArray_TCCalibPed(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibPed[nElements] : new ::TCCalibPed[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibPed(void *p) {
      delete (static_cast<::TCCalibPed*>(p));
   }
   static void deleteArray_TCCalibPed(void *p) {
      delete [] (static_cast<::TCCalibPed*>(p));
   }
   static void destruct_TCCalibPed(void *p) {
      typedef ::TCCalibPed current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibPed

//______________________________________________________________________________
void TCCalibTAPSPedLG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSPedLG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSPedLG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSPedLG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSPedLG(void *p) {
      return  p ? new(p) ::TCCalibTAPSPedLG : new ::TCCalibTAPSPedLG;
   }
   static void *newArray_TCCalibTAPSPedLG(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSPedLG[nElements] : new ::TCCalibTAPSPedLG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSPedLG(void *p) {
      delete (static_cast<::TCCalibTAPSPedLG*>(p));
   }
   static void deleteArray_TCCalibTAPSPedLG(void *p) {
      delete [] (static_cast<::TCCalibTAPSPedLG*>(p));
   }
   static void destruct_TCCalibTAPSPedLG(void *p) {
      typedef ::TCCalibTAPSPedLG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSPedLG

//______________________________________________________________________________
void TCCalibTAPSPedSG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSPedSG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSPedSG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSPedSG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSPedSG(void *p) {
      return  p ? new(p) ::TCCalibTAPSPedSG : new ::TCCalibTAPSPedSG;
   }
   static void *newArray_TCCalibTAPSPedSG(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSPedSG[nElements] : new ::TCCalibTAPSPedSG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSPedSG(void *p) {
      delete (static_cast<::TCCalibTAPSPedSG*>(p));
   }
   static void deleteArray_TCCalibTAPSPedSG(void *p) {
      delete [] (static_cast<::TCCalibTAPSPedSG*>(p));
   }
   static void destruct_TCCalibTAPSPedSG(void *p) {
      typedef ::TCCalibTAPSPedSG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSPedSG

//______________________________________________________________________________
void TCCalibTAPSPedVeto::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSPedVeto.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSPedVeto::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSPedVeto::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSPedVeto(void *p) {
      return  p ? new(p) ::TCCalibTAPSPedVeto : new ::TCCalibTAPSPedVeto;
   }
   static void *newArray_TCCalibTAPSPedVeto(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSPedVeto[nElements] : new ::TCCalibTAPSPedVeto[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSPedVeto(void *p) {
      delete (static_cast<::TCCalibTAPSPedVeto*>(p));
   }
   static void deleteArray_TCCalibTAPSPedVeto(void *p) {
      delete [] (static_cast<::TCCalibTAPSPedVeto*>(p));
   }
   static void destruct_TCCalibTAPSPedVeto(void *p) {
      typedef ::TCCalibTAPSPedVeto current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSPedVeto

//______________________________________________________________________________
void TCCalibQuadEnergy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibQuadEnergy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibQuadEnergy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibQuadEnergy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibQuadEnergy(void *p) {
      return  p ? new(p) ::TCCalibQuadEnergy : new ::TCCalibQuadEnergy;
   }
   static void *newArray_TCCalibQuadEnergy(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibQuadEnergy[nElements] : new ::TCCalibQuadEnergy[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibQuadEnergy(void *p) {
      delete (static_cast<::TCCalibQuadEnergy*>(p));
   }
   static void deleteArray_TCCalibQuadEnergy(void *p) {
      delete [] (static_cast<::TCCalibQuadEnergy*>(p));
   }
   static void destruct_TCCalibQuadEnergy(void *p) {
      typedef ::TCCalibQuadEnergy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibQuadEnergy

//______________________________________________________________________________
void TCCalibCBQuadEnergy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibCBQuadEnergy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibCBQuadEnergy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibCBQuadEnergy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibCBQuadEnergy(void *p) {
      return  p ? new(p) ::TCCalibCBQuadEnergy : new ::TCCalibCBQuadEnergy;
   }
   static void *newArray_TCCalibCBQuadEnergy(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibCBQuadEnergy[nElements] : new ::TCCalibCBQuadEnergy[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibCBQuadEnergy(void *p) {
      delete (static_cast<::TCCalibCBQuadEnergy*>(p));
   }
   static void deleteArray_TCCalibCBQuadEnergy(void *p) {
      delete [] (static_cast<::TCCalibCBQuadEnergy*>(p));
   }
   static void destruct_TCCalibCBQuadEnergy(void *p) {
      typedef ::TCCalibCBQuadEnergy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibCBQuadEnergy

//______________________________________________________________________________
void TCCalibTAPSQuadEnergy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSQuadEnergy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSQuadEnergy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSQuadEnergy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSQuadEnergy(void *p) {
      return  p ? new(p) ::TCCalibTAPSQuadEnergy : new ::TCCalibTAPSQuadEnergy;
   }
   static void *newArray_TCCalibTAPSQuadEnergy(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSQuadEnergy[nElements] : new ::TCCalibTAPSQuadEnergy[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSQuadEnergy(void *p) {
      delete (static_cast<::TCCalibTAPSQuadEnergy*>(p));
   }
   static void deleteArray_TCCalibTAPSQuadEnergy(void *p) {
      delete [] (static_cast<::TCCalibTAPSQuadEnergy*>(p));
   }
   static void destruct_TCCalibTAPSQuadEnergy(void *p) {
      typedef ::TCCalibTAPSQuadEnergy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSQuadEnergy

//______________________________________________________________________________
void TCCalibTAPSEnergySG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSEnergySG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSEnergySG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSEnergySG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSEnergySG(void *p) {
      return  p ? new(p) ::TCCalibTAPSEnergySG : new ::TCCalibTAPSEnergySG;
   }
   static void *newArray_TCCalibTAPSEnergySG(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSEnergySG[nElements] : new ::TCCalibTAPSEnergySG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSEnergySG(void *p) {
      delete (static_cast<::TCCalibTAPSEnergySG*>(p));
   }
   static void deleteArray_TCCalibTAPSEnergySG(void *p) {
      delete [] (static_cast<::TCCalibTAPSEnergySG*>(p));
   }
   static void destruct_TCCalibTAPSEnergySG(void *p) {
      typedef ::TCCalibTAPSEnergySG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSEnergySG

//______________________________________________________________________________
void TCCalibTAPSPSA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSPSA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSPSA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSPSA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSPSA(void *p) {
      return  p ? new(p) ::TCCalibTAPSPSA : new ::TCCalibTAPSPSA;
   }
   static void *newArray_TCCalibTAPSPSA(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSPSA[nElements] : new ::TCCalibTAPSPSA[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSPSA(void *p) {
      delete (static_cast<::TCCalibTAPSPSA*>(p));
   }
   static void deleteArray_TCCalibTAPSPSA(void *p) {
      delete [] (static_cast<::TCCalibTAPSPSA*>(p));
   }
   static void destruct_TCCalibTAPSPSA(void *p) {
      typedef ::TCCalibTAPSPSA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSPSA

//______________________________________________________________________________
void TCCalibTargetPosition::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTargetPosition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTargetPosition::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTargetPosition::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTargetPosition(void *p) {
      return  p ? new(p) ::TCCalibTargetPosition : new ::TCCalibTargetPosition;
   }
   static void *newArray_TCCalibTargetPosition(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTargetPosition[nElements] : new ::TCCalibTargetPosition[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTargetPosition(void *p) {
      delete (static_cast<::TCCalibTargetPosition*>(p));
   }
   static void deleteArray_TCCalibTargetPosition(void *p) {
      delete [] (static_cast<::TCCalibTargetPosition*>(p));
   }
   static void destruct_TCCalibTargetPosition(void *p) {
      typedef ::TCCalibTargetPosition current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTargetPosition

//______________________________________________________________________________
void TCCalibTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTime(void *p) {
      return  p ? new(p) ::TCCalibTime : new ::TCCalibTime;
   }
   static void *newArray_TCCalibTime(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTime[nElements] : new ::TCCalibTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTime(void *p) {
      delete (static_cast<::TCCalibTime*>(p));
   }
   static void deleteArray_TCCalibTime(void *p) {
      delete [] (static_cast<::TCCalibTime*>(p));
   }
   static void destruct_TCCalibTime(void *p) {
      typedef ::TCCalibTime current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTime

//______________________________________________________________________________
void TCCalibTaggerTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTaggerTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTaggerTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTaggerTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTaggerTime(void *p) {
      return  p ? new(p) ::TCCalibTaggerTime : new ::TCCalibTaggerTime;
   }
   static void *newArray_TCCalibTaggerTime(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTaggerTime[nElements] : new ::TCCalibTaggerTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTaggerTime(void *p) {
      delete (static_cast<::TCCalibTaggerTime*>(p));
   }
   static void deleteArray_TCCalibTaggerTime(void *p) {
      delete [] (static_cast<::TCCalibTaggerTime*>(p));
   }
   static void destruct_TCCalibTaggerTime(void *p) {
      typedef ::TCCalibTaggerTime current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTaggerTime

//______________________________________________________________________________
void TCCalibCBTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibCBTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibCBTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibCBTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibCBTime(void *p) {
      return  p ? new(p) ::TCCalibCBTime : new ::TCCalibCBTime;
   }
   static void *newArray_TCCalibCBTime(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibCBTime[nElements] : new ::TCCalibCBTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibCBTime(void *p) {
      delete (static_cast<::TCCalibCBTime*>(p));
   }
   static void deleteArray_TCCalibCBTime(void *p) {
      delete [] (static_cast<::TCCalibCBTime*>(p));
   }
   static void destruct_TCCalibCBTime(void *p) {
      typedef ::TCCalibCBTime current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibCBTime

//______________________________________________________________________________
void TCCalibCBRiseTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibCBRiseTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibCBRiseTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibCBRiseTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibCBRiseTime(void *p) {
      return  p ? new(p) ::TCCalibCBRiseTime : new ::TCCalibCBRiseTime;
   }
   static void *newArray_TCCalibCBRiseTime(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibCBRiseTime[nElements] : new ::TCCalibCBRiseTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibCBRiseTime(void *p) {
      delete (static_cast<::TCCalibCBRiseTime*>(p));
   }
   static void deleteArray_TCCalibCBRiseTime(void *p) {
      delete [] (static_cast<::TCCalibCBRiseTime*>(p));
   }
   static void destruct_TCCalibCBRiseTime(void *p) {
      typedef ::TCCalibCBRiseTime current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibCBRiseTime

//______________________________________________________________________________
void TCCalibTAPSTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibTAPSTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibTAPSTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibTAPSTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibTAPSTime(void *p) {
      return  p ? new(p) ::TCCalibTAPSTime : new ::TCCalibTAPSTime;
   }
   static void *newArray_TCCalibTAPSTime(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibTAPSTime[nElements] : new ::TCCalibTAPSTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibTAPSTime(void *p) {
      delete (static_cast<::TCCalibTAPSTime*>(p));
   }
   static void deleteArray_TCCalibTAPSTime(void *p) {
      delete [] (static_cast<::TCCalibTAPSTime*>(p));
   }
   static void destruct_TCCalibTAPSTime(void *p) {
      typedef ::TCCalibTAPSTime current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibTAPSTime

//______________________________________________________________________________
void TCCalibPIDTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibPIDTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibPIDTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibPIDTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibPIDTime(void *p) {
      return  p ? new(p) ::TCCalibPIDTime : new ::TCCalibPIDTime;
   }
   static void *newArray_TCCalibPIDTime(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibPIDTime[nElements] : new ::TCCalibPIDTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibPIDTime(void *p) {
      delete (static_cast<::TCCalibPIDTime*>(p));
   }
   static void deleteArray_TCCalibPIDTime(void *p) {
      delete [] (static_cast<::TCCalibPIDTime*>(p));
   }
   static void destruct_TCCalibPIDTime(void *p) {
      typedef ::TCCalibPIDTime current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibPIDTime

//______________________________________________________________________________
void TCCalibVetoTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibVetoTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibVetoTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibVetoTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibVetoTime(void *p) {
      return  p ? new(p) ::TCCalibVetoTime : new ::TCCalibVetoTime;
   }
   static void *newArray_TCCalibVetoTime(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibVetoTime[nElements] : new ::TCCalibVetoTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibVetoTime(void *p) {
      delete (static_cast<::TCCalibVetoTime*>(p));
   }
   static void deleteArray_TCCalibVetoTime(void *p) {
      delete [] (static_cast<::TCCalibVetoTime*>(p));
   }
   static void destruct_TCCalibVetoTime(void *p) {
      typedef ::TCCalibVetoTime current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibVetoTime

//______________________________________________________________________________
void TCCalibVetoCorr::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibVetoCorr.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibVetoCorr::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibVetoCorr::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibVetoCorr(void *p) {
      return  p ? new(p) ::TCCalibVetoCorr : new ::TCCalibVetoCorr;
   }
   static void *newArray_TCCalibVetoCorr(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibVetoCorr[nElements] : new ::TCCalibVetoCorr[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibVetoCorr(void *p) {
      delete (static_cast<::TCCalibVetoCorr*>(p));
   }
   static void deleteArray_TCCalibVetoCorr(void *p) {
      delete [] (static_cast<::TCCalibVetoCorr*>(p));
   }
   static void destruct_TCCalibVetoCorr(void *p) {
      typedef ::TCCalibVetoCorr current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibVetoCorr

//______________________________________________________________________________
void TCCalibVetoEnergy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCCalibVetoEnergy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCCalibVetoEnergy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCCalibVetoEnergy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCCalibVetoEnergy(void *p) {
      return  p ? new(p) ::TCCalibVetoEnergy : new ::TCCalibVetoEnergy;
   }
   static void *newArray_TCCalibVetoEnergy(Long_t nElements, void *p) {
      return p ? new(p) ::TCCalibVetoEnergy[nElements] : new ::TCCalibVetoEnergy[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCCalibVetoEnergy(void *p) {
      delete (static_cast<::TCCalibVetoEnergy*>(p));
   }
   static void deleteArray_TCCalibVetoEnergy(void *p) {
      delete [] (static_cast<::TCCalibVetoEnergy*>(p));
   }
   static void destruct_TCCalibVetoEnergy(void *p) {
      typedef ::TCCalibVetoEnergy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCCalibVetoEnergy

//______________________________________________________________________________
void TCWriteARCalib::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCWriteARCalib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCWriteARCalib::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCWriteARCalib::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCWriteARCalib(void *p) {
      return  p ? new(p) ::TCWriteARCalib : new ::TCWriteARCalib;
   }
   static void *newArray_TCWriteARCalib(Long_t nElements, void *p) {
      return p ? new(p) ::TCWriteARCalib[nElements] : new ::TCWriteARCalib[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCWriteARCalib(void *p) {
      delete (static_cast<::TCWriteARCalib*>(p));
   }
   static void deleteArray_TCWriteARCalib(void *p) {
      delete [] (static_cast<::TCWriteARCalib*>(p));
   }
   static void destruct_TCWriteARCalib(void *p) {
      typedef ::TCWriteARCalib current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCWriteARCalib

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_G__CaLib() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_G__CaLib) = RecordReadRules_G__CaLib();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_G__CaLib));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_G__CaLib_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibCBTimeWalk.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibData.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibEnergy.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDDroop.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDEnergy.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDEnergyTrad.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDPhi.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibPed.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibQuadEnergy.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibTAPSEnergySG.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibTAPSPSA.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibTargetPosition.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibType.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibVetoCorr.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCCalibVetoEnergy.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCConfig.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCContainer.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCFileManager.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCMySQLManager.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCReadACQU.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCReadARCalib.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCReadConfig.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCUtils.h",
"/home/dave/opt/AR.CATS/CaLib/include/TCWriteARCalib.h",
"/home/dave/opt/AR.CATS/CaLib/include/TIndicatorLine.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root_v6.36.00/include",
"/home/dave/opt/AR.CATS/CaLib/include",
"/home/dave/opt/AR.CATS/Tools/a2display/inc",
"/opt/root_v6.36.00/include/",
"/home/dave/opt/AR.CATS/build/CaLib/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__CaLib dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TCCalibData.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCCalibData;
class __attribute__((annotate("$clingAutoload$TCCalibType.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCCalibType;
class __attribute__((annotate("$clingAutoload$TCReadConfig.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCConfigElement;
class __attribute__((annotate("$clingAutoload$TCReadConfig.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCReadConfig;
class __attribute__((annotate("$clingAutoload$TCReadACQU.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCACQUFile;
class __attribute__((annotate("$clingAutoload$TCReadACQU.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCReadACQU;
class __attribute__((annotate("$clingAutoload$TCReadARCalib.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCARElement;
class __attribute__((annotate("$clingAutoload$TCReadARCalib.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCARTimeWalk;
class __attribute__((annotate("$clingAutoload$TCReadARCalib.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCARNeighbours;
class __attribute__((annotate("$clingAutoload$TCReadARCalib.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCReadARCalib;
class __attribute__((annotate("$clingAutoload$TCContainer.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCRun;
class __attribute__((annotate("$clingAutoload$TCContainer.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCCalibration;
class __attribute__((annotate("$clingAutoload$TCContainer.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCContainer;
class __attribute__((annotate("$clingAutoload$TCMySQLManager.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCMySQLManager;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h")))  TCCalib;
class __attribute__((annotate("$clingAutoload$TCFileManager.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibCBTimeWalk.h")))  TCFileManager;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibCBTimeWalk.h")))  TCCalibCBTimeWalk;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h")))  TCCalibDiscrThr;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h")))  TCCalibCBLED;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h")))  TCCalibTAPSLED1;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h")))  TCCalibTAPSLED2;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h")))  TCCalibTAPSCFD;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h")))  TCCalibVetoLED;
class __attribute__((annotate("$clingAutoload$TIndicatorLine.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibEnergy.h")))  TIndicatorLine;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibEnergy.h")))  TCCalibEnergy;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibEnergy.h")))  TCCalibCBEnergy;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibEnergy.h")))  TCCalibTAPSEnergyLG;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDDroop.h")))  TCCalibPIDDroop;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDEnergy.h")))  TCCalibPIDEnergy;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDEnergyTrad.h")))  TCCalibPIDEnergyTrad;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDPhi.h")))  TCCalibPIDPhi;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibPed.h")))  TCCalibPed;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibPed.h")))  TCCalibTAPSPedLG;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibPed.h")))  TCCalibTAPSPedSG;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibPed.h")))  TCCalibTAPSPedVeto;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibQuadEnergy.h")))  TCCalibQuadEnergy;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibQuadEnergy.h")))  TCCalibCBQuadEnergy;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibQuadEnergy.h")))  TCCalibTAPSQuadEnergy;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTAPSEnergySG.h")))  TCCalibTAPSEnergySG;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTAPSPSA.h")))  TCCalibTAPSPSA;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTargetPosition.h")))  TCCalibTargetPosition;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h")))  TCCalibTime;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h")))  TCCalibTaggerTime;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h")))  TCCalibCBTime;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h")))  TCCalibCBRiseTime;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h")))  TCCalibTAPSTime;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h")))  TCCalibPIDTime;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h")))  TCCalibVetoTime;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibVetoCorr.h")))  TCCalibVetoCorr;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCCalibVetoEnergy.h")))  TCCalibVetoEnergy;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/CaLib/include/TCWriteARCalib.h")))  TCWriteARCalib;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__CaLib dictionary payload"

#ifndef _FORTIFY_SOURCE
  #define _FORTIFY_SOURCE 2
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalib.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibCBTimeWalk.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibData.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibDiscrThr.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibEnergy.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDDroop.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDEnergy.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDEnergyTrad.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPIDPhi.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibPed.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibQuadEnergy.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibTAPSEnergySG.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibTAPSPSA.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibTargetPosition.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibTime.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibType.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibVetoCorr.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCCalibVetoEnergy.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCConfig.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCContainer.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCFileManager.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCMySQLManager.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCReadACQU.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCReadARCalib.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCReadConfig.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCUtils.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TCWriteARCalib.h"
#include "/home/dave/opt/AR.CATS/CaLib/include/TIndicatorLine.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ECalibDetector", payloadCode, "@",
"ERawFileFormat", payloadCode, "@",
"ERawFileType", payloadCode, "@",
"TCACQUFile", payloadCode, "@",
"TCARElement", payloadCode, "@",
"TCARNeighbours", payloadCode, "@",
"TCARTimeWalk", payloadCode, "@",
"TCCalib", payloadCode, "@",
"TCCalibCBEnergy", payloadCode, "@",
"TCCalibCBLED", payloadCode, "@",
"TCCalibCBQuadEnergy", payloadCode, "@",
"TCCalibCBRiseTime", payloadCode, "@",
"TCCalibCBTime", payloadCode, "@",
"TCCalibCBTimeWalk", payloadCode, "@",
"TCCalibData", payloadCode, "@",
"TCCalibDiscrThr", payloadCode, "@",
"TCCalibEnergy", payloadCode, "@",
"TCCalibPIDDroop", payloadCode, "@",
"TCCalibPIDEnergy", payloadCode, "@",
"TCCalibPIDEnergyTrad", payloadCode, "@",
"TCCalibPIDPhi", payloadCode, "@",
"TCCalibPIDTime", payloadCode, "@",
"TCCalibPed", payloadCode, "@",
"TCCalibQuadEnergy", payloadCode, "@",
"TCCalibTAPSCFD", payloadCode, "@",
"TCCalibTAPSEnergyLG", payloadCode, "@",
"TCCalibTAPSEnergySG", payloadCode, "@",
"TCCalibTAPSLED1", payloadCode, "@",
"TCCalibTAPSLED2", payloadCode, "@",
"TCCalibTAPSPSA", payloadCode, "@",
"TCCalibTAPSPedLG", payloadCode, "@",
"TCCalibTAPSPedSG", payloadCode, "@",
"TCCalibTAPSPedVeto", payloadCode, "@",
"TCCalibTAPSQuadEnergy", payloadCode, "@",
"TCCalibTAPSTime", payloadCode, "@",
"TCCalibTaggerTime", payloadCode, "@",
"TCCalibTargetPosition", payloadCode, "@",
"TCCalibTime", payloadCode, "@",
"TCCalibType", payloadCode, "@",
"TCCalibVetoCorr", payloadCode, "@",
"TCCalibVetoEnergy", payloadCode, "@",
"TCCalibVetoLED", payloadCode, "@",
"TCCalibVetoTime", payloadCode, "@",
"TCCalibration", payloadCode, "@",
"TCConfigElement", payloadCode, "@",
"TCContainer", payloadCode, "@",
"TCFileManager", payloadCode, "@",
"TCMySQLManager", payloadCode, "@",
"TCReadACQU", payloadCode, "@",
"TCReadARCalib", payloadCode, "@",
"TCReadConfig", payloadCode, "@",
"TCRun", payloadCode, "@",
"TCWriteARCalib", payloadCode, "@",
"TIndicatorLine", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__CaLib",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__CaLib_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__CaLib_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__CaLib() {
  TriggerDictionaryInitialization_G__CaLib_Impl();
}
