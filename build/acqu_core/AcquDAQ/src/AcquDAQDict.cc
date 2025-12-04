// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddIacqu_coredIAcquDAQdIsrcdIAcquDAQDict
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
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/DAQMemMap_t.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2373.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4413DAQEnable.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4413SPILL.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4508.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_GSI4800.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMACmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_KPhI686.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_SIS1100.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_SY1527.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_V2718.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_VPE2xX86_64.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_VPE2xX86_64A.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQcontrol.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQexperiment.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQguiCtrl.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQstore.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQsupervise.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TEPICSmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_1821SMI.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_LRS1800.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_Phil10C.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_STR200.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFBmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TGUIsupervise.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_Scaler.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_TCS.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_TDC.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CBD8210.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_GeSiCA.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_KPhSMI.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_SIS3820.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V1190.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V1290.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V775.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V785.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V792.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V874.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V965.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VITEC.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROMT.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Moeller.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Pattern.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Scaler.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVMEmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVirtualModule.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_DAQMemMap_t(void *p);
   static void deleteArray_DAQMemMap_t(void *p);
   static void destruct_DAQMemMap_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DAQMemMap_t*)
   {
      ::DAQMemMap_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DAQMemMap_t >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("DAQMemMap_t", ::DAQMemMap_t::Class_Version(), "DAQMemMap_t.h", 16,
                  typeid(::DAQMemMap_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DAQMemMap_t::Dictionary, isa_proxy, 4,
                  sizeof(::DAQMemMap_t) );
      instance.SetDelete(&delete_DAQMemMap_t);
      instance.SetDeleteArray(&deleteArray_DAQMemMap_t);
      instance.SetDestructor(&destruct_DAQMemMap_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DAQMemMap_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::DAQMemMap_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DAQMemMap_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQcontrol(void *p);
   static void deleteArray_TDAQcontrol(void *p);
   static void destruct_TDAQcontrol(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQcontrol*)
   {
      ::TDAQcontrol *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQcontrol >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQcontrol", ::TDAQcontrol::Class_Version(), "TDAQcontrol.h", 23,
                  typeid(::TDAQcontrol), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQcontrol::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQcontrol) );
      instance.SetDelete(&delete_TDAQcontrol);
      instance.SetDeleteArray(&deleteArray_TDAQcontrol);
      instance.SetDestructor(&destruct_TDAQcontrol);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQcontrol*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQcontrol*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQcontrol*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQsupervise(void *p);
   static void deleteArray_TDAQsupervise(void *p);
   static void destruct_TDAQsupervise(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQsupervise*)
   {
      ::TDAQsupervise *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQsupervise >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQsupervise", ::TDAQsupervise::Class_Version(), "TDAQsupervise.h", 67,
                  typeid(::TDAQsupervise), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQsupervise::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQsupervise) );
      instance.SetDelete(&delete_TDAQsupervise);
      instance.SetDeleteArray(&deleteArray_TDAQsupervise);
      instance.SetDestructor(&destruct_TDAQsupervise);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQsupervise*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQsupervise*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQsupervise*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGUIsupervise(void *p);
   static void deleteArray_TGUIsupervise(void *p);
   static void destruct_TGUIsupervise(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGUIsupervise*)
   {
      ::TGUIsupervise *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGUIsupervise >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGUIsupervise", ::TGUIsupervise::Class_Version(), "TGUIsupervise.h", 21,
                  typeid(::TGUIsupervise), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGUIsupervise::Dictionary, isa_proxy, 4,
                  sizeof(::TGUIsupervise) );
      instance.SetDelete(&delete_TGUIsupervise);
      instance.SetDeleteArray(&deleteArray_TGUIsupervise);
      instance.SetDestructor(&destruct_TGUIsupervise);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGUIsupervise*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGUIsupervise*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGUIsupervise*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQstore(void *p);
   static void deleteArray_TDAQstore(void *p);
   static void destruct_TDAQstore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQstore*)
   {
      ::TDAQstore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQstore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQstore", ::TDAQstore::Class_Version(), "TDAQstore.h", 27,
                  typeid(::TDAQstore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQstore::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQstore) );
      instance.SetDelete(&delete_TDAQstore);
      instance.SetDeleteArray(&deleteArray_TDAQstore);
      instance.SetDestructor(&destruct_TDAQstore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQstore*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQstore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQstore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQexperiment(void *p);
   static void deleteArray_TDAQexperiment(void *p);
   static void destruct_TDAQexperiment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQexperiment*)
   {
      ::TDAQexperiment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQexperiment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQexperiment", ::TDAQexperiment::Class_Version(), "TDAQexperiment.h", 92,
                  typeid(::TDAQexperiment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQexperiment::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQexperiment) );
      instance.SetDelete(&delete_TDAQexperiment);
      instance.SetDeleteArray(&deleteArray_TDAQexperiment);
      instance.SetDestructor(&destruct_TDAQexperiment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQexperiment*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQexperiment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQexperiment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQmodule(void *p);
   static void deleteArray_TDAQmodule(void *p);
   static void destruct_TDAQmodule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQmodule*)
   {
      ::TDAQmodule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQmodule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQmodule", ::TDAQmodule::Class_Version(), "TDAQmodule.h", 64,
                  typeid(::TDAQmodule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQmodule::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQmodule) );
      instance.SetDelete(&delete_TDAQmodule);
      instance.SetDeleteArray(&deleteArray_TDAQmodule);
      instance.SetDestructor(&destruct_TDAQmodule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQmodule*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQmodule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQmodule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCAMACmodule(void *p);
   static void deleteArray_TCAMACmodule(void *p);
   static void destruct_TCAMACmodule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCAMACmodule*)
   {
      ::TCAMACmodule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCAMACmodule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCAMACmodule", ::TCAMACmodule::Class_Version(), "TCAMACmodule.h", 22,
                  typeid(::TCAMACmodule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCAMACmodule::Dictionary, isa_proxy, 4,
                  sizeof(::TCAMACmodule) );
      instance.SetDelete(&delete_TCAMACmodule);
      instance.SetDeleteArray(&deleteArray_TCAMACmodule);
      instance.SetDestructor(&destruct_TCAMACmodule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCAMACmodule*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCAMACmodule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCAMACmodule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCAMAC_2323(void *p);
   static void deleteArray_TCAMAC_2323(void *p);
   static void destruct_TCAMAC_2323(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCAMAC_2323*)
   {
      ::TCAMAC_2323 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCAMAC_2323 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCAMAC_2323", ::TCAMAC_2323::Class_Version(), "TCAMAC_2323.h", 19,
                  typeid(::TCAMAC_2323), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCAMAC_2323::Dictionary, isa_proxy, 4,
                  sizeof(::TCAMAC_2323) );
      instance.SetDelete(&delete_TCAMAC_2323);
      instance.SetDeleteArray(&deleteArray_TCAMAC_2323);
      instance.SetDestructor(&destruct_TCAMAC_2323);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCAMAC_2323*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCAMAC_2323*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCAMAC_2323*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCAMAC_2373(void *p);
   static void deleteArray_TCAMAC_2373(void *p);
   static void destruct_TCAMAC_2373(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCAMAC_2373*)
   {
      ::TCAMAC_2373 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCAMAC_2373 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCAMAC_2373", ::TCAMAC_2373::Class_Version(), "TCAMAC_2373.h", 20,
                  typeid(::TCAMAC_2373), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCAMAC_2373::Dictionary, isa_proxy, 4,
                  sizeof(::TCAMAC_2373) );
      instance.SetDelete(&delete_TCAMAC_2373);
      instance.SetDeleteArray(&deleteArray_TCAMAC_2373);
      instance.SetDestructor(&destruct_TCAMAC_2373);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCAMAC_2373*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCAMAC_2373*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCAMAC_2373*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCAMAC_4413SPILL(void *p);
   static void deleteArray_TCAMAC_4413SPILL(void *p);
   static void destruct_TCAMAC_4413SPILL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCAMAC_4413SPILL*)
   {
      ::TCAMAC_4413SPILL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCAMAC_4413SPILL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCAMAC_4413SPILL", ::TCAMAC_4413SPILL::Class_Version(), "TCAMAC_4413SPILL.h", 22,
                  typeid(::TCAMAC_4413SPILL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCAMAC_4413SPILL::Dictionary, isa_proxy, 4,
                  sizeof(::TCAMAC_4413SPILL) );
      instance.SetDelete(&delete_TCAMAC_4413SPILL);
      instance.SetDeleteArray(&deleteArray_TCAMAC_4413SPILL);
      instance.SetDestructor(&destruct_TCAMAC_4413SPILL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCAMAC_4413SPILL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCAMAC_4413SPILL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCAMAC_4413SPILL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCAMAC_4413DAQEnable(void *p);
   static void deleteArray_TCAMAC_4413DAQEnable(void *p);
   static void destruct_TCAMAC_4413DAQEnable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCAMAC_4413DAQEnable*)
   {
      ::TCAMAC_4413DAQEnable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCAMAC_4413DAQEnable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCAMAC_4413DAQEnable", ::TCAMAC_4413DAQEnable::Class_Version(), "TCAMAC_4413DAQEnable.h", 17,
                  typeid(::TCAMAC_4413DAQEnable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCAMAC_4413DAQEnable::Dictionary, isa_proxy, 4,
                  sizeof(::TCAMAC_4413DAQEnable) );
      instance.SetDelete(&delete_TCAMAC_4413DAQEnable);
      instance.SetDeleteArray(&deleteArray_TCAMAC_4413DAQEnable);
      instance.SetDestructor(&destruct_TCAMAC_4413DAQEnable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCAMAC_4413DAQEnable*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCAMAC_4413DAQEnable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCAMAC_4413DAQEnable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCAMAC_4508(void *p);
   static void deleteArray_TCAMAC_4508(void *p);
   static void destruct_TCAMAC_4508(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCAMAC_4508*)
   {
      ::TCAMAC_4508 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCAMAC_4508 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCAMAC_4508", ::TCAMAC_4508::Class_Version(), "TCAMAC_4508.h", 27,
                  typeid(::TCAMAC_4508), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCAMAC_4508::Dictionary, isa_proxy, 4,
                  sizeof(::TCAMAC_4508) );
      instance.SetDelete(&delete_TCAMAC_4508);
      instance.SetDeleteArray(&deleteArray_TCAMAC_4508);
      instance.SetDestructor(&destruct_TCAMAC_4508);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCAMAC_4508*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCAMAC_4508*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCAMAC_4508*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCAMAC_GSI4800(void *p);
   static void deleteArray_TCAMAC_GSI4800(void *p);
   static void destruct_TCAMAC_GSI4800(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCAMAC_GSI4800*)
   {
      ::TCAMAC_GSI4800 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCAMAC_GSI4800 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCAMAC_GSI4800", ::TCAMAC_GSI4800::Class_Version(), "TCAMAC_GSI4800.h", 22,
                  typeid(::TCAMAC_GSI4800), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCAMAC_GSI4800::Dictionary, isa_proxy, 4,
                  sizeof(::TCAMAC_GSI4800) );
      instance.SetDelete(&delete_TCAMAC_GSI4800);
      instance.SetDeleteArray(&deleteArray_TCAMAC_GSI4800);
      instance.SetDestructor(&destruct_TCAMAC_GSI4800);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCAMAC_GSI4800*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCAMAC_GSI4800*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCAMAC_GSI4800*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQ_KPhI686(void *p);
   static void deleteArray_TDAQ_KPhI686(void *p);
   static void destruct_TDAQ_KPhI686(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQ_KPhI686*)
   {
      ::TDAQ_KPhI686 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQ_KPhI686 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQ_KPhI686", ::TDAQ_KPhI686::Class_Version(), "TDAQ_KPhI686.h", 34,
                  typeid(::TDAQ_KPhI686), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQ_KPhI686::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQ_KPhI686) );
      instance.SetDelete(&delete_TDAQ_KPhI686);
      instance.SetDeleteArray(&deleteArray_TDAQ_KPhI686);
      instance.SetDestructor(&destruct_TDAQ_KPhI686);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQ_KPhI686*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQ_KPhI686*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQ_KPhI686*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQ_SIS1100(void *p);
   static void deleteArray_TDAQ_SIS1100(void *p);
   static void destruct_TDAQ_SIS1100(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQ_SIS1100*)
   {
      ::TDAQ_SIS1100 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQ_SIS1100 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQ_SIS1100", ::TDAQ_SIS1100::Class_Version(), "TDAQ_SIS1100.h", 21,
                  typeid(::TDAQ_SIS1100), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQ_SIS1100::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQ_SIS1100) );
      instance.SetDelete(&delete_TDAQ_SIS1100);
      instance.SetDeleteArray(&deleteArray_TDAQ_SIS1100);
      instance.SetDestructor(&destruct_TDAQ_SIS1100);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQ_SIS1100*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQ_SIS1100*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQ_SIS1100*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQ_SY1527(void *p);
   static void deleteArray_TDAQ_SY1527(void *p);
   static void destruct_TDAQ_SY1527(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQ_SY1527*)
   {
      ::TDAQ_SY1527 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQ_SY1527 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQ_SY1527", ::TDAQ_SY1527::Class_Version(), "TDAQ_SY1527.h", 30,
                  typeid(::TDAQ_SY1527), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQ_SY1527::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQ_SY1527) );
      instance.SetDelete(&delete_TDAQ_SY1527);
      instance.SetDeleteArray(&deleteArray_TDAQ_SY1527);
      instance.SetDestructor(&destruct_TDAQ_SY1527);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQ_SY1527*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQ_SY1527*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQ_SY1527*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQ_V2718(void *p);
   static void deleteArray_TDAQ_V2718(void *p);
   static void destruct_TDAQ_V2718(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQ_V2718*)
   {
      ::TDAQ_V2718 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQ_V2718 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQ_V2718", ::TDAQ_V2718::Class_Version(), "TDAQ_V2718.h", 30,
                  typeid(::TDAQ_V2718), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQ_V2718::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQ_V2718) );
      instance.SetDelete(&delete_TDAQ_V2718);
      instance.SetDeleteArray(&deleteArray_TDAQ_V2718);
      instance.SetDestructor(&destruct_TDAQ_V2718);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQ_V2718*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQ_V2718*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQ_V2718*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQ_VPE2xX86_64(void *p);
   static void deleteArray_TDAQ_VPE2xX86_64(void *p);
   static void destruct_TDAQ_VPE2xX86_64(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQ_VPE2xX86_64*)
   {
      ::TDAQ_VPE2xX86_64 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQ_VPE2xX86_64 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQ_VPE2xX86_64", ::TDAQ_VPE2xX86_64::Class_Version(), "TDAQ_VPE2xX86_64.h", 26,
                  typeid(::TDAQ_VPE2xX86_64), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQ_VPE2xX86_64::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQ_VPE2xX86_64) );
      instance.SetDelete(&delete_TDAQ_VPE2xX86_64);
      instance.SetDeleteArray(&deleteArray_TDAQ_VPE2xX86_64);
      instance.SetDestructor(&destruct_TDAQ_VPE2xX86_64);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQ_VPE2xX86_64*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQ_VPE2xX86_64*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQ_VPE2xX86_64*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQ_VPE2xX86_64A(void *p);
   static void deleteArray_TDAQ_VPE2xX86_64A(void *p);
   static void destruct_TDAQ_VPE2xX86_64A(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQ_VPE2xX86_64A*)
   {
      ::TDAQ_VPE2xX86_64A *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQ_VPE2xX86_64A >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQ_VPE2xX86_64A", ::TDAQ_VPE2xX86_64A::Class_Version(), "TDAQ_VPE2xX86_64A.h", 19,
                  typeid(::TDAQ_VPE2xX86_64A), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQ_VPE2xX86_64A::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQ_VPE2xX86_64A) );
      instance.SetDelete(&delete_TDAQ_VPE2xX86_64A);
      instance.SetDeleteArray(&deleteArray_TDAQ_VPE2xX86_64A);
      instance.SetDestructor(&destruct_TDAQ_VPE2xX86_64A);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQ_VPE2xX86_64A*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQ_VPE2xX86_64A*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQ_VPE2xX86_64A*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDAQguiCtrl(void *p);
   static void deleteArray_TDAQguiCtrl(void *p);
   static void destruct_TDAQguiCtrl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDAQguiCtrl*)
   {
      ::TDAQguiCtrl *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDAQguiCtrl >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDAQguiCtrl", ::TDAQguiCtrl::Class_Version(), "TDAQguiCtrl.h", 76,
                  typeid(::TDAQguiCtrl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDAQguiCtrl::Dictionary, isa_proxy, 4,
                  sizeof(::TDAQguiCtrl) );
      instance.SetDelete(&delete_TDAQguiCtrl);
      instance.SetDeleteArray(&deleteArray_TDAQguiCtrl);
      instance.SetDestructor(&destruct_TDAQguiCtrl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDAQguiCtrl*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDAQguiCtrl*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDAQguiCtrl*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEPICSmodule(void *p = nullptr);
   static void *newArray_TEPICSmodule(Long_t size, void *p);
   static void delete_TEPICSmodule(void *p);
   static void deleteArray_TEPICSmodule(void *p);
   static void destruct_TEPICSmodule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEPICSmodule*)
   {
      ::TEPICSmodule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEPICSmodule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEPICSmodule", ::TEPICSmodule::Class_Version(), "TEPICSmodule.h", 21,
                  typeid(::TEPICSmodule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEPICSmodule::Dictionary, isa_proxy, 4,
                  sizeof(::TEPICSmodule) );
      instance.SetNew(&new_TEPICSmodule);
      instance.SetNewArray(&newArray_TEPICSmodule);
      instance.SetDelete(&delete_TEPICSmodule);
      instance.SetDeleteArray(&deleteArray_TEPICSmodule);
      instance.SetDestructor(&destruct_TEPICSmodule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEPICSmodule*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEPICSmodule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEPICSmodule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVMEmodule(void *p);
   static void deleteArray_TVMEmodule(void *p);
   static void destruct_TVMEmodule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVMEmodule*)
   {
      ::TVMEmodule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVMEmodule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVMEmodule", ::TVMEmodule::Class_Version(), "TVMEmodule.h", 45,
                  typeid(::TVMEmodule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVMEmodule::Dictionary, isa_proxy, 4,
                  sizeof(::TVMEmodule) );
      instance.SetDelete(&delete_TVMEmodule);
      instance.SetDeleteArray(&deleteArray_TVMEmodule);
      instance.SetDestructor(&destruct_TVMEmodule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVMEmodule*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVMEmodule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVMEmodule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFBmodule(void *p);
   static void deleteArray_TFBmodule(void *p);
   static void destruct_TFBmodule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFBmodule*)
   {
      ::TFBmodule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFBmodule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFBmodule", ::TFBmodule::Class_Version(), "TFBmodule.h", 29,
                  typeid(::TFBmodule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFBmodule::Dictionary, isa_proxy, 4,
                  sizeof(::TFBmodule) );
      instance.SetDelete(&delete_TFBmodule);
      instance.SetDeleteArray(&deleteArray_TFBmodule);
      instance.SetDestructor(&destruct_TFBmodule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFBmodule*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFBmodule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFBmodule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_KPhSMI(void *p);
   static void deleteArray_TVME_KPhSMI(void *p);
   static void destruct_TVME_KPhSMI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_KPhSMI*)
   {
      ::TVME_KPhSMI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_KPhSMI >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_KPhSMI", ::TVME_KPhSMI::Class_Version(), "TVME_KPhSMI.h", 30,
                  typeid(::TVME_KPhSMI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_KPhSMI::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_KPhSMI) );
      instance.SetDelete(&delete_TVME_KPhSMI);
      instance.SetDeleteArray(&deleteArray_TVME_KPhSMI);
      instance.SetDestructor(&destruct_TVME_KPhSMI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_KPhSMI*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_KPhSMI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_KPhSMI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFB_1821SMI(void *p);
   static void deleteArray_TFB_1821SMI(void *p);
   static void destruct_TFB_1821SMI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFB_1821SMI*)
   {
      ::TFB_1821SMI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFB_1821SMI >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFB_1821SMI", ::TFB_1821SMI::Class_Version(), "TFB_1821SMI.h", 53,
                  typeid(::TFB_1821SMI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFB_1821SMI::Dictionary, isa_proxy, 4,
                  sizeof(::TFB_1821SMI) );
      instance.SetDelete(&delete_TFB_1821SMI);
      instance.SetDeleteArray(&deleteArray_TFB_1821SMI);
      instance.SetDestructor(&destruct_TFB_1821SMI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFB_1821SMI*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFB_1821SMI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFB_1821SMI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFB_LRS1800(void *p);
   static void deleteArray_TFB_LRS1800(void *p);
   static void destruct_TFB_LRS1800(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFB_LRS1800*)
   {
      ::TFB_LRS1800 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFB_LRS1800 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFB_LRS1800", ::TFB_LRS1800::Class_Version(), "TFB_LRS1800.h", 20,
                  typeid(::TFB_LRS1800), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFB_LRS1800::Dictionary, isa_proxy, 4,
                  sizeof(::TFB_LRS1800) );
      instance.SetDelete(&delete_TFB_LRS1800);
      instance.SetDeleteArray(&deleteArray_TFB_LRS1800);
      instance.SetDestructor(&destruct_TFB_LRS1800);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFB_LRS1800*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFB_LRS1800*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFB_LRS1800*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFB_Phil10C(void *p);
   static void deleteArray_TFB_Phil10C(void *p);
   static void destruct_TFB_Phil10C(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFB_Phil10C*)
   {
      ::TFB_Phil10C *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFB_Phil10C >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFB_Phil10C", ::TFB_Phil10C::Class_Version(), "TFB_Phil10C.h", 18,
                  typeid(::TFB_Phil10C), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFB_Phil10C::Dictionary, isa_proxy, 4,
                  sizeof(::TFB_Phil10C) );
      instance.SetDelete(&delete_TFB_Phil10C);
      instance.SetDeleteArray(&deleteArray_TFB_Phil10C);
      instance.SetDestructor(&destruct_TFB_Phil10C);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFB_Phil10C*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFB_Phil10C*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFB_Phil10C*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFB_STR200(void *p);
   static void deleteArray_TFB_STR200(void *p);
   static void destruct_TFB_STR200(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFB_STR200*)
   {
      ::TFB_STR200 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFB_STR200 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFB_STR200", ::TFB_STR200::Class_Version(), "TFB_STR200.h", 17,
                  typeid(::TFB_STR200), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFB_STR200::Dictionary, isa_proxy, 4,
                  sizeof(::TFB_STR200) );
      instance.SetDelete(&delete_TFB_STR200);
      instance.SetDeleteArray(&deleteArray_TFB_STR200);
      instance.SetDestructor(&destruct_TFB_STR200);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFB_STR200*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFB_STR200*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFB_STR200*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_CATCH(void *p);
   static void deleteArray_TVME_CATCH(void *p);
   static void destruct_TVME_CATCH(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_CATCH*)
   {
      ::TVME_CATCH *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_CATCH >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_CATCH", ::TVME_CATCH::Class_Version(), "TVME_CATCH.h", 72,
                  typeid(::TVME_CATCH), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_CATCH::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_CATCH) );
      instance.SetDelete(&delete_TVME_CATCH);
      instance.SetDeleteArray(&deleteArray_TVME_CATCH);
      instance.SetDestructor(&destruct_TVME_CATCH);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_CATCH*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_CATCH*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_CATCH*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_CATCH_Scaler(void *p);
   static void deleteArray_TVME_CATCH_Scaler(void *p);
   static void destruct_TVME_CATCH_Scaler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_CATCH_Scaler*)
   {
      ::TVME_CATCH_Scaler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_CATCH_Scaler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_CATCH_Scaler", ::TVME_CATCH_Scaler::Class_Version(), "TVME_CATCH_Scaler.h", 22,
                  typeid(::TVME_CATCH_Scaler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_CATCH_Scaler::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_CATCH_Scaler) );
      instance.SetDelete(&delete_TVME_CATCH_Scaler);
      instance.SetDeleteArray(&deleteArray_TVME_CATCH_Scaler);
      instance.SetDestructor(&destruct_TVME_CATCH_Scaler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_CATCH_Scaler*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_CATCH_Scaler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_CATCH_Scaler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_CATCH_TCS(void *p);
   static void deleteArray_TVME_CATCH_TCS(void *p);
   static void destruct_TVME_CATCH_TCS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_CATCH_TCS*)
   {
      ::TVME_CATCH_TCS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_CATCH_TCS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_CATCH_TCS", ::TVME_CATCH_TCS::Class_Version(), "TVME_CATCH_TCS.h", 42,
                  typeid(::TVME_CATCH_TCS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_CATCH_TCS::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_CATCH_TCS) );
      instance.SetDelete(&delete_TVME_CATCH_TCS);
      instance.SetDeleteArray(&deleteArray_TVME_CATCH_TCS);
      instance.SetDestructor(&destruct_TVME_CATCH_TCS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_CATCH_TCS*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_CATCH_TCS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_CATCH_TCS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_CATCH_TDC(void *p);
   static void deleteArray_TVME_CATCH_TDC(void *p);
   static void destruct_TVME_CATCH_TDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_CATCH_TDC*)
   {
      ::TVME_CATCH_TDC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_CATCH_TDC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_CATCH_TDC", ::TVME_CATCH_TDC::Class_Version(), "TVME_CATCH_TDC.h", 30,
                  typeid(::TVME_CATCH_TDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_CATCH_TDC::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_CATCH_TDC) );
      instance.SetDelete(&delete_TVME_CATCH_TDC);
      instance.SetDeleteArray(&deleteArray_TVME_CATCH_TDC);
      instance.SetDestructor(&destruct_TVME_CATCH_TDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_CATCH_TDC*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_CATCH_TDC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_CATCH_TDC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_CBD8210(void *p);
   static void deleteArray_TVME_CBD8210(void *p);
   static void destruct_TVME_CBD8210(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_CBD8210*)
   {
      ::TVME_CBD8210 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_CBD8210 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_CBD8210", ::TVME_CBD8210::Class_Version(), "TVME_CBD8210.h", 20,
                  typeid(::TVME_CBD8210), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_CBD8210::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_CBD8210) );
      instance.SetDelete(&delete_TVME_CBD8210);
      instance.SetDeleteArray(&deleteArray_TVME_CBD8210);
      instance.SetDestructor(&destruct_TVME_CBD8210);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_CBD8210*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_CBD8210*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_CBD8210*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_GeSiCA(void *p);
   static void deleteArray_TVME_GeSiCA(void *p);
   static void destruct_TVME_GeSiCA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_GeSiCA*)
   {
      ::TVME_GeSiCA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_GeSiCA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_GeSiCA", ::TVME_GeSiCA::Class_Version(), "TVME_GeSiCA.h", 67,
                  typeid(::TVME_GeSiCA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_GeSiCA::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_GeSiCA) );
      instance.SetDelete(&delete_TVME_GeSiCA);
      instance.SetDeleteArray(&deleteArray_TVME_GeSiCA);
      instance.SetDestructor(&destruct_TVME_GeSiCA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_GeSiCA*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_GeSiCA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_GeSiCA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_SIS3820(void *p);
   static void deleteArray_TVME_SIS3820(void *p);
   static void destruct_TVME_SIS3820(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_SIS3820*)
   {
      ::TVME_SIS3820 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_SIS3820 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_SIS3820", ::TVME_SIS3820::Class_Version(), "TVME_SIS3820.h", 33,
                  typeid(::TVME_SIS3820), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_SIS3820::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_SIS3820) );
      instance.SetDelete(&delete_TVME_SIS3820);
      instance.SetDeleteArray(&deleteArray_TVME_SIS3820);
      instance.SetDestructor(&destruct_TVME_SIS3820);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_SIS3820*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_SIS3820*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_SIS3820*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_V1190(void *p);
   static void deleteArray_TVME_V1190(void *p);
   static void destruct_TVME_V1190(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_V1190*)
   {
      ::TVME_V1190 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_V1190 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_V1190", ::TVME_V1190::Class_Version(), "TVME_V1190.h", 131,
                  typeid(::TVME_V1190), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_V1190::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_V1190) );
      instance.SetDelete(&delete_TVME_V1190);
      instance.SetDeleteArray(&deleteArray_TVME_V1190);
      instance.SetDestructor(&destruct_TVME_V1190);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_V1190*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_V1190*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_V1190*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_V1290(void *p);
   static void deleteArray_TVME_V1290(void *p);
   static void destruct_TVME_V1290(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_V1290*)
   {
      ::TVME_V1290 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_V1290 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_V1290", ::TVME_V1290::Class_Version(), "TVME_V1290.h", 25,
                  typeid(::TVME_V1290), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_V1290::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_V1290) );
      instance.SetDelete(&delete_TVME_V1290);
      instance.SetDeleteArray(&deleteArray_TVME_V1290);
      instance.SetDestructor(&destruct_TVME_V1290);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_V1290*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_V1290*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_V1290*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_V792(void *p);
   static void deleteArray_TVME_V792(void *p);
   static void destruct_TVME_V792(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_V792*)
   {
      ::TVME_V792 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_V792 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_V792", ::TVME_V792::Class_Version(), "TVME_V792.h", 53,
                  typeid(::TVME_V792), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_V792::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_V792) );
      instance.SetDelete(&delete_TVME_V792);
      instance.SetDeleteArray(&deleteArray_TVME_V792);
      instance.SetDestructor(&destruct_TVME_V792);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_V792*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_V792*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_V792*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_V775(void *p);
   static void deleteArray_TVME_V775(void *p);
   static void destruct_TVME_V775(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_V775*)
   {
      ::TVME_V775 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_V775 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_V775", ::TVME_V775::Class_Version(), "TVME_V775.h", 17,
                  typeid(::TVME_V775), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_V775::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_V775) );
      instance.SetDelete(&delete_TVME_V775);
      instance.SetDeleteArray(&deleteArray_TVME_V775);
      instance.SetDestructor(&destruct_TVME_V775);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_V775*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_V775*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_V775*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_V785(void *p);
   static void deleteArray_TVME_V785(void *p);
   static void destruct_TVME_V785(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_V785*)
   {
      ::TVME_V785 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_V785 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_V785", ::TVME_V785::Class_Version(), "TVME_V785.h", 18,
                  typeid(::TVME_V785), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_V785::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_V785) );
      instance.SetDelete(&delete_TVME_V785);
      instance.SetDeleteArray(&deleteArray_TVME_V785);
      instance.SetDestructor(&destruct_TVME_V785);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_V785*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_V785*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_V785*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_V874(void *p);
   static void deleteArray_TVME_V874(void *p);
   static void destruct_TVME_V874(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_V874*)
   {
      ::TVME_V874 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_V874 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_V874", ::TVME_V874::Class_Version(), "TVME_V874.h", 61,
                  typeid(::TVME_V874), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_V874::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_V874) );
      instance.SetDelete(&delete_TVME_V874);
      instance.SetDeleteArray(&deleteArray_TVME_V874);
      instance.SetDestructor(&destruct_TVME_V874);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_V874*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_V874*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_V874*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_V965(void *p);
   static void deleteArray_TVME_V965(void *p);
   static void destruct_TVME_V965(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_V965*)
   {
      ::TVME_V965 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_V965 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_V965", ::TVME_V965::Class_Version(), "TVME_V965.h", 18,
                  typeid(::TVME_V965), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_V965::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_V965) );
      instance.SetDelete(&delete_TVME_V965);
      instance.SetDeleteArray(&deleteArray_TVME_V965);
      instance.SetDestructor(&destruct_TVME_V965);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_V965*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_V965*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_V965*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_VITEC(void *p);
   static void deleteArray_TVME_VITEC(void *p);
   static void destruct_TVME_VITEC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_VITEC*)
   {
      ::TVME_VITEC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_VITEC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_VITEC", ::TVME_VITEC::Class_Version(), "TVME_VITEC.h", 33,
                  typeid(::TVME_VITEC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_VITEC::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_VITEC) );
      instance.SetDelete(&delete_TVME_VITEC);
      instance.SetDeleteArray(&deleteArray_TVME_VITEC);
      instance.SetDestructor(&destruct_TVME_VITEC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_VITEC*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_VITEC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_VITEC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_VUPROM(void *p);
   static void deleteArray_TVME_VUPROM(void *p);
   static void destruct_TVME_VUPROM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_VUPROM*)
   {
      ::TVME_VUPROM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_VUPROM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_VUPROM", ::TVME_VUPROM::Class_Version(), "TVME_VUPROM.h", 96,
                  typeid(::TVME_VUPROM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_VUPROM::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_VUPROM) );
      instance.SetDelete(&delete_TVME_VUPROM);
      instance.SetDeleteArray(&deleteArray_TVME_VUPROM);
      instance.SetDestructor(&destruct_TVME_VUPROM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_VUPROM*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_VUPROM*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_VUPROM*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_VUPROMT(void *p);
   static void deleteArray_TVME_VUPROMT(void *p);
   static void destruct_TVME_VUPROMT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_VUPROMT*)
   {
      ::TVME_VUPROMT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_VUPROMT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_VUPROMT", ::TVME_VUPROMT::Class_Version(), "TVME_VUPROMT.h", 82,
                  typeid(::TVME_VUPROMT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_VUPROMT::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_VUPROMT) );
      instance.SetDelete(&delete_TVME_VUPROMT);
      instance.SetDeleteArray(&deleteArray_TVME_VUPROMT);
      instance.SetDestructor(&destruct_TVME_VUPROMT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_VUPROMT*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_VUPROMT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_VUPROMT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_VUPROM_Moeller(void *p);
   static void deleteArray_TVME_VUPROM_Moeller(void *p);
   static void destruct_TVME_VUPROM_Moeller(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_VUPROM_Moeller*)
   {
      ::TVME_VUPROM_Moeller *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_VUPROM_Moeller >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_VUPROM_Moeller", ::TVME_VUPROM_Moeller::Class_Version(), "TVME_VUPROM_Moeller.h", 45,
                  typeid(::TVME_VUPROM_Moeller), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_VUPROM_Moeller::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_VUPROM_Moeller) );
      instance.SetDelete(&delete_TVME_VUPROM_Moeller);
      instance.SetDeleteArray(&deleteArray_TVME_VUPROM_Moeller);
      instance.SetDestructor(&destruct_TVME_VUPROM_Moeller);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_VUPROM_Moeller*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_VUPROM_Moeller*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_VUPROM_Moeller*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_VUPROM_Pattern(void *p);
   static void deleteArray_TVME_VUPROM_Pattern(void *p);
   static void destruct_TVME_VUPROM_Pattern(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_VUPROM_Pattern*)
   {
      ::TVME_VUPROM_Pattern *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_VUPROM_Pattern >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_VUPROM_Pattern", ::TVME_VUPROM_Pattern::Class_Version(), "TVME_VUPROM_Pattern.h", 19,
                  typeid(::TVME_VUPROM_Pattern), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_VUPROM_Pattern::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_VUPROM_Pattern) );
      instance.SetDelete(&delete_TVME_VUPROM_Pattern);
      instance.SetDeleteArray(&deleteArray_TVME_VUPROM_Pattern);
      instance.SetDestructor(&destruct_TVME_VUPROM_Pattern);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_VUPROM_Pattern*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_VUPROM_Pattern*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_VUPROM_Pattern*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVME_VUPROM_Scaler(void *p);
   static void deleteArray_TVME_VUPROM_Scaler(void *p);
   static void destruct_TVME_VUPROM_Scaler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVME_VUPROM_Scaler*)
   {
      ::TVME_VUPROM_Scaler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVME_VUPROM_Scaler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVME_VUPROM_Scaler", ::TVME_VUPROM_Scaler::Class_Version(), "TVME_VUPROM_Scaler.h", 19,
                  typeid(::TVME_VUPROM_Scaler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVME_VUPROM_Scaler::Dictionary, isa_proxy, 4,
                  sizeof(::TVME_VUPROM_Scaler) );
      instance.SetDelete(&delete_TVME_VUPROM_Scaler);
      instance.SetDeleteArray(&deleteArray_TVME_VUPROM_Scaler);
      instance.SetDestructor(&destruct_TVME_VUPROM_Scaler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVME_VUPROM_Scaler*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVME_VUPROM_Scaler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVME_VUPROM_Scaler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualModule(void *p);
   static void deleteArray_TVirtualModule(void *p);
   static void destruct_TVirtualModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualModule*)
   {
      ::TVirtualModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualModule", ::TVirtualModule::Class_Version(), "TVirtualModule.h", 21,
                  typeid(::TVirtualModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualModule::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualModule) );
      instance.SetDelete(&delete_TVirtualModule);
      instance.SetDeleteArray(&deleteArray_TVirtualModule);
      instance.SetDestructor(&destruct_TVirtualModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr DAQMemMap_t::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DAQMemMap_t::Class_Name()
{
   return "DAQMemMap_t";
}

//______________________________________________________________________________
const char *DAQMemMap_t::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAQMemMap_t*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DAQMemMap_t::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAQMemMap_t*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DAQMemMap_t::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAQMemMap_t*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DAQMemMap_t::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAQMemMap_t*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQcontrol::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQcontrol::Class_Name()
{
   return "TDAQcontrol";
}

//______________________________________________________________________________
const char *TDAQcontrol::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQcontrol*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQcontrol::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQcontrol*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQcontrol::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQcontrol*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQcontrol::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQcontrol*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQsupervise::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQsupervise::Class_Name()
{
   return "TDAQsupervise";
}

//______________________________________________________________________________
const char *TDAQsupervise::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQsupervise*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQsupervise::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQsupervise*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQsupervise::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQsupervise*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQsupervise::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQsupervise*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGUIsupervise::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGUIsupervise::Class_Name()
{
   return "TGUIsupervise";
}

//______________________________________________________________________________
const char *TGUIsupervise::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGUIsupervise*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGUIsupervise::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGUIsupervise*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGUIsupervise::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGUIsupervise*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGUIsupervise::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGUIsupervise*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQstore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQstore::Class_Name()
{
   return "TDAQstore";
}

//______________________________________________________________________________
const char *TDAQstore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQstore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQstore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQstore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQstore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQstore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQstore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQstore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQexperiment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQexperiment::Class_Name()
{
   return "TDAQexperiment";
}

//______________________________________________________________________________
const char *TDAQexperiment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQexperiment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQexperiment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQexperiment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQexperiment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQexperiment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQexperiment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQexperiment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQmodule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQmodule::Class_Name()
{
   return "TDAQmodule";
}

//______________________________________________________________________________
const char *TDAQmodule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQmodule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQmodule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQmodule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQmodule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQmodule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQmodule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQmodule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCAMACmodule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCAMACmodule::Class_Name()
{
   return "TCAMACmodule";
}

//______________________________________________________________________________
const char *TCAMACmodule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMACmodule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCAMACmodule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMACmodule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCAMACmodule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMACmodule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCAMACmodule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMACmodule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCAMAC_2323::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCAMAC_2323::Class_Name()
{
   return "TCAMAC_2323";
}

//______________________________________________________________________________
const char *TCAMAC_2323::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_2323*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCAMAC_2323::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_2323*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCAMAC_2323::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_2323*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCAMAC_2323::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_2323*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCAMAC_2373::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCAMAC_2373::Class_Name()
{
   return "TCAMAC_2373";
}

//______________________________________________________________________________
const char *TCAMAC_2373::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_2373*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCAMAC_2373::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_2373*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCAMAC_2373::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_2373*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCAMAC_2373::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_2373*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCAMAC_4413SPILL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCAMAC_4413SPILL::Class_Name()
{
   return "TCAMAC_4413SPILL";
}

//______________________________________________________________________________
const char *TCAMAC_4413SPILL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4413SPILL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCAMAC_4413SPILL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4413SPILL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCAMAC_4413SPILL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4413SPILL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCAMAC_4413SPILL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4413SPILL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCAMAC_4413DAQEnable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCAMAC_4413DAQEnable::Class_Name()
{
   return "TCAMAC_4413DAQEnable";
}

//______________________________________________________________________________
const char *TCAMAC_4413DAQEnable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4413DAQEnable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCAMAC_4413DAQEnable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4413DAQEnable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCAMAC_4413DAQEnable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4413DAQEnable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCAMAC_4413DAQEnable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4413DAQEnable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCAMAC_4508::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCAMAC_4508::Class_Name()
{
   return "TCAMAC_4508";
}

//______________________________________________________________________________
const char *TCAMAC_4508::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4508*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCAMAC_4508::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4508*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCAMAC_4508::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4508*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCAMAC_4508::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_4508*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCAMAC_GSI4800::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCAMAC_GSI4800::Class_Name()
{
   return "TCAMAC_GSI4800";
}

//______________________________________________________________________________
const char *TCAMAC_GSI4800::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_GSI4800*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCAMAC_GSI4800::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_GSI4800*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCAMAC_GSI4800::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_GSI4800*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCAMAC_GSI4800::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCAMAC_GSI4800*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQ_KPhI686::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQ_KPhI686::Class_Name()
{
   return "TDAQ_KPhI686";
}

//______________________________________________________________________________
const char *TDAQ_KPhI686::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_KPhI686*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQ_KPhI686::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_KPhI686*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQ_KPhI686::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_KPhI686*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQ_KPhI686::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_KPhI686*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQ_SIS1100::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQ_SIS1100::Class_Name()
{
   return "TDAQ_SIS1100";
}

//______________________________________________________________________________
const char *TDAQ_SIS1100::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_SIS1100*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQ_SIS1100::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_SIS1100*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQ_SIS1100::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_SIS1100*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQ_SIS1100::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_SIS1100*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQ_SY1527::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQ_SY1527::Class_Name()
{
   return "TDAQ_SY1527";
}

//______________________________________________________________________________
const char *TDAQ_SY1527::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_SY1527*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQ_SY1527::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_SY1527*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQ_SY1527::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_SY1527*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQ_SY1527::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_SY1527*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQ_V2718::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQ_V2718::Class_Name()
{
   return "TDAQ_V2718";
}

//______________________________________________________________________________
const char *TDAQ_V2718::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_V2718*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQ_V2718::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_V2718*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQ_V2718::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_V2718*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQ_V2718::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_V2718*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQ_VPE2xX86_64::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQ_VPE2xX86_64::Class_Name()
{
   return "TDAQ_VPE2xX86_64";
}

//______________________________________________________________________________
const char *TDAQ_VPE2xX86_64::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_VPE2xX86_64*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQ_VPE2xX86_64::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_VPE2xX86_64*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQ_VPE2xX86_64::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_VPE2xX86_64*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQ_VPE2xX86_64::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_VPE2xX86_64*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQ_VPE2xX86_64A::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQ_VPE2xX86_64A::Class_Name()
{
   return "TDAQ_VPE2xX86_64A";
}

//______________________________________________________________________________
const char *TDAQ_VPE2xX86_64A::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_VPE2xX86_64A*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQ_VPE2xX86_64A::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_VPE2xX86_64A*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQ_VPE2xX86_64A::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_VPE2xX86_64A*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQ_VPE2xX86_64A::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQ_VPE2xX86_64A*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDAQguiCtrl::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDAQguiCtrl::Class_Name()
{
   return "TDAQguiCtrl";
}

//______________________________________________________________________________
const char *TDAQguiCtrl::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQguiCtrl*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDAQguiCtrl::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDAQguiCtrl*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDAQguiCtrl::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQguiCtrl*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDAQguiCtrl::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDAQguiCtrl*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEPICSmodule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEPICSmodule::Class_Name()
{
   return "TEPICSmodule";
}

//______________________________________________________________________________
const char *TEPICSmodule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEPICSmodule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEPICSmodule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEPICSmodule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEPICSmodule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEPICSmodule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEPICSmodule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEPICSmodule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVMEmodule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVMEmodule::Class_Name()
{
   return "TVMEmodule";
}

//______________________________________________________________________________
const char *TVMEmodule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVMEmodule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVMEmodule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVMEmodule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVMEmodule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVMEmodule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVMEmodule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVMEmodule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFBmodule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFBmodule::Class_Name()
{
   return "TFBmodule";
}

//______________________________________________________________________________
const char *TFBmodule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFBmodule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFBmodule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFBmodule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFBmodule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFBmodule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFBmodule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFBmodule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_KPhSMI::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_KPhSMI::Class_Name()
{
   return "TVME_KPhSMI";
}

//______________________________________________________________________________
const char *TVME_KPhSMI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_KPhSMI*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_KPhSMI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_KPhSMI*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_KPhSMI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_KPhSMI*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_KPhSMI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_KPhSMI*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFB_1821SMI::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFB_1821SMI::Class_Name()
{
   return "TFB_1821SMI";
}

//______________________________________________________________________________
const char *TFB_1821SMI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFB_1821SMI*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFB_1821SMI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFB_1821SMI*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFB_1821SMI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFB_1821SMI*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFB_1821SMI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFB_1821SMI*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFB_LRS1800::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFB_LRS1800::Class_Name()
{
   return "TFB_LRS1800";
}

//______________________________________________________________________________
const char *TFB_LRS1800::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFB_LRS1800*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFB_LRS1800::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFB_LRS1800*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFB_LRS1800::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFB_LRS1800*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFB_LRS1800::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFB_LRS1800*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFB_Phil10C::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFB_Phil10C::Class_Name()
{
   return "TFB_Phil10C";
}

//______________________________________________________________________________
const char *TFB_Phil10C::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFB_Phil10C*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFB_Phil10C::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFB_Phil10C*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFB_Phil10C::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFB_Phil10C*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFB_Phil10C::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFB_Phil10C*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFB_STR200::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFB_STR200::Class_Name()
{
   return "TFB_STR200";
}

//______________________________________________________________________________
const char *TFB_STR200::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFB_STR200*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFB_STR200::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFB_STR200*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFB_STR200::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFB_STR200*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFB_STR200::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFB_STR200*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_CATCH::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_CATCH::Class_Name()
{
   return "TVME_CATCH";
}

//______________________________________________________________________________
const char *TVME_CATCH::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_CATCH::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_CATCH::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_CATCH::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_CATCH_Scaler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_CATCH_Scaler::Class_Name()
{
   return "TVME_CATCH_Scaler";
}

//______________________________________________________________________________
const char *TVME_CATCH_Scaler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_Scaler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_CATCH_Scaler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_Scaler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_CATCH_Scaler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_Scaler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_CATCH_Scaler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_Scaler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_CATCH_TCS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_CATCH_TCS::Class_Name()
{
   return "TVME_CATCH_TCS";
}

//______________________________________________________________________________
const char *TVME_CATCH_TCS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_TCS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_CATCH_TCS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_TCS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_CATCH_TCS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_TCS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_CATCH_TCS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_TCS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_CATCH_TDC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_CATCH_TDC::Class_Name()
{
   return "TVME_CATCH_TDC";
}

//______________________________________________________________________________
const char *TVME_CATCH_TDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_TDC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_CATCH_TDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_TDC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_CATCH_TDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_TDC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_CATCH_TDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CATCH_TDC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_CBD8210::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_CBD8210::Class_Name()
{
   return "TVME_CBD8210";
}

//______________________________________________________________________________
const char *TVME_CBD8210::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CBD8210*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_CBD8210::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_CBD8210*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_CBD8210::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CBD8210*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_CBD8210::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_CBD8210*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_GeSiCA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_GeSiCA::Class_Name()
{
   return "TVME_GeSiCA";
}

//______________________________________________________________________________
const char *TVME_GeSiCA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_GeSiCA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_GeSiCA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_GeSiCA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_GeSiCA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_GeSiCA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_GeSiCA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_GeSiCA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_SIS3820::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_SIS3820::Class_Name()
{
   return "TVME_SIS3820";
}

//______________________________________________________________________________
const char *TVME_SIS3820::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_SIS3820*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_SIS3820::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_SIS3820*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_SIS3820::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_SIS3820*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_SIS3820::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_SIS3820*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_V1190::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_V1190::Class_Name()
{
   return "TVME_V1190";
}

//______________________________________________________________________________
const char *TVME_V1190::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V1190*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_V1190::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V1190*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_V1190::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V1190*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_V1190::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V1190*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_V1290::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_V1290::Class_Name()
{
   return "TVME_V1290";
}

//______________________________________________________________________________
const char *TVME_V1290::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V1290*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_V1290::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V1290*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_V1290::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V1290*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_V1290::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V1290*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_V792::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_V792::Class_Name()
{
   return "TVME_V792";
}

//______________________________________________________________________________
const char *TVME_V792::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V792*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_V792::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V792*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_V792::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V792*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_V792::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V792*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_V775::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_V775::Class_Name()
{
   return "TVME_V775";
}

//______________________________________________________________________________
const char *TVME_V775::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V775*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_V775::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V775*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_V775::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V775*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_V775::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V775*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_V785::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_V785::Class_Name()
{
   return "TVME_V785";
}

//______________________________________________________________________________
const char *TVME_V785::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V785*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_V785::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V785*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_V785::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V785*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_V785::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V785*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_V874::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_V874::Class_Name()
{
   return "TVME_V874";
}

//______________________________________________________________________________
const char *TVME_V874::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V874*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_V874::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V874*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_V874::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V874*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_V874::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V874*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_V965::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_V965::Class_Name()
{
   return "TVME_V965";
}

//______________________________________________________________________________
const char *TVME_V965::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V965*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_V965::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_V965*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_V965::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V965*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_V965::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_V965*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_VITEC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_VITEC::Class_Name()
{
   return "TVME_VITEC";
}

//______________________________________________________________________________
const char *TVME_VITEC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VITEC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_VITEC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VITEC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_VITEC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VITEC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_VITEC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VITEC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_VUPROM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_VUPROM::Class_Name()
{
   return "TVME_VUPROM";
}

//______________________________________________________________________________
const char *TVME_VUPROM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_VUPROM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_VUPROM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_VUPROM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_VUPROMT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_VUPROMT::Class_Name()
{
   return "TVME_VUPROMT";
}

//______________________________________________________________________________
const char *TVME_VUPROMT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROMT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_VUPROMT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROMT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_VUPROMT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROMT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_VUPROMT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROMT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_VUPROM_Moeller::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_VUPROM_Moeller::Class_Name()
{
   return "TVME_VUPROM_Moeller";
}

//______________________________________________________________________________
const char *TVME_VUPROM_Moeller::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Moeller*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_VUPROM_Moeller::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Moeller*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_VUPROM_Moeller::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Moeller*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_VUPROM_Moeller::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Moeller*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_VUPROM_Pattern::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_VUPROM_Pattern::Class_Name()
{
   return "TVME_VUPROM_Pattern";
}

//______________________________________________________________________________
const char *TVME_VUPROM_Pattern::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Pattern*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_VUPROM_Pattern::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Pattern*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_VUPROM_Pattern::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Pattern*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_VUPROM_Pattern::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Pattern*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVME_VUPROM_Scaler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVME_VUPROM_Scaler::Class_Name()
{
   return "TVME_VUPROM_Scaler";
}

//______________________________________________________________________________
const char *TVME_VUPROM_Scaler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Scaler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVME_VUPROM_Scaler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Scaler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVME_VUPROM_Scaler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Scaler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVME_VUPROM_Scaler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVME_VUPROM_Scaler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualModule::Class_Name()
{
   return "TVirtualModule";
}

//______________________________________________________________________________
const char *TVirtualModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void DAQMemMap_t::Streamer(TBuffer &R__b)
{
   // Stream an object of class DAQMemMap_t.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DAQMemMap_t::Class(),this);
   } else {
      R__b.WriteClassBuffer(DAQMemMap_t::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_DAQMemMap_t(void *p) {
      delete (static_cast<::DAQMemMap_t*>(p));
   }
   static void deleteArray_DAQMemMap_t(void *p) {
      delete [] (static_cast<::DAQMemMap_t*>(p));
   }
   static void destruct_DAQMemMap_t(void *p) {
      typedef ::DAQMemMap_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DAQMemMap_t

//______________________________________________________________________________
void TDAQcontrol::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQcontrol.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQcontrol::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQcontrol::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQcontrol(void *p) {
      delete (static_cast<::TDAQcontrol*>(p));
   }
   static void deleteArray_TDAQcontrol(void *p) {
      delete [] (static_cast<::TDAQcontrol*>(p));
   }
   static void destruct_TDAQcontrol(void *p) {
      typedef ::TDAQcontrol current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQcontrol

//______________________________________________________________________________
void TDAQsupervise::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQsupervise.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQsupervise::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQsupervise::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQsupervise(void *p) {
      delete (static_cast<::TDAQsupervise*>(p));
   }
   static void deleteArray_TDAQsupervise(void *p) {
      delete [] (static_cast<::TDAQsupervise*>(p));
   }
   static void destruct_TDAQsupervise(void *p) {
      typedef ::TDAQsupervise current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQsupervise

//______________________________________________________________________________
void TGUIsupervise::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGUIsupervise.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGUIsupervise::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGUIsupervise::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGUIsupervise(void *p) {
      delete (static_cast<::TGUIsupervise*>(p));
   }
   static void deleteArray_TGUIsupervise(void *p) {
      delete [] (static_cast<::TGUIsupervise*>(p));
   }
   static void destruct_TGUIsupervise(void *p) {
      typedef ::TGUIsupervise current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGUIsupervise

//______________________________________________________________________________
void TDAQstore::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQstore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQstore::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQstore::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQstore(void *p) {
      delete (static_cast<::TDAQstore*>(p));
   }
   static void deleteArray_TDAQstore(void *p) {
      delete [] (static_cast<::TDAQstore*>(p));
   }
   static void destruct_TDAQstore(void *p) {
      typedef ::TDAQstore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQstore

//______________________________________________________________________________
void TDAQexperiment::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQexperiment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQexperiment::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQexperiment::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQexperiment(void *p) {
      delete (static_cast<::TDAQexperiment*>(p));
   }
   static void deleteArray_TDAQexperiment(void *p) {
      delete [] (static_cast<::TDAQexperiment*>(p));
   }
   static void destruct_TDAQexperiment(void *p) {
      typedef ::TDAQexperiment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQexperiment

//______________________________________________________________________________
void TDAQmodule::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQmodule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQmodule::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQmodule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQmodule(void *p) {
      delete (static_cast<::TDAQmodule*>(p));
   }
   static void deleteArray_TDAQmodule(void *p) {
      delete [] (static_cast<::TDAQmodule*>(p));
   }
   static void destruct_TDAQmodule(void *p) {
      typedef ::TDAQmodule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQmodule

//______________________________________________________________________________
void TCAMACmodule::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCAMACmodule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCAMACmodule::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCAMACmodule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCAMACmodule(void *p) {
      delete (static_cast<::TCAMACmodule*>(p));
   }
   static void deleteArray_TCAMACmodule(void *p) {
      delete [] (static_cast<::TCAMACmodule*>(p));
   }
   static void destruct_TCAMACmodule(void *p) {
      typedef ::TCAMACmodule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCAMACmodule

//______________________________________________________________________________
void TCAMAC_2323::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCAMAC_2323.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCAMAC_2323::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCAMAC_2323::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCAMAC_2323(void *p) {
      delete (static_cast<::TCAMAC_2323*>(p));
   }
   static void deleteArray_TCAMAC_2323(void *p) {
      delete [] (static_cast<::TCAMAC_2323*>(p));
   }
   static void destruct_TCAMAC_2323(void *p) {
      typedef ::TCAMAC_2323 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCAMAC_2323

//______________________________________________________________________________
void TCAMAC_2373::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCAMAC_2373.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCAMAC_2373::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCAMAC_2373::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCAMAC_2373(void *p) {
      delete (static_cast<::TCAMAC_2373*>(p));
   }
   static void deleteArray_TCAMAC_2373(void *p) {
      delete [] (static_cast<::TCAMAC_2373*>(p));
   }
   static void destruct_TCAMAC_2373(void *p) {
      typedef ::TCAMAC_2373 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCAMAC_2373

//______________________________________________________________________________
void TCAMAC_4413SPILL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCAMAC_4413SPILL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCAMAC_4413SPILL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCAMAC_4413SPILL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCAMAC_4413SPILL(void *p) {
      delete (static_cast<::TCAMAC_4413SPILL*>(p));
   }
   static void deleteArray_TCAMAC_4413SPILL(void *p) {
      delete [] (static_cast<::TCAMAC_4413SPILL*>(p));
   }
   static void destruct_TCAMAC_4413SPILL(void *p) {
      typedef ::TCAMAC_4413SPILL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCAMAC_4413SPILL

//______________________________________________________________________________
void TCAMAC_4413DAQEnable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCAMAC_4413DAQEnable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCAMAC_4413DAQEnable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCAMAC_4413DAQEnable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCAMAC_4413DAQEnable(void *p) {
      delete (static_cast<::TCAMAC_4413DAQEnable*>(p));
   }
   static void deleteArray_TCAMAC_4413DAQEnable(void *p) {
      delete [] (static_cast<::TCAMAC_4413DAQEnable*>(p));
   }
   static void destruct_TCAMAC_4413DAQEnable(void *p) {
      typedef ::TCAMAC_4413DAQEnable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCAMAC_4413DAQEnable

//______________________________________________________________________________
void TCAMAC_4508::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCAMAC_4508.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCAMAC_4508::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCAMAC_4508::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCAMAC_4508(void *p) {
      delete (static_cast<::TCAMAC_4508*>(p));
   }
   static void deleteArray_TCAMAC_4508(void *p) {
      delete [] (static_cast<::TCAMAC_4508*>(p));
   }
   static void destruct_TCAMAC_4508(void *p) {
      typedef ::TCAMAC_4508 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCAMAC_4508

//______________________________________________________________________________
void TCAMAC_GSI4800::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCAMAC_GSI4800.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCAMAC_GSI4800::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCAMAC_GSI4800::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCAMAC_GSI4800(void *p) {
      delete (static_cast<::TCAMAC_GSI4800*>(p));
   }
   static void deleteArray_TCAMAC_GSI4800(void *p) {
      delete [] (static_cast<::TCAMAC_GSI4800*>(p));
   }
   static void destruct_TCAMAC_GSI4800(void *p) {
      typedef ::TCAMAC_GSI4800 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCAMAC_GSI4800

//______________________________________________________________________________
void TDAQ_KPhI686::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQ_KPhI686.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQ_KPhI686::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQ_KPhI686::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQ_KPhI686(void *p) {
      delete (static_cast<::TDAQ_KPhI686*>(p));
   }
   static void deleteArray_TDAQ_KPhI686(void *p) {
      delete [] (static_cast<::TDAQ_KPhI686*>(p));
   }
   static void destruct_TDAQ_KPhI686(void *p) {
      typedef ::TDAQ_KPhI686 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQ_KPhI686

//______________________________________________________________________________
void TDAQ_SIS1100::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQ_SIS1100.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQ_SIS1100::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQ_SIS1100::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQ_SIS1100(void *p) {
      delete (static_cast<::TDAQ_SIS1100*>(p));
   }
   static void deleteArray_TDAQ_SIS1100(void *p) {
      delete [] (static_cast<::TDAQ_SIS1100*>(p));
   }
   static void destruct_TDAQ_SIS1100(void *p) {
      typedef ::TDAQ_SIS1100 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQ_SIS1100

//______________________________________________________________________________
void TDAQ_SY1527::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQ_SY1527.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQ_SY1527::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQ_SY1527::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQ_SY1527(void *p) {
      delete (static_cast<::TDAQ_SY1527*>(p));
   }
   static void deleteArray_TDAQ_SY1527(void *p) {
      delete [] (static_cast<::TDAQ_SY1527*>(p));
   }
   static void destruct_TDAQ_SY1527(void *p) {
      typedef ::TDAQ_SY1527 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQ_SY1527

//______________________________________________________________________________
void TDAQ_V2718::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQ_V2718.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQ_V2718::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQ_V2718::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQ_V2718(void *p) {
      delete (static_cast<::TDAQ_V2718*>(p));
   }
   static void deleteArray_TDAQ_V2718(void *p) {
      delete [] (static_cast<::TDAQ_V2718*>(p));
   }
   static void destruct_TDAQ_V2718(void *p) {
      typedef ::TDAQ_V2718 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQ_V2718

//______________________________________________________________________________
void TDAQ_VPE2xX86_64::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQ_VPE2xX86_64.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQ_VPE2xX86_64::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQ_VPE2xX86_64::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQ_VPE2xX86_64(void *p) {
      delete (static_cast<::TDAQ_VPE2xX86_64*>(p));
   }
   static void deleteArray_TDAQ_VPE2xX86_64(void *p) {
      delete [] (static_cast<::TDAQ_VPE2xX86_64*>(p));
   }
   static void destruct_TDAQ_VPE2xX86_64(void *p) {
      typedef ::TDAQ_VPE2xX86_64 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQ_VPE2xX86_64

//______________________________________________________________________________
void TDAQ_VPE2xX86_64A::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQ_VPE2xX86_64A.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQ_VPE2xX86_64A::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQ_VPE2xX86_64A::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQ_VPE2xX86_64A(void *p) {
      delete (static_cast<::TDAQ_VPE2xX86_64A*>(p));
   }
   static void deleteArray_TDAQ_VPE2xX86_64A(void *p) {
      delete [] (static_cast<::TDAQ_VPE2xX86_64A*>(p));
   }
   static void destruct_TDAQ_VPE2xX86_64A(void *p) {
      typedef ::TDAQ_VPE2xX86_64A current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQ_VPE2xX86_64A

//______________________________________________________________________________
void TDAQguiCtrl::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDAQguiCtrl.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDAQguiCtrl::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDAQguiCtrl::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDAQguiCtrl(void *p) {
      delete (static_cast<::TDAQguiCtrl*>(p));
   }
   static void deleteArray_TDAQguiCtrl(void *p) {
      delete [] (static_cast<::TDAQguiCtrl*>(p));
   }
   static void destruct_TDAQguiCtrl(void *p) {
      typedef ::TDAQguiCtrl current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDAQguiCtrl

//______________________________________________________________________________
void TEPICSmodule::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEPICSmodule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEPICSmodule::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEPICSmodule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEPICSmodule(void *p) {
      return  p ? new(p) ::TEPICSmodule : new ::TEPICSmodule;
   }
   static void *newArray_TEPICSmodule(Long_t nElements, void *p) {
      return p ? new(p) ::TEPICSmodule[nElements] : new ::TEPICSmodule[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEPICSmodule(void *p) {
      delete (static_cast<::TEPICSmodule*>(p));
   }
   static void deleteArray_TEPICSmodule(void *p) {
      delete [] (static_cast<::TEPICSmodule*>(p));
   }
   static void destruct_TEPICSmodule(void *p) {
      typedef ::TEPICSmodule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEPICSmodule

//______________________________________________________________________________
void TVMEmodule::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVMEmodule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVMEmodule::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVMEmodule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVMEmodule(void *p) {
      delete (static_cast<::TVMEmodule*>(p));
   }
   static void deleteArray_TVMEmodule(void *p) {
      delete [] (static_cast<::TVMEmodule*>(p));
   }
   static void destruct_TVMEmodule(void *p) {
      typedef ::TVMEmodule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVMEmodule

//______________________________________________________________________________
void TFBmodule::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFBmodule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFBmodule::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFBmodule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFBmodule(void *p) {
      delete (static_cast<::TFBmodule*>(p));
   }
   static void deleteArray_TFBmodule(void *p) {
      delete [] (static_cast<::TFBmodule*>(p));
   }
   static void destruct_TFBmodule(void *p) {
      typedef ::TFBmodule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFBmodule

//______________________________________________________________________________
void TVME_KPhSMI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_KPhSMI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_KPhSMI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_KPhSMI::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_KPhSMI(void *p) {
      delete (static_cast<::TVME_KPhSMI*>(p));
   }
   static void deleteArray_TVME_KPhSMI(void *p) {
      delete [] (static_cast<::TVME_KPhSMI*>(p));
   }
   static void destruct_TVME_KPhSMI(void *p) {
      typedef ::TVME_KPhSMI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_KPhSMI

//______________________________________________________________________________
void TFB_1821SMI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFB_1821SMI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFB_1821SMI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFB_1821SMI::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFB_1821SMI(void *p) {
      delete (static_cast<::TFB_1821SMI*>(p));
   }
   static void deleteArray_TFB_1821SMI(void *p) {
      delete [] (static_cast<::TFB_1821SMI*>(p));
   }
   static void destruct_TFB_1821SMI(void *p) {
      typedef ::TFB_1821SMI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFB_1821SMI

//______________________________________________________________________________
void TFB_LRS1800::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFB_LRS1800.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFB_LRS1800::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFB_LRS1800::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFB_LRS1800(void *p) {
      delete (static_cast<::TFB_LRS1800*>(p));
   }
   static void deleteArray_TFB_LRS1800(void *p) {
      delete [] (static_cast<::TFB_LRS1800*>(p));
   }
   static void destruct_TFB_LRS1800(void *p) {
      typedef ::TFB_LRS1800 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFB_LRS1800

//______________________________________________________________________________
void TFB_Phil10C::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFB_Phil10C.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFB_Phil10C::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFB_Phil10C::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFB_Phil10C(void *p) {
      delete (static_cast<::TFB_Phil10C*>(p));
   }
   static void deleteArray_TFB_Phil10C(void *p) {
      delete [] (static_cast<::TFB_Phil10C*>(p));
   }
   static void destruct_TFB_Phil10C(void *p) {
      typedef ::TFB_Phil10C current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFB_Phil10C

//______________________________________________________________________________
void TFB_STR200::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFB_STR200.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFB_STR200::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFB_STR200::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFB_STR200(void *p) {
      delete (static_cast<::TFB_STR200*>(p));
   }
   static void deleteArray_TFB_STR200(void *p) {
      delete [] (static_cast<::TFB_STR200*>(p));
   }
   static void destruct_TFB_STR200(void *p) {
      typedef ::TFB_STR200 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFB_STR200

//______________________________________________________________________________
void TVME_CATCH::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_CATCH.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_CATCH::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_CATCH::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_CATCH(void *p) {
      delete (static_cast<::TVME_CATCH*>(p));
   }
   static void deleteArray_TVME_CATCH(void *p) {
      delete [] (static_cast<::TVME_CATCH*>(p));
   }
   static void destruct_TVME_CATCH(void *p) {
      typedef ::TVME_CATCH current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_CATCH

//______________________________________________________________________________
void TVME_CATCH_Scaler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_CATCH_Scaler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_CATCH_Scaler::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_CATCH_Scaler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_CATCH_Scaler(void *p) {
      delete (static_cast<::TVME_CATCH_Scaler*>(p));
   }
   static void deleteArray_TVME_CATCH_Scaler(void *p) {
      delete [] (static_cast<::TVME_CATCH_Scaler*>(p));
   }
   static void destruct_TVME_CATCH_Scaler(void *p) {
      typedef ::TVME_CATCH_Scaler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_CATCH_Scaler

//______________________________________________________________________________
void TVME_CATCH_TCS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_CATCH_TCS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_CATCH_TCS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_CATCH_TCS::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_CATCH_TCS(void *p) {
      delete (static_cast<::TVME_CATCH_TCS*>(p));
   }
   static void deleteArray_TVME_CATCH_TCS(void *p) {
      delete [] (static_cast<::TVME_CATCH_TCS*>(p));
   }
   static void destruct_TVME_CATCH_TCS(void *p) {
      typedef ::TVME_CATCH_TCS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_CATCH_TCS

//______________________________________________________________________________
void TVME_CATCH_TDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_CATCH_TDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_CATCH_TDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_CATCH_TDC::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_CATCH_TDC(void *p) {
      delete (static_cast<::TVME_CATCH_TDC*>(p));
   }
   static void deleteArray_TVME_CATCH_TDC(void *p) {
      delete [] (static_cast<::TVME_CATCH_TDC*>(p));
   }
   static void destruct_TVME_CATCH_TDC(void *p) {
      typedef ::TVME_CATCH_TDC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_CATCH_TDC

//______________________________________________________________________________
void TVME_CBD8210::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_CBD8210.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_CBD8210::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_CBD8210::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_CBD8210(void *p) {
      delete (static_cast<::TVME_CBD8210*>(p));
   }
   static void deleteArray_TVME_CBD8210(void *p) {
      delete [] (static_cast<::TVME_CBD8210*>(p));
   }
   static void destruct_TVME_CBD8210(void *p) {
      typedef ::TVME_CBD8210 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_CBD8210

//______________________________________________________________________________
void TVME_GeSiCA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_GeSiCA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_GeSiCA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_GeSiCA::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_GeSiCA(void *p) {
      delete (static_cast<::TVME_GeSiCA*>(p));
   }
   static void deleteArray_TVME_GeSiCA(void *p) {
      delete [] (static_cast<::TVME_GeSiCA*>(p));
   }
   static void destruct_TVME_GeSiCA(void *p) {
      typedef ::TVME_GeSiCA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_GeSiCA

//______________________________________________________________________________
void TVME_SIS3820::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_SIS3820.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_SIS3820::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_SIS3820::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_SIS3820(void *p) {
      delete (static_cast<::TVME_SIS3820*>(p));
   }
   static void deleteArray_TVME_SIS3820(void *p) {
      delete [] (static_cast<::TVME_SIS3820*>(p));
   }
   static void destruct_TVME_SIS3820(void *p) {
      typedef ::TVME_SIS3820 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_SIS3820

//______________________________________________________________________________
void TVME_V1190::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_V1190.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_V1190::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_V1190::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_V1190(void *p) {
      delete (static_cast<::TVME_V1190*>(p));
   }
   static void deleteArray_TVME_V1190(void *p) {
      delete [] (static_cast<::TVME_V1190*>(p));
   }
   static void destruct_TVME_V1190(void *p) {
      typedef ::TVME_V1190 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_V1190

//______________________________________________________________________________
void TVME_V1290::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_V1290.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_V1290::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_V1290::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_V1290(void *p) {
      delete (static_cast<::TVME_V1290*>(p));
   }
   static void deleteArray_TVME_V1290(void *p) {
      delete [] (static_cast<::TVME_V1290*>(p));
   }
   static void destruct_TVME_V1290(void *p) {
      typedef ::TVME_V1290 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_V1290

//______________________________________________________________________________
void TVME_V792::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_V792.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_V792::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_V792::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_V792(void *p) {
      delete (static_cast<::TVME_V792*>(p));
   }
   static void deleteArray_TVME_V792(void *p) {
      delete [] (static_cast<::TVME_V792*>(p));
   }
   static void destruct_TVME_V792(void *p) {
      typedef ::TVME_V792 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_V792

//______________________________________________________________________________
void TVME_V775::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_V775.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_V775::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_V775::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_V775(void *p) {
      delete (static_cast<::TVME_V775*>(p));
   }
   static void deleteArray_TVME_V775(void *p) {
      delete [] (static_cast<::TVME_V775*>(p));
   }
   static void destruct_TVME_V775(void *p) {
      typedef ::TVME_V775 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_V775

//______________________________________________________________________________
void TVME_V785::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_V785.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_V785::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_V785::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_V785(void *p) {
      delete (static_cast<::TVME_V785*>(p));
   }
   static void deleteArray_TVME_V785(void *p) {
      delete [] (static_cast<::TVME_V785*>(p));
   }
   static void destruct_TVME_V785(void *p) {
      typedef ::TVME_V785 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_V785

//______________________________________________________________________________
void TVME_V874::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_V874.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_V874::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_V874::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_V874(void *p) {
      delete (static_cast<::TVME_V874*>(p));
   }
   static void deleteArray_TVME_V874(void *p) {
      delete [] (static_cast<::TVME_V874*>(p));
   }
   static void destruct_TVME_V874(void *p) {
      typedef ::TVME_V874 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_V874

//______________________________________________________________________________
void TVME_V965::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_V965.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_V965::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_V965::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_V965(void *p) {
      delete (static_cast<::TVME_V965*>(p));
   }
   static void deleteArray_TVME_V965(void *p) {
      delete [] (static_cast<::TVME_V965*>(p));
   }
   static void destruct_TVME_V965(void *p) {
      typedef ::TVME_V965 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_V965

//______________________________________________________________________________
void TVME_VITEC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_VITEC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_VITEC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_VITEC::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_VITEC(void *p) {
      delete (static_cast<::TVME_VITEC*>(p));
   }
   static void deleteArray_TVME_VITEC(void *p) {
      delete [] (static_cast<::TVME_VITEC*>(p));
   }
   static void destruct_TVME_VITEC(void *p) {
      typedef ::TVME_VITEC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_VITEC

//______________________________________________________________________________
void TVME_VUPROM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_VUPROM.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_VUPROM::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_VUPROM::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_VUPROM(void *p) {
      delete (static_cast<::TVME_VUPROM*>(p));
   }
   static void deleteArray_TVME_VUPROM(void *p) {
      delete [] (static_cast<::TVME_VUPROM*>(p));
   }
   static void destruct_TVME_VUPROM(void *p) {
      typedef ::TVME_VUPROM current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_VUPROM

//______________________________________________________________________________
void TVME_VUPROMT::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_VUPROMT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_VUPROMT::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_VUPROMT::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_VUPROMT(void *p) {
      delete (static_cast<::TVME_VUPROMT*>(p));
   }
   static void deleteArray_TVME_VUPROMT(void *p) {
      delete [] (static_cast<::TVME_VUPROMT*>(p));
   }
   static void destruct_TVME_VUPROMT(void *p) {
      typedef ::TVME_VUPROMT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_VUPROMT

//______________________________________________________________________________
void TVME_VUPROM_Moeller::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_VUPROM_Moeller.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_VUPROM_Moeller::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_VUPROM_Moeller::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_VUPROM_Moeller(void *p) {
      delete (static_cast<::TVME_VUPROM_Moeller*>(p));
   }
   static void deleteArray_TVME_VUPROM_Moeller(void *p) {
      delete [] (static_cast<::TVME_VUPROM_Moeller*>(p));
   }
   static void destruct_TVME_VUPROM_Moeller(void *p) {
      typedef ::TVME_VUPROM_Moeller current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_VUPROM_Moeller

//______________________________________________________________________________
void TVME_VUPROM_Pattern::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_VUPROM_Pattern.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_VUPROM_Pattern::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_VUPROM_Pattern::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_VUPROM_Pattern(void *p) {
      delete (static_cast<::TVME_VUPROM_Pattern*>(p));
   }
   static void deleteArray_TVME_VUPROM_Pattern(void *p) {
      delete [] (static_cast<::TVME_VUPROM_Pattern*>(p));
   }
   static void destruct_TVME_VUPROM_Pattern(void *p) {
      typedef ::TVME_VUPROM_Pattern current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_VUPROM_Pattern

//______________________________________________________________________________
void TVME_VUPROM_Scaler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVME_VUPROM_Scaler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVME_VUPROM_Scaler::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVME_VUPROM_Scaler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVME_VUPROM_Scaler(void *p) {
      delete (static_cast<::TVME_VUPROM_Scaler*>(p));
   }
   static void deleteArray_TVME_VUPROM_Scaler(void *p) {
      delete [] (static_cast<::TVME_VUPROM_Scaler*>(p));
   }
   static void destruct_TVME_VUPROM_Scaler(void *p) {
      typedef ::TVME_VUPROM_Scaler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVME_VUPROM_Scaler

//______________________________________________________________________________
void TVirtualModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualModule(void *p) {
      delete (static_cast<::TVirtualModule*>(p));
   }
   static void deleteArray_TVirtualModule(void *p) {
      delete [] (static_cast<::TVirtualModule*>(p));
   }
   static void destruct_TVirtualModule(void *p) {
      typedef ::TVirtualModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualModule

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 458,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned long>","std::vector<unsigned long, std::allocator<unsigned long> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr))->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete (static_cast<vector<unsigned long>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<vector<unsigned long>*>(p));
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_Dictionary();
   static void vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p);
   static void deleteArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p);
   static void destruct_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<unsigned long,unsigned long> >*)
   {
      vector<pair<unsigned long,unsigned long> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<unsigned long,unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<unsigned long,unsigned long> >", -2, "vector", 458,
                  typeid(vector<pair<unsigned long,unsigned long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<unsigned long,unsigned long> >) );
      instance.SetNew(&new_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<unsigned long,unsigned long> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<unsigned long,unsigned long> >","std::vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<unsigned long,unsigned long> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<unsigned long,unsigned long> >*>(nullptr))->GetClass();
      vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<unsigned long,unsigned long> > : new vector<pair<unsigned long,unsigned long> >;
   }
   static void *newArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<unsigned long,unsigned long> >[nElements] : new vector<pair<unsigned long,unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p) {
      delete (static_cast<vector<pair<unsigned long,unsigned long> >*>(p));
   }
   static void deleteArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p) {
      delete [] (static_cast<vector<pair<unsigned long,unsigned long> >*>(p));
   }
   static void destruct_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p) {
      typedef vector<pair<unsigned long,unsigned long> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<unsigned long,unsigned long> >

namespace ROOT {
   static TClass *vectorlEVMEreg_tgR_Dictionary();
   static void vectorlEVMEreg_tgR_TClassManip(TClass*);
   static void *new_vectorlEVMEreg_tgR(void *p = nullptr);
   static void *newArray_vectorlEVMEreg_tgR(Long_t size, void *p);
   static void delete_vectorlEVMEreg_tgR(void *p);
   static void deleteArray_vectorlEVMEreg_tgR(void *p);
   static void destruct_vectorlEVMEreg_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<VMEreg_t>*)
   {
      vector<VMEreg_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<VMEreg_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<VMEreg_t>", -2, "vector", 458,
                  typeid(vector<VMEreg_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEVMEreg_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<VMEreg_t>) );
      instance.SetNew(&new_vectorlEVMEreg_tgR);
      instance.SetNewArray(&newArray_vectorlEVMEreg_tgR);
      instance.SetDelete(&delete_vectorlEVMEreg_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEVMEreg_tgR);
      instance.SetDestructor(&destruct_vectorlEVMEreg_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<VMEreg_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<VMEreg_t>","std::vector<VMEreg_t, std::allocator<VMEreg_t> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<VMEreg_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEVMEreg_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<VMEreg_t>*>(nullptr))->GetClass();
      vectorlEVMEreg_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEVMEreg_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEVMEreg_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<VMEreg_t> : new vector<VMEreg_t>;
   }
   static void *newArray_vectorlEVMEreg_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<VMEreg_t>[nElements] : new vector<VMEreg_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEVMEreg_tgR(void *p) {
      delete (static_cast<vector<VMEreg_t>*>(p));
   }
   static void deleteArray_vectorlEVMEreg_tgR(void *p) {
      delete [] (static_cast<vector<VMEreg_t>*>(p));
   }
   static void destruct_vectorlEVMEreg_tgR(void *p) {
      typedef vector<VMEreg_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<VMEreg_t>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_AcquDAQDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_AcquDAQDict) = RecordReadRules_AcquDAQDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_AcquDAQDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_AcquDAQDict_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/DAQMemMap_t.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2373.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4413DAQEnable.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4413SPILL.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4508.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_GSI4800.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMACmodule.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_KPhI686.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_SIS1100.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_SY1527.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_V2718.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_VPE2xX86_64.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_VPE2xX86_64A.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQcontrol.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQexperiment.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQguiCtrl.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQmodule.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQstore.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQsupervise.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TEPICSmodule.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_1821SMI.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_LRS1800.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_Phil10C.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_STR200.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFBmodule.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TGUIsupervise.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_Scaler.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_TCS.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_TDC.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CBD8210.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_GeSiCA.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_KPhSMI.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_SIS3820.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V1190.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V1290.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V775.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V785.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V792.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V874.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V965.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VITEC.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROMT.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Moeller.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Pattern.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Scaler.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVMEmodule.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVirtualModule.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root_v6.36.00/include",
"/usr/include",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src",
"/home/dave/opt/AR.CATS/acqu_core/ezcaRoot/src",
"/home/dave/opt/AR.CATS/build/acqu_core/AcquRoot/src",
"/home/dave/opt/AR.CATS/Tools/a2display/inc",
"/opt/root_v6.36.00/include/",
"/home/dave/opt/AR.CATS/build/acqu_core/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "AcquDAQDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/DAQMemMap_t.h")))  DAQMemMap_t;
class __attribute__((annotate("$clingAutoload$TDAQcontrol.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h")))  TDAQcontrol;
class __attribute__((annotate("$clingAutoload$TDAQsupervise.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h")))  TDAQsupervise;
class __attribute__((annotate("$clingAutoload$TGUIsupervise.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h")))  TGUIsupervise;
class __attribute__((annotate("$clingAutoload$TDAQstore.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h")))  TDAQstore;
class __attribute__((annotate("$clingAutoload$TDAQexperiment.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h")))  TDAQexperiment;
class __attribute__((annotate("$clingAutoload$TDAQmodule.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h")))  TDAQmodule;
class __attribute__((annotate("$clingAutoload$TCAMACmodule.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h")))  TCAMACmodule;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h")))  TCAMAC_2323;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2373.h")))  TCAMAC_2373;
class __attribute__((annotate("$clingAutoload$TCAMAC_4413SPILL.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4413DAQEnable.h")))  TCAMAC_4413SPILL;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4413DAQEnable.h")))  TCAMAC_4413DAQEnable;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4508.h")))  TCAMAC_4508;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_GSI4800.h")))  TCAMAC_GSI4800;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_KPhI686.h")))  TDAQ_KPhI686;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_SIS1100.h")))  TDAQ_SIS1100;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_SY1527.h")))  TDAQ_SY1527;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_V2718.h")))  TDAQ_V2718;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_VPE2xX86_64.h")))  TDAQ_VPE2xX86_64;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_VPE2xX86_64A.h")))  TDAQ_VPE2xX86_64A;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQguiCtrl.h")))  TDAQguiCtrl;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TEPICSmodule.h")))  TEPICSmodule;
class __attribute__((annotate("$clingAutoload$TVMEmodule.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_1821SMI.h")))  TVMEmodule;
class __attribute__((annotate("$clingAutoload$TFBmodule.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_1821SMI.h")))  TFBmodule;
class __attribute__((annotate("$clingAutoload$TVME_KPhSMI.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_1821SMI.h")))  TVME_KPhSMI;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_1821SMI.h")))  TFB_1821SMI;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_LRS1800.h")))  TFB_LRS1800;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_Phil10C.h")))  TFB_Phil10C;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_STR200.h")))  TFB_STR200;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH.h")))  TVME_CATCH;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_Scaler.h")))  TVME_CATCH_Scaler;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_TCS.h")))  TVME_CATCH_TCS;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_TDC.h")))  TVME_CATCH_TDC;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CBD8210.h")))  TVME_CBD8210;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_GeSiCA.h")))  TVME_GeSiCA;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_SIS3820.h")))  TVME_SIS3820;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V1190.h")))  TVME_V1190;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V1290.h")))  TVME_V1290;
class __attribute__((annotate("$clingAutoload$TVME_V792.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V775.h")))  TVME_V792;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V775.h")))  TVME_V775;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V785.h")))  TVME_V785;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V874.h")))  TVME_V874;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V965.h")))  TVME_V965;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VITEC.h")))  TVME_VITEC;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM.h")))  TVME_VUPROM;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROMT.h")))  TVME_VUPROMT;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Moeller.h")))  TVME_VUPROM_Moeller;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Pattern.h")))  TVME_VUPROM_Pattern;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Scaler.h")))  TVME_VUPROM_Scaler;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVirtualModule.h")))  TVirtualModule;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "AcquDAQDict dictionary payload"

#ifndef _FORTIFY_SOURCE
  #define _FORTIFY_SOURCE 2
#endif
#ifndef WITH_LIBLZMA
  #define WITH_LIBLZMA 1
#endif
#ifndef VME_HOST
  #define VME_HOST 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/DAQMemMap_t.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2323.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_2373.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4413DAQEnable.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4413SPILL.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_4508.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMAC_GSI4800.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TCAMACmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_KPhI686.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_SIS1100.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_SY1527.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_V2718.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_VPE2xX86_64.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQ_VPE2xX86_64A.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQcontrol.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQexperiment.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQguiCtrl.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQstore.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TDAQsupervise.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TEPICSmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_1821SMI.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_LRS1800.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_Phil10C.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFB_STR200.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TFBmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TGUIsupervise.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_Scaler.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_TCS.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CATCH_TDC.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_CBD8210.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_GeSiCA.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_KPhSMI.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_SIS3820.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V1190.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V1290.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V775.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V785.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V792.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V874.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_V965.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VITEC.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROMT.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Moeller.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Pattern.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVME_VUPROM_Scaler.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVMEmodule.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src/TVirtualModule.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"DAQMemMap_t", payloadCode, "@",
"TCAMAC_2323", payloadCode, "@",
"TCAMAC_2373", payloadCode, "@",
"TCAMAC_4413DAQEnable", payloadCode, "@",
"TCAMAC_4413SPILL", payloadCode, "@",
"TCAMAC_4508", payloadCode, "@",
"TCAMAC_GSI4800", payloadCode, "@",
"TCAMACmodule", payloadCode, "@",
"TDAQ_KPhI686", payloadCode, "@",
"TDAQ_SIS1100", payloadCode, "@",
"TDAQ_SY1527", payloadCode, "@",
"TDAQ_V2718", payloadCode, "@",
"TDAQ_VPE2xX86_64", payloadCode, "@",
"TDAQ_VPE2xX86_64A", payloadCode, "@",
"TDAQcontrol", payloadCode, "@",
"TDAQexperiment", payloadCode, "@",
"TDAQguiCtrl", payloadCode, "@",
"TDAQmodule", payloadCode, "@",
"TDAQstore", payloadCode, "@",
"TDAQsupervise", payloadCode, "@",
"TEPICSmodule", payloadCode, "@",
"TFB_1821SMI", payloadCode, "@",
"TFB_LRS1800", payloadCode, "@",
"TFB_Phil10C", payloadCode, "@",
"TFB_STR200", payloadCode, "@",
"TFBmodule", payloadCode, "@",
"TGUIsupervise", payloadCode, "@",
"TVME_CATCH", payloadCode, "@",
"TVME_CATCH_Scaler", payloadCode, "@",
"TVME_CATCH_TCS", payloadCode, "@",
"TVME_CATCH_TDC", payloadCode, "@",
"TVME_CBD8210", payloadCode, "@",
"TVME_GeSiCA", payloadCode, "@",
"TVME_KPhSMI", payloadCode, "@",
"TVME_SIS3820", payloadCode, "@",
"TVME_V1190", payloadCode, "@",
"TVME_V1290", payloadCode, "@",
"TVME_V775", payloadCode, "@",
"TVME_V785", payloadCode, "@",
"TVME_V792", payloadCode, "@",
"TVME_V874", payloadCode, "@",
"TVME_V965", payloadCode, "@",
"TVME_VITEC", payloadCode, "@",
"TVME_VUPROM", payloadCode, "@",
"TVME_VUPROMT", payloadCode, "@",
"TVME_VUPROM_Moeller", payloadCode, "@",
"TVME_VUPROM_Pattern", payloadCode, "@",
"TVME_VUPROM_Scaler", payloadCode, "@",
"TVMEmodule", payloadCode, "@",
"TVirtualModule", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("AcquDAQDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_AcquDAQDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_AcquDAQDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_AcquDAQDict() {
  TriggerDictionaryInitialization_AcquDAQDict_Impl();
}
