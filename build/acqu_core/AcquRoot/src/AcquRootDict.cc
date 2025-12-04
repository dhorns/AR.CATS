// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddIacqu_coredIAcquRootdIsrcdIAcquRootDict
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
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Apparatus.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2BitPattern.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2ClusterDetector.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Control.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Cut.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylStrip.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylWire.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataFormat.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataManager.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataServer.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataSource.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Detector.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2FileSource.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericApparatus.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericDetector.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2H.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2HistManager.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Ladder.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2LocalSource.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2LongScint.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Mk1Format.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Mk2Format.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2MultiCut.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2NetSource.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Particle.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2ParticleID.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Physics.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2RateMonitor.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2System.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2TAPSFormat.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2TAPSMk2Format.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Tagger.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Track.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2WCLayer.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2WireChamber.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TAcquRoot.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TA2System(void *p);
   static void deleteArray_TA2System(void *p);
   static void destruct_TA2System(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2System*)
   {
      ::TA2System *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2System >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2System", ::TA2System::Class_Version(), "TA2System.h", 47,
                  typeid(::TA2System), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2System::Dictionary, isa_proxy, 4,
                  sizeof(::TA2System) );
      instance.SetDelete(&delete_TA2System);
      instance.SetDeleteArray(&deleteArray_TA2System);
      instance.SetDestructor(&destruct_TA2System);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2System*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2System*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2System*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2DataFormat(void *p);
   static void deleteArray_TA2DataFormat(void *p);
   static void destruct_TA2DataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2DataFormat*)
   {
      ::TA2DataFormat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2DataFormat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2DataFormat", ::TA2DataFormat::Class_Version(), "TA2DataFormat.h", 35,
                  typeid(::TA2DataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2DataFormat::Dictionary, isa_proxy, 4,
                  sizeof(::TA2DataFormat) );
      instance.SetDelete(&delete_TA2DataFormat);
      instance.SetDeleteArray(&deleteArray_TA2DataFormat);
      instance.SetDestructor(&destruct_TA2DataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2DataFormat*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2DataFormat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2DataFormat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Mk2Format(void *p);
   static void deleteArray_TA2Mk2Format(void *p);
   static void destruct_TA2Mk2Format(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Mk2Format*)
   {
      ::TA2Mk2Format *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Mk2Format >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Mk2Format", ::TA2Mk2Format::Class_Version(), "TA2Mk2Format.h", 91,
                  typeid(::TA2Mk2Format), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Mk2Format::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Mk2Format) );
      instance.SetDelete(&delete_TA2Mk2Format);
      instance.SetDeleteArray(&deleteArray_TA2Mk2Format);
      instance.SetDestructor(&destruct_TA2Mk2Format);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Mk2Format*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Mk2Format*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Mk2Format*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TAcquRoot(void *p);
   static void deleteArray_TAcquRoot(void *p);
   static void destruct_TAcquRoot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAcquRoot*)
   {
      ::TAcquRoot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAcquRoot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAcquRoot", ::TAcquRoot::Class_Version(), "TAcquRoot.h", 87,
                  typeid(::TAcquRoot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAcquRoot::Dictionary, isa_proxy, 4,
                  sizeof(::TAcquRoot) );
      instance.SetDelete(&delete_TAcquRoot);
      instance.SetDeleteArray(&deleteArray_TAcquRoot);
      instance.SetDestructor(&destruct_TAcquRoot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAcquRoot*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAcquRoot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAcquRoot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Cut(void *p);
   static void deleteArray_TA2Cut(void *p);
   static void destruct_TA2Cut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Cut*)
   {
      ::TA2Cut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Cut >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Cut", ::TA2Cut::Class_Version(), "TA2Cut.h", 44,
                  typeid(::TA2Cut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Cut::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Cut) );
      instance.SetDelete(&delete_TA2Cut);
      instance.SetDeleteArray(&deleteArray_TA2Cut);
      instance.SetDestructor(&destruct_TA2Cut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Cut*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Cut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Cut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2MultiCut(void *p);
   static void deleteArray_TA2MultiCut(void *p);
   static void destruct_TA2MultiCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2MultiCut*)
   {
      ::TA2MultiCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2MultiCut >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2MultiCut", ::TA2MultiCut::Class_Version(), "TA2MultiCut.h", 19,
                  typeid(::TA2MultiCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2MultiCut::Dictionary, isa_proxy, 4,
                  sizeof(::TA2MultiCut) );
      instance.SetDelete(&delete_TA2MultiCut);
      instance.SetDeleteArray(&deleteArray_TA2MultiCut);
      instance.SetDestructor(&destruct_TA2MultiCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2MultiCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2MultiCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2MultiCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2BitPattern(void *p);
   static void deleteArray_TA2BitPattern(void *p);
   static void destruct_TA2BitPattern(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2BitPattern*)
   {
      ::TA2BitPattern *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2BitPattern >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2BitPattern", ::TA2BitPattern::Class_Version(), "TA2BitPattern.h", 30,
                  typeid(::TA2BitPattern), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2BitPattern::Dictionary, isa_proxy, 4,
                  sizeof(::TA2BitPattern) );
      instance.SetDelete(&delete_TA2BitPattern);
      instance.SetDeleteArray(&deleteArray_TA2BitPattern);
      instance.SetDestructor(&destruct_TA2BitPattern);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2BitPattern*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2BitPattern*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2BitPattern*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2RateMonitor(void *p);
   static void deleteArray_TA2RateMonitor(void *p);
   static void destruct_TA2RateMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2RateMonitor*)
   {
      ::TA2RateMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2RateMonitor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2RateMonitor", ::TA2RateMonitor::Class_Version(), "TA2RateMonitor.h", 27,
                  typeid(::TA2RateMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2RateMonitor::Dictionary, isa_proxy, 4,
                  sizeof(::TA2RateMonitor) );
      instance.SetDelete(&delete_TA2RateMonitor);
      instance.SetDeleteArray(&deleteArray_TA2RateMonitor);
      instance.SetDestructor(&destruct_TA2RateMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2RateMonitor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2RateMonitor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2RateMonitor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2DataManager(void *p);
   static void deleteArray_TA2DataManager(void *p);
   static void destruct_TA2DataManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2DataManager*)
   {
      ::TA2DataManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2DataManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2DataManager", ::TA2DataManager::Class_Version(), "TA2DataManager.h", 47,
                  typeid(::TA2DataManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2DataManager::Dictionary, isa_proxy, 4,
                  sizeof(::TA2DataManager) );
      instance.SetDelete(&delete_TA2DataManager);
      instance.SetDeleteArray(&deleteArray_TA2DataManager);
      instance.SetDestructor(&destruct_TA2DataManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2DataManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2DataManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2DataManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2H(void *p);
   static void deleteArray_TA2H(void *p);
   static void destruct_TA2H(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2H*)
   {
      ::TA2H *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2H >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2H", ::TA2H::Class_Version(), "TA2H.h", 19,
                  typeid(::TA2H), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2H::Dictionary, isa_proxy, 4,
                  sizeof(::TA2H) );
      instance.SetDelete(&delete_TA2H);
      instance.SetDeleteArray(&deleteArray_TA2H);
      instance.SetDestructor(&destruct_TA2H);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2H*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2H*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2H*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2HistManager(void *p);
   static void deleteArray_TA2HistManager(void *p);
   static void destruct_TA2HistManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2HistManager*)
   {
      ::TA2HistManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2HistManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2HistManager", ::TA2HistManager::Class_Version(), "TA2HistManager.h", 38,
                  typeid(::TA2HistManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2HistManager::Dictionary, isa_proxy, 4,
                  sizeof(::TA2HistManager) );
      instance.SetDelete(&delete_TA2HistManager);
      instance.SetDeleteArray(&deleteArray_TA2HistManager);
      instance.SetDestructor(&destruct_TA2HistManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2HistManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2HistManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2HistManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Detector(void *p);
   static void deleteArray_TA2Detector(void *p);
   static void destruct_TA2Detector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Detector*)
   {
      ::TA2Detector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Detector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Detector", ::TA2Detector::Class_Version(), "TA2Detector.h", 87,
                  typeid(::TA2Detector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Detector::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Detector) );
      instance.SetDelete(&delete_TA2Detector);
      instance.SetDeleteArray(&deleteArray_TA2Detector);
      instance.SetDestructor(&destruct_TA2Detector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Detector*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Detector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Detector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2ParticleID(void *p);
   static void deleteArray_TA2ParticleID(void *p);
   static void destruct_TA2ParticleID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2ParticleID*)
   {
      ::TA2ParticleID *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2ParticleID >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2ParticleID", ::TA2ParticleID::Class_Version(), "TA2ParticleID.h", 39,
                  typeid(::TA2ParticleID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2ParticleID::Dictionary, isa_proxy, 4,
                  sizeof(::TA2ParticleID) );
      instance.SetDelete(&delete_TA2ParticleID);
      instance.SetDeleteArray(&deleteArray_TA2ParticleID);
      instance.SetDestructor(&destruct_TA2ParticleID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2ParticleID*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2ParticleID*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2ParticleID*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Apparatus(void *p);
   static void deleteArray_TA2Apparatus(void *p);
   static void destruct_TA2Apparatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Apparatus*)
   {
      ::TA2Apparatus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Apparatus >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Apparatus", ::TA2Apparatus::Class_Version(), "TA2Apparatus.h", 45,
                  typeid(::TA2Apparatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Apparatus::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Apparatus) );
      instance.SetDelete(&delete_TA2Apparatus);
      instance.SetDeleteArray(&deleteArray_TA2Apparatus);
      instance.SetDestructor(&destruct_TA2Apparatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Apparatus*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Apparatus*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Apparatus*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Physics(void *p);
   static void deleteArray_TA2Physics(void *p);
   static void destruct_TA2Physics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Physics*)
   {
      ::TA2Physics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Physics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Physics", ::TA2Physics::Class_Version(), "TA2Physics.h", 30,
                  typeid(::TA2Physics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Physics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Physics) );
      instance.SetDelete(&delete_TA2Physics);
      instance.SetDeleteArray(&deleteArray_TA2Physics);
      instance.SetDestructor(&destruct_TA2Physics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Physics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Physics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Physics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Analysis(void *p);
   static void deleteArray_TA2Analysis(void *p);
   static void destruct_TA2Analysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Analysis*)
   {
      ::TA2Analysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Analysis >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Analysis", ::TA2Analysis::Class_Version(), "TA2Analysis.h", 56,
                  typeid(::TA2Analysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Analysis::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Analysis) );
      instance.SetDelete(&delete_TA2Analysis);
      instance.SetDeleteArray(&deleteArray_TA2Analysis);
      instance.SetDestructor(&destruct_TA2Analysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Analysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Analysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Analysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2ClusterDetector(void *p);
   static void deleteArray_TA2ClusterDetector(void *p);
   static void destruct_TA2ClusterDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2ClusterDetector*)
   {
      ::TA2ClusterDetector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2ClusterDetector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2ClusterDetector", ::TA2ClusterDetector::Class_Version(), "TA2ClusterDetector.h", 60,
                  typeid(::TA2ClusterDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2ClusterDetector::Dictionary, isa_proxy, 4,
                  sizeof(::TA2ClusterDetector) );
      instance.SetDelete(&delete_TA2ClusterDetector);
      instance.SetDeleteArray(&deleteArray_TA2ClusterDetector);
      instance.SetDestructor(&destruct_TA2ClusterDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2ClusterDetector*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2ClusterDetector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2ClusterDetector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Control(void *p);
   static void deleteArray_TA2Control(void *p);
   static void destruct_TA2Control(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Control*)
   {
      ::TA2Control *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Control >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Control", ::TA2Control::Class_Version(), "TA2Control.h", 43,
                  typeid(::TA2Control), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Control::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Control) );
      instance.SetDelete(&delete_TA2Control);
      instance.SetDeleteArray(&deleteArray_TA2Control);
      instance.SetDestructor(&destruct_TA2Control);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Control*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Control*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Control*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2WCLayer(void *p);
   static void deleteArray_TA2WCLayer(void *p);
   static void destruct_TA2WCLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2WCLayer*)
   {
      ::TA2WCLayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2WCLayer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2WCLayer", ::TA2WCLayer::Class_Version(), "TA2WCLayer.h", 20,
                  typeid(::TA2WCLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2WCLayer::Dictionary, isa_proxy, 4,
                  sizeof(::TA2WCLayer) );
      instance.SetDelete(&delete_TA2WCLayer);
      instance.SetDeleteArray(&deleteArray_TA2WCLayer);
      instance.SetDestructor(&destruct_TA2WCLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2WCLayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2WCLayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2WCLayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CylStrip(void *p);
   static void deleteArray_TA2CylStrip(void *p);
   static void destruct_TA2CylStrip(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CylStrip*)
   {
      ::TA2CylStrip *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CylStrip >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CylStrip", ::TA2CylStrip::Class_Version(), "TA2CylStrip.h", 18,
                  typeid(::TA2CylStrip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CylStrip::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CylStrip) );
      instance.SetDelete(&delete_TA2CylStrip);
      instance.SetDeleteArray(&deleteArray_TA2CylStrip);
      instance.SetDestructor(&destruct_TA2CylStrip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CylStrip*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CylStrip*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CylStrip*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CylWire(void *p);
   static void deleteArray_TA2CylWire(void *p);
   static void destruct_TA2CylWire(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CylWire*)
   {
      ::TA2CylWire *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CylWire >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CylWire", ::TA2CylWire::Class_Version(), "TA2CylWire.h", 18,
                  typeid(::TA2CylWire), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CylWire::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CylWire) );
      instance.SetDelete(&delete_TA2CylWire);
      instance.SetDeleteArray(&deleteArray_TA2CylWire);
      instance.SetDestructor(&destruct_TA2CylWire);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CylWire*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CylWire*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CylWire*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2DataSource(void *p);
   static void deleteArray_TA2DataSource(void *p);
   static void destruct_TA2DataSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2DataSource*)
   {
      ::TA2DataSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2DataSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2DataSource", ::TA2DataSource::Class_Version(), "TA2DataSource.h", 25,
                  typeid(::TA2DataSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2DataSource::Dictionary, isa_proxy, 4,
                  sizeof(::TA2DataSource) );
      instance.SetDelete(&delete_TA2DataSource);
      instance.SetDeleteArray(&deleteArray_TA2DataSource);
      instance.SetDestructor(&destruct_TA2DataSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2DataSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2DataSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2DataSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2DataServer(void *p);
   static void deleteArray_TA2DataServer(void *p);
   static void destruct_TA2DataServer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2DataServer*)
   {
      ::TA2DataServer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2DataServer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2DataServer", ::TA2DataServer::Class_Version(), "TA2DataServer.h", 53,
                  typeid(::TA2DataServer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2DataServer::Dictionary, isa_proxy, 4,
                  sizeof(::TA2DataServer) );
      instance.SetDelete(&delete_TA2DataServer);
      instance.SetDeleteArray(&deleteArray_TA2DataServer);
      instance.SetDestructor(&destruct_TA2DataServer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2DataServer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2DataServer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2DataServer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2FileSource(void *p);
   static void deleteArray_TA2FileSource(void *p);
   static void destruct_TA2FileSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2FileSource*)
   {
      ::TA2FileSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2FileSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2FileSource", ::TA2FileSource::Class_Version(), "TA2FileSource.h", 22,
                  typeid(::TA2FileSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2FileSource::Dictionary, isa_proxy, 4,
                  sizeof(::TA2FileSource) );
      instance.SetDelete(&delete_TA2FileSource);
      instance.SetDeleteArray(&deleteArray_TA2FileSource);
      instance.SetDestructor(&destruct_TA2FileSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2FileSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2FileSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2FileSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GenericApparatus(void *p);
   static void deleteArray_TA2GenericApparatus(void *p);
   static void destruct_TA2GenericApparatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GenericApparatus*)
   {
      ::TA2GenericApparatus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GenericApparatus >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GenericApparatus", ::TA2GenericApparatus::Class_Version(), "TA2GenericApparatus.h", 19,
                  typeid(::TA2GenericApparatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GenericApparatus::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GenericApparatus) );
      instance.SetDelete(&delete_TA2GenericApparatus);
      instance.SetDeleteArray(&deleteArray_TA2GenericApparatus);
      instance.SetDestructor(&destruct_TA2GenericApparatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GenericApparatus*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GenericApparatus*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GenericApparatus*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GenericDetector(void *p);
   static void deleteArray_TA2GenericDetector(void *p);
   static void destruct_TA2GenericDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GenericDetector*)
   {
      ::TA2GenericDetector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GenericDetector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GenericDetector", ::TA2GenericDetector::Class_Version(), "TA2GenericDetector.h", 39,
                  typeid(::TA2GenericDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GenericDetector::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GenericDetector) );
      instance.SetDelete(&delete_TA2GenericDetector);
      instance.SetDeleteArray(&deleteArray_TA2GenericDetector);
      instance.SetDestructor(&destruct_TA2GenericDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GenericDetector*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GenericDetector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GenericDetector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GenericPhysics(void *p);
   static void deleteArray_TA2GenericPhysics(void *p);
   static void destruct_TA2GenericPhysics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GenericPhysics*)
   {
      ::TA2GenericPhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GenericPhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GenericPhysics", ::TA2GenericPhysics::Class_Version(), "TA2GenericPhysics.h", 22,
                  typeid(::TA2GenericPhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GenericPhysics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GenericPhysics) );
      instance.SetDelete(&delete_TA2GenericPhysics);
      instance.SetDeleteArray(&deleteArray_TA2GenericPhysics);
      instance.SetDestructor(&destruct_TA2GenericPhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GenericPhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GenericPhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GenericPhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Ladder(void *p);
   static void deleteArray_TA2Ladder(void *p);
   static void destruct_TA2Ladder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Ladder*)
   {
      ::TA2Ladder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Ladder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Ladder", ::TA2Ladder::Class_Version(), "TA2Ladder.h", 52,
                  typeid(::TA2Ladder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Ladder::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Ladder) );
      instance.SetDelete(&delete_TA2Ladder);
      instance.SetDeleteArray(&deleteArray_TA2Ladder);
      instance.SetDestructor(&destruct_TA2Ladder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Ladder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Ladder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Ladder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2LocalSource(void *p);
   static void deleteArray_TA2LocalSource(void *p);
   static void destruct_TA2LocalSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2LocalSource*)
   {
      ::TA2LocalSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2LocalSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2LocalSource", ::TA2LocalSource::Class_Version(), "TA2LocalSource.h", 31,
                  typeid(::TA2LocalSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2LocalSource::Dictionary, isa_proxy, 4,
                  sizeof(::TA2LocalSource) );
      instance.SetDelete(&delete_TA2LocalSource);
      instance.SetDeleteArray(&deleteArray_TA2LocalSource);
      instance.SetDestructor(&destruct_TA2LocalSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2LocalSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2LocalSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2LocalSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2LongScint(void *p);
   static void deleteArray_TA2LongScint(void *p);
   static void destruct_TA2LongScint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2LongScint*)
   {
      ::TA2LongScint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2LongScint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2LongScint", ::TA2LongScint::Class_Version(), "TA2LongScint.h", 28,
                  typeid(::TA2LongScint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2LongScint::Dictionary, isa_proxy, 4,
                  sizeof(::TA2LongScint) );
      instance.SetDelete(&delete_TA2LongScint);
      instance.SetDeleteArray(&deleteArray_TA2LongScint);
      instance.SetDestructor(&destruct_TA2LongScint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2LongScint*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2LongScint*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2LongScint*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Mk1Format(void *p);
   static void deleteArray_TA2Mk1Format(void *p);
   static void destruct_TA2Mk1Format(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Mk1Format*)
   {
      ::TA2Mk1Format *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Mk1Format >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Mk1Format", ::TA2Mk1Format::Class_Version(), "TA2Mk1Format.h", 25,
                  typeid(::TA2Mk1Format), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Mk1Format::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Mk1Format) );
      instance.SetDelete(&delete_TA2Mk1Format);
      instance.SetDeleteArray(&deleteArray_TA2Mk1Format);
      instance.SetDestructor(&destruct_TA2Mk1Format);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Mk1Format*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Mk1Format*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Mk1Format*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2NetSource(void *p);
   static void deleteArray_TA2NetSource(void *p);
   static void destruct_TA2NetSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2NetSource*)
   {
      ::TA2NetSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2NetSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2NetSource", ::TA2NetSource::Class_Version(), "TA2NetSource.h", 21,
                  typeid(::TA2NetSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2NetSource::Dictionary, isa_proxy, 4,
                  sizeof(::TA2NetSource) );
      instance.SetDelete(&delete_TA2NetSource);
      instance.SetDeleteArray(&deleteArray_TA2NetSource);
      instance.SetDestructor(&destruct_TA2NetSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2NetSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2NetSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2NetSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TA2Particle(void *p = nullptr);
   static void *newArray_TA2Particle(Long_t size, void *p);
   static void delete_TA2Particle(void *p);
   static void deleteArray_TA2Particle(void *p);
   static void destruct_TA2Particle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Particle*)
   {
      ::TA2Particle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Particle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Particle", ::TA2Particle::Class_Version(), "TA2Particle.h", 80,
                  typeid(::TA2Particle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Particle::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Particle) );
      instance.SetNew(&new_TA2Particle);
      instance.SetNewArray(&newArray_TA2Particle);
      instance.SetDelete(&delete_TA2Particle);
      instance.SetDeleteArray(&deleteArray_TA2Particle);
      instance.SetDestructor(&destruct_TA2Particle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Particle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Particle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Particle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2TAPSFormat(void *p);
   static void deleteArray_TA2TAPSFormat(void *p);
   static void destruct_TA2TAPSFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2TAPSFormat*)
   {
      ::TA2TAPSFormat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2TAPSFormat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2TAPSFormat", ::TA2TAPSFormat::Class_Version(), "TA2TAPSFormat.h", 20,
                  typeid(::TA2TAPSFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2TAPSFormat::Dictionary, isa_proxy, 4,
                  sizeof(::TA2TAPSFormat) );
      instance.SetDelete(&delete_TA2TAPSFormat);
      instance.SetDeleteArray(&deleteArray_TA2TAPSFormat);
      instance.SetDestructor(&destruct_TA2TAPSFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2TAPSFormat*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2TAPSFormat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2TAPSFormat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2TAPSMk2Format(void *p);
   static void deleteArray_TA2TAPSMk2Format(void *p);
   static void destruct_TA2TAPSMk2Format(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2TAPSMk2Format*)
   {
      ::TA2TAPSMk2Format *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2TAPSMk2Format >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2TAPSMk2Format", ::TA2TAPSMk2Format::Class_Version(), "TA2TAPSMk2Format.h", 18,
                  typeid(::TA2TAPSMk2Format), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2TAPSMk2Format::Dictionary, isa_proxy, 4,
                  sizeof(::TA2TAPSMk2Format) );
      instance.SetDelete(&delete_TA2TAPSMk2Format);
      instance.SetDeleteArray(&deleteArray_TA2TAPSMk2Format);
      instance.SetDestructor(&destruct_TA2TAPSMk2Format);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2TAPSMk2Format*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2TAPSMk2Format*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2TAPSMk2Format*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Tagger(void *p);
   static void deleteArray_TA2Tagger(void *p);
   static void destruct_TA2Tagger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Tagger*)
   {
      ::TA2Tagger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Tagger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Tagger", ::TA2Tagger::Class_Version(), "TA2Tagger.h", 56,
                  typeid(::TA2Tagger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Tagger::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Tagger) );
      instance.SetDelete(&delete_TA2Tagger);
      instance.SetDeleteArray(&deleteArray_TA2Tagger);
      instance.SetDestructor(&destruct_TA2Tagger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Tagger*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Tagger*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Tagger*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Track(void *p);
   static void deleteArray_TA2Track(void *p);
   static void destruct_TA2Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Track*)
   {
      ::TA2Track *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Track >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Track", ::TA2Track::Class_Version(), "TA2Track.h", 20,
                  typeid(::TA2Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Track::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Track) );
      instance.SetDelete(&delete_TA2Track);
      instance.SetDeleteArray(&deleteArray_TA2Track);
      instance.SetDestructor(&destruct_TA2Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Track*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Track*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Track*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2WireChamber(void *p);
   static void deleteArray_TA2WireChamber(void *p);
   static void destruct_TA2WireChamber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2WireChamber*)
   {
      ::TA2WireChamber *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2WireChamber >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2WireChamber", ::TA2WireChamber::Class_Version(), "TA2WireChamber.h", 28,
                  typeid(::TA2WireChamber), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2WireChamber::Dictionary, isa_proxy, 4,
                  sizeof(::TA2WireChamber) );
      instance.SetDelete(&delete_TA2WireChamber);
      instance.SetDeleteArray(&deleteArray_TA2WireChamber);
      instance.SetDestructor(&destruct_TA2WireChamber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2WireChamber*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2WireChamber*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2WireChamber*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TA2System::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2System::Class_Name()
{
   return "TA2System";
}

//______________________________________________________________________________
const char *TA2System::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2System*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2System::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2System*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2System::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2System*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2System::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2System*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2DataFormat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2DataFormat::Class_Name()
{
   return "TA2DataFormat";
}

//______________________________________________________________________________
const char *TA2DataFormat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2DataFormat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2DataFormat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2DataFormat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2DataFormat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2DataFormat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2DataFormat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2DataFormat*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Mk2Format::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Mk2Format::Class_Name()
{
   return "TA2Mk2Format";
}

//______________________________________________________________________________
const char *TA2Mk2Format::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Mk2Format*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Mk2Format::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Mk2Format*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Mk2Format::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Mk2Format*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Mk2Format::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Mk2Format*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAcquRoot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAcquRoot::Class_Name()
{
   return "TAcquRoot";
}

//______________________________________________________________________________
const char *TAcquRoot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAcquRoot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAcquRoot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAcquRoot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAcquRoot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAcquRoot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAcquRoot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAcquRoot*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Cut::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Cut::Class_Name()
{
   return "TA2Cut";
}

//______________________________________________________________________________
const char *TA2Cut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Cut*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Cut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Cut*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Cut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Cut*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Cut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Cut*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2MultiCut::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2MultiCut::Class_Name()
{
   return "TA2MultiCut";
}

//______________________________________________________________________________
const char *TA2MultiCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MultiCut*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2MultiCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MultiCut*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2MultiCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MultiCut*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2MultiCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MultiCut*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2BitPattern::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2BitPattern::Class_Name()
{
   return "TA2BitPattern";
}

//______________________________________________________________________________
const char *TA2BitPattern::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2BitPattern*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2BitPattern::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2BitPattern*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2BitPattern::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2BitPattern*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2BitPattern::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2BitPattern*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2RateMonitor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2RateMonitor::Class_Name()
{
   return "TA2RateMonitor";
}

//______________________________________________________________________________
const char *TA2RateMonitor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2RateMonitor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2RateMonitor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2RateMonitor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2RateMonitor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2RateMonitor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2RateMonitor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2RateMonitor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2DataManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2DataManager::Class_Name()
{
   return "TA2DataManager";
}

//______________________________________________________________________________
const char *TA2DataManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2DataManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2DataManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2DataManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2DataManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2DataManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2DataManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2DataManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2H::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2H::Class_Name()
{
   return "TA2H";
}

//______________________________________________________________________________
const char *TA2H::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2H*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2H::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2H*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2H::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2H*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2H::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2H*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2HistManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2HistManager::Class_Name()
{
   return "TA2HistManager";
}

//______________________________________________________________________________
const char *TA2HistManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2HistManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2HistManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2HistManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2HistManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2HistManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2HistManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2HistManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Detector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Detector::Class_Name()
{
   return "TA2Detector";
}

//______________________________________________________________________________
const char *TA2Detector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Detector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Detector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Detector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Detector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Detector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Detector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Detector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2ParticleID::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2ParticleID::Class_Name()
{
   return "TA2ParticleID";
}

//______________________________________________________________________________
const char *TA2ParticleID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2ParticleID*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2ParticleID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2ParticleID*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2ParticleID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2ParticleID*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2ParticleID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2ParticleID*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Apparatus::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Apparatus::Class_Name()
{
   return "TA2Apparatus";
}

//______________________________________________________________________________
const char *TA2Apparatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Apparatus*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Apparatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Apparatus*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Apparatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Apparatus*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Apparatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Apparatus*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Physics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Physics::Class_Name()
{
   return "TA2Physics";
}

//______________________________________________________________________________
const char *TA2Physics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Physics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Physics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Physics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Physics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Physics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Physics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Physics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Analysis::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Analysis::Class_Name()
{
   return "TA2Analysis";
}

//______________________________________________________________________________
const char *TA2Analysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Analysis*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Analysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Analysis*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Analysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Analysis*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Analysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Analysis*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2ClusterDetector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2ClusterDetector::Class_Name()
{
   return "TA2ClusterDetector";
}

//______________________________________________________________________________
const char *TA2ClusterDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2ClusterDetector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2ClusterDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2ClusterDetector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2ClusterDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2ClusterDetector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2ClusterDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2ClusterDetector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Control::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Control::Class_Name()
{
   return "TA2Control";
}

//______________________________________________________________________________
const char *TA2Control::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Control*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Control::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Control*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Control::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Control*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Control::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Control*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2WCLayer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2WCLayer::Class_Name()
{
   return "TA2WCLayer";
}

//______________________________________________________________________________
const char *TA2WCLayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2WCLayer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2WCLayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2WCLayer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2WCLayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2WCLayer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2WCLayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2WCLayer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CylStrip::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CylStrip::Class_Name()
{
   return "TA2CylStrip";
}

//______________________________________________________________________________
const char *TA2CylStrip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylStrip*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CylStrip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylStrip*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CylStrip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylStrip*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CylStrip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylStrip*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CylWire::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CylWire::Class_Name()
{
   return "TA2CylWire";
}

//______________________________________________________________________________
const char *TA2CylWire::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylWire*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CylWire::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylWire*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CylWire::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylWire*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CylWire::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylWire*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2DataSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2DataSource::Class_Name()
{
   return "TA2DataSource";
}

//______________________________________________________________________________
const char *TA2DataSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2DataSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2DataSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2DataSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2DataSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2DataSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2DataSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2DataSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2DataServer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2DataServer::Class_Name()
{
   return "TA2DataServer";
}

//______________________________________________________________________________
const char *TA2DataServer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2DataServer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2DataServer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2DataServer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2DataServer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2DataServer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2DataServer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2DataServer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2FileSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2FileSource::Class_Name()
{
   return "TA2FileSource";
}

//______________________________________________________________________________
const char *TA2FileSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2FileSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2FileSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2FileSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2FileSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2FileSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2FileSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2FileSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GenericApparatus::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GenericApparatus::Class_Name()
{
   return "TA2GenericApparatus";
}

//______________________________________________________________________________
const char *TA2GenericApparatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApparatus*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GenericApparatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApparatus*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GenericApparatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApparatus*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GenericApparatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApparatus*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GenericDetector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GenericDetector::Class_Name()
{
   return "TA2GenericDetector";
}

//______________________________________________________________________________
const char *TA2GenericDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericDetector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GenericDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericDetector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GenericDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericDetector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GenericDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericDetector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GenericPhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GenericPhysics::Class_Name()
{
   return "TA2GenericPhysics";
}

//______________________________________________________________________________
const char *TA2GenericPhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericPhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GenericPhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericPhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GenericPhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericPhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GenericPhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericPhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Ladder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Ladder::Class_Name()
{
   return "TA2Ladder";
}

//______________________________________________________________________________
const char *TA2Ladder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Ladder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Ladder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Ladder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Ladder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Ladder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Ladder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Ladder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2LocalSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2LocalSource::Class_Name()
{
   return "TA2LocalSource";
}

//______________________________________________________________________________
const char *TA2LocalSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2LocalSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2LocalSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2LocalSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2LocalSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2LocalSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2LocalSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2LocalSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2LongScint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2LongScint::Class_Name()
{
   return "TA2LongScint";
}

//______________________________________________________________________________
const char *TA2LongScint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2LongScint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2LongScint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2LongScint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2LongScint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2LongScint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2LongScint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2LongScint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Mk1Format::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Mk1Format::Class_Name()
{
   return "TA2Mk1Format";
}

//______________________________________________________________________________
const char *TA2Mk1Format::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Mk1Format*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Mk1Format::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Mk1Format*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Mk1Format::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Mk1Format*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Mk1Format::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Mk1Format*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2NetSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2NetSource::Class_Name()
{
   return "TA2NetSource";
}

//______________________________________________________________________________
const char *TA2NetSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2NetSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2NetSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2NetSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2NetSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2NetSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2NetSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2NetSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Particle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Particle::Class_Name()
{
   return "TA2Particle";
}

//______________________________________________________________________________
const char *TA2Particle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Particle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Particle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Particle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Particle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Particle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Particle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Particle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2TAPSFormat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2TAPSFormat::Class_Name()
{
   return "TA2TAPSFormat";
}

//______________________________________________________________________________
const char *TA2TAPSFormat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSFormat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2TAPSFormat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSFormat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2TAPSFormat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSFormat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2TAPSFormat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSFormat*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2TAPSMk2Format::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2TAPSMk2Format::Class_Name()
{
   return "TA2TAPSMk2Format";
}

//______________________________________________________________________________
const char *TA2TAPSMk2Format::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSMk2Format*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2TAPSMk2Format::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSMk2Format*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2TAPSMk2Format::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSMk2Format*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2TAPSMk2Format::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSMk2Format*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Tagger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Tagger::Class_Name()
{
   return "TA2Tagger";
}

//______________________________________________________________________________
const char *TA2Tagger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Tagger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Tagger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Tagger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Tagger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Tagger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Tagger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Tagger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Track::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Track::Class_Name()
{
   return "TA2Track";
}

//______________________________________________________________________________
const char *TA2Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Track*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Track*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Track*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Track*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2WireChamber::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2WireChamber::Class_Name()
{
   return "TA2WireChamber";
}

//______________________________________________________________________________
const char *TA2WireChamber::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2WireChamber*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2WireChamber::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2WireChamber*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2WireChamber::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2WireChamber*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2WireChamber::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2WireChamber*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TA2System::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2System.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2System::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2System::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2System(void *p) {
      delete (static_cast<::TA2System*>(p));
   }
   static void deleteArray_TA2System(void *p) {
      delete [] (static_cast<::TA2System*>(p));
   }
   static void destruct_TA2System(void *p) {
      typedef ::TA2System current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2System

//______________________________________________________________________________
void TA2DataFormat::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2DataFormat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2DataFormat::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2DataFormat::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2DataFormat(void *p) {
      delete (static_cast<::TA2DataFormat*>(p));
   }
   static void deleteArray_TA2DataFormat(void *p) {
      delete [] (static_cast<::TA2DataFormat*>(p));
   }
   static void destruct_TA2DataFormat(void *p) {
      typedef ::TA2DataFormat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2DataFormat

//______________________________________________________________________________
void TA2Mk2Format::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Mk2Format.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Mk2Format::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Mk2Format::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Mk2Format(void *p) {
      delete (static_cast<::TA2Mk2Format*>(p));
   }
   static void deleteArray_TA2Mk2Format(void *p) {
      delete [] (static_cast<::TA2Mk2Format*>(p));
   }
   static void destruct_TA2Mk2Format(void *p) {
      typedef ::TA2Mk2Format current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Mk2Format

//______________________________________________________________________________
void TAcquRoot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAcquRoot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAcquRoot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAcquRoot::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAcquRoot(void *p) {
      delete (static_cast<::TAcquRoot*>(p));
   }
   static void deleteArray_TAcquRoot(void *p) {
      delete [] (static_cast<::TAcquRoot*>(p));
   }
   static void destruct_TAcquRoot(void *p) {
      typedef ::TAcquRoot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAcquRoot

//______________________________________________________________________________
void TA2Cut::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Cut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Cut::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Cut::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Cut(void *p) {
      delete (static_cast<::TA2Cut*>(p));
   }
   static void deleteArray_TA2Cut(void *p) {
      delete [] (static_cast<::TA2Cut*>(p));
   }
   static void destruct_TA2Cut(void *p) {
      typedef ::TA2Cut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Cut

//______________________________________________________________________________
void TA2MultiCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2MultiCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2MultiCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2MultiCut::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2MultiCut(void *p) {
      delete (static_cast<::TA2MultiCut*>(p));
   }
   static void deleteArray_TA2MultiCut(void *p) {
      delete [] (static_cast<::TA2MultiCut*>(p));
   }
   static void destruct_TA2MultiCut(void *p) {
      typedef ::TA2MultiCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2MultiCut

//______________________________________________________________________________
void TA2BitPattern::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2BitPattern.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2BitPattern::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2BitPattern::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2BitPattern(void *p) {
      delete (static_cast<::TA2BitPattern*>(p));
   }
   static void deleteArray_TA2BitPattern(void *p) {
      delete [] (static_cast<::TA2BitPattern*>(p));
   }
   static void destruct_TA2BitPattern(void *p) {
      typedef ::TA2BitPattern current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2BitPattern

//______________________________________________________________________________
void TA2RateMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2RateMonitor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2RateMonitor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2RateMonitor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2RateMonitor(void *p) {
      delete (static_cast<::TA2RateMonitor*>(p));
   }
   static void deleteArray_TA2RateMonitor(void *p) {
      delete [] (static_cast<::TA2RateMonitor*>(p));
   }
   static void destruct_TA2RateMonitor(void *p) {
      typedef ::TA2RateMonitor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2RateMonitor

//______________________________________________________________________________
void TA2DataManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2DataManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2DataManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2DataManager::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2DataManager(void *p) {
      delete (static_cast<::TA2DataManager*>(p));
   }
   static void deleteArray_TA2DataManager(void *p) {
      delete [] (static_cast<::TA2DataManager*>(p));
   }
   static void destruct_TA2DataManager(void *p) {
      typedef ::TA2DataManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2DataManager

//______________________________________________________________________________
void TA2H::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2H.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2H::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2H::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2H(void *p) {
      delete (static_cast<::TA2H*>(p));
   }
   static void deleteArray_TA2H(void *p) {
      delete [] (static_cast<::TA2H*>(p));
   }
   static void destruct_TA2H(void *p) {
      typedef ::TA2H current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2H

//______________________________________________________________________________
void TA2HistManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2HistManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2HistManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2HistManager::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2HistManager(void *p) {
      delete (static_cast<::TA2HistManager*>(p));
   }
   static void deleteArray_TA2HistManager(void *p) {
      delete [] (static_cast<::TA2HistManager*>(p));
   }
   static void destruct_TA2HistManager(void *p) {
      typedef ::TA2HistManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2HistManager

//______________________________________________________________________________
void TA2Detector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Detector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Detector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Detector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Detector(void *p) {
      delete (static_cast<::TA2Detector*>(p));
   }
   static void deleteArray_TA2Detector(void *p) {
      delete [] (static_cast<::TA2Detector*>(p));
   }
   static void destruct_TA2Detector(void *p) {
      typedef ::TA2Detector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Detector

//______________________________________________________________________________
void TA2ParticleID::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2ParticleID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2ParticleID::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2ParticleID::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2ParticleID(void *p) {
      delete (static_cast<::TA2ParticleID*>(p));
   }
   static void deleteArray_TA2ParticleID(void *p) {
      delete [] (static_cast<::TA2ParticleID*>(p));
   }
   static void destruct_TA2ParticleID(void *p) {
      typedef ::TA2ParticleID current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2ParticleID

//______________________________________________________________________________
void TA2Apparatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Apparatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Apparatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Apparatus::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Apparatus(void *p) {
      delete (static_cast<::TA2Apparatus*>(p));
   }
   static void deleteArray_TA2Apparatus(void *p) {
      delete [] (static_cast<::TA2Apparatus*>(p));
   }
   static void destruct_TA2Apparatus(void *p) {
      typedef ::TA2Apparatus current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Apparatus

//______________________________________________________________________________
void TA2Physics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Physics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Physics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Physics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Physics(void *p) {
      delete (static_cast<::TA2Physics*>(p));
   }
   static void deleteArray_TA2Physics(void *p) {
      delete [] (static_cast<::TA2Physics*>(p));
   }
   static void destruct_TA2Physics(void *p) {
      typedef ::TA2Physics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Physics

//______________________________________________________________________________
void TA2Analysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Analysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Analysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Analysis::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Analysis(void *p) {
      delete (static_cast<::TA2Analysis*>(p));
   }
   static void deleteArray_TA2Analysis(void *p) {
      delete [] (static_cast<::TA2Analysis*>(p));
   }
   static void destruct_TA2Analysis(void *p) {
      typedef ::TA2Analysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Analysis

//______________________________________________________________________________
void TA2ClusterDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2ClusterDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2ClusterDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2ClusterDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2ClusterDetector(void *p) {
      delete (static_cast<::TA2ClusterDetector*>(p));
   }
   static void deleteArray_TA2ClusterDetector(void *p) {
      delete [] (static_cast<::TA2ClusterDetector*>(p));
   }
   static void destruct_TA2ClusterDetector(void *p) {
      typedef ::TA2ClusterDetector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2ClusterDetector

//______________________________________________________________________________
void TA2Control::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Control.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Control::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Control::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Control(void *p) {
      delete (static_cast<::TA2Control*>(p));
   }
   static void deleteArray_TA2Control(void *p) {
      delete [] (static_cast<::TA2Control*>(p));
   }
   static void destruct_TA2Control(void *p) {
      typedef ::TA2Control current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Control

//______________________________________________________________________________
void TA2WCLayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2WCLayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2WCLayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2WCLayer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2WCLayer(void *p) {
      delete (static_cast<::TA2WCLayer*>(p));
   }
   static void deleteArray_TA2WCLayer(void *p) {
      delete [] (static_cast<::TA2WCLayer*>(p));
   }
   static void destruct_TA2WCLayer(void *p) {
      typedef ::TA2WCLayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2WCLayer

//______________________________________________________________________________
void TA2CylStrip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CylStrip.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CylStrip::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CylStrip::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CylStrip(void *p) {
      delete (static_cast<::TA2CylStrip*>(p));
   }
   static void deleteArray_TA2CylStrip(void *p) {
      delete [] (static_cast<::TA2CylStrip*>(p));
   }
   static void destruct_TA2CylStrip(void *p) {
      typedef ::TA2CylStrip current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CylStrip

//______________________________________________________________________________
void TA2CylWire::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CylWire.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CylWire::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CylWire::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CylWire(void *p) {
      delete (static_cast<::TA2CylWire*>(p));
   }
   static void deleteArray_TA2CylWire(void *p) {
      delete [] (static_cast<::TA2CylWire*>(p));
   }
   static void destruct_TA2CylWire(void *p) {
      typedef ::TA2CylWire current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CylWire

//______________________________________________________________________________
void TA2DataSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2DataSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2DataSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2DataSource::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2DataSource(void *p) {
      delete (static_cast<::TA2DataSource*>(p));
   }
   static void deleteArray_TA2DataSource(void *p) {
      delete [] (static_cast<::TA2DataSource*>(p));
   }
   static void destruct_TA2DataSource(void *p) {
      typedef ::TA2DataSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2DataSource

//______________________________________________________________________________
void TA2DataServer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2DataServer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2DataServer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2DataServer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2DataServer(void *p) {
      delete (static_cast<::TA2DataServer*>(p));
   }
   static void deleteArray_TA2DataServer(void *p) {
      delete [] (static_cast<::TA2DataServer*>(p));
   }
   static void destruct_TA2DataServer(void *p) {
      typedef ::TA2DataServer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2DataServer

//______________________________________________________________________________
void TA2FileSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2FileSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2FileSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2FileSource::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2FileSource(void *p) {
      delete (static_cast<::TA2FileSource*>(p));
   }
   static void deleteArray_TA2FileSource(void *p) {
      delete [] (static_cast<::TA2FileSource*>(p));
   }
   static void destruct_TA2FileSource(void *p) {
      typedef ::TA2FileSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2FileSource

//______________________________________________________________________________
void TA2GenericApparatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GenericApparatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GenericApparatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GenericApparatus::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GenericApparatus(void *p) {
      delete (static_cast<::TA2GenericApparatus*>(p));
   }
   static void deleteArray_TA2GenericApparatus(void *p) {
      delete [] (static_cast<::TA2GenericApparatus*>(p));
   }
   static void destruct_TA2GenericApparatus(void *p) {
      typedef ::TA2GenericApparatus current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GenericApparatus

//______________________________________________________________________________
void TA2GenericDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GenericDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GenericDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GenericDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GenericDetector(void *p) {
      delete (static_cast<::TA2GenericDetector*>(p));
   }
   static void deleteArray_TA2GenericDetector(void *p) {
      delete [] (static_cast<::TA2GenericDetector*>(p));
   }
   static void destruct_TA2GenericDetector(void *p) {
      typedef ::TA2GenericDetector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GenericDetector

//______________________________________________________________________________
void TA2GenericPhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GenericPhysics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GenericPhysics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GenericPhysics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GenericPhysics(void *p) {
      delete (static_cast<::TA2GenericPhysics*>(p));
   }
   static void deleteArray_TA2GenericPhysics(void *p) {
      delete [] (static_cast<::TA2GenericPhysics*>(p));
   }
   static void destruct_TA2GenericPhysics(void *p) {
      typedef ::TA2GenericPhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GenericPhysics

//______________________________________________________________________________
void TA2Ladder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Ladder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Ladder::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Ladder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Ladder(void *p) {
      delete (static_cast<::TA2Ladder*>(p));
   }
   static void deleteArray_TA2Ladder(void *p) {
      delete [] (static_cast<::TA2Ladder*>(p));
   }
   static void destruct_TA2Ladder(void *p) {
      typedef ::TA2Ladder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Ladder

//______________________________________________________________________________
void TA2LocalSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2LocalSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2LocalSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2LocalSource::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2LocalSource(void *p) {
      delete (static_cast<::TA2LocalSource*>(p));
   }
   static void deleteArray_TA2LocalSource(void *p) {
      delete [] (static_cast<::TA2LocalSource*>(p));
   }
   static void destruct_TA2LocalSource(void *p) {
      typedef ::TA2LocalSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2LocalSource

//______________________________________________________________________________
void TA2LongScint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2LongScint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2LongScint::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2LongScint::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2LongScint(void *p) {
      delete (static_cast<::TA2LongScint*>(p));
   }
   static void deleteArray_TA2LongScint(void *p) {
      delete [] (static_cast<::TA2LongScint*>(p));
   }
   static void destruct_TA2LongScint(void *p) {
      typedef ::TA2LongScint current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2LongScint

//______________________________________________________________________________
void TA2Mk1Format::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Mk1Format.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Mk1Format::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Mk1Format::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Mk1Format(void *p) {
      delete (static_cast<::TA2Mk1Format*>(p));
   }
   static void deleteArray_TA2Mk1Format(void *p) {
      delete [] (static_cast<::TA2Mk1Format*>(p));
   }
   static void destruct_TA2Mk1Format(void *p) {
      typedef ::TA2Mk1Format current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Mk1Format

//______________________________________________________________________________
void TA2NetSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2NetSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2NetSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2NetSource::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2NetSource(void *p) {
      delete (static_cast<::TA2NetSource*>(p));
   }
   static void deleteArray_TA2NetSource(void *p) {
      delete [] (static_cast<::TA2NetSource*>(p));
   }
   static void destruct_TA2NetSource(void *p) {
      typedef ::TA2NetSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2NetSource

//______________________________________________________________________________
void TA2Particle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Particle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Particle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Particle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TA2Particle(void *p) {
      return  p ? new(p) ::TA2Particle : new ::TA2Particle;
   }
   static void *newArray_TA2Particle(Long_t nElements, void *p) {
      return p ? new(p) ::TA2Particle[nElements] : new ::TA2Particle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TA2Particle(void *p) {
      delete (static_cast<::TA2Particle*>(p));
   }
   static void deleteArray_TA2Particle(void *p) {
      delete [] (static_cast<::TA2Particle*>(p));
   }
   static void destruct_TA2Particle(void *p) {
      typedef ::TA2Particle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Particle

//______________________________________________________________________________
void TA2TAPSFormat::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2TAPSFormat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2TAPSFormat::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2TAPSFormat::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2TAPSFormat(void *p) {
      delete (static_cast<::TA2TAPSFormat*>(p));
   }
   static void deleteArray_TA2TAPSFormat(void *p) {
      delete [] (static_cast<::TA2TAPSFormat*>(p));
   }
   static void destruct_TA2TAPSFormat(void *p) {
      typedef ::TA2TAPSFormat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2TAPSFormat

//______________________________________________________________________________
void TA2TAPSMk2Format::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2TAPSMk2Format.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2TAPSMk2Format::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2TAPSMk2Format::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2TAPSMk2Format(void *p) {
      delete (static_cast<::TA2TAPSMk2Format*>(p));
   }
   static void deleteArray_TA2TAPSMk2Format(void *p) {
      delete [] (static_cast<::TA2TAPSMk2Format*>(p));
   }
   static void destruct_TA2TAPSMk2Format(void *p) {
      typedef ::TA2TAPSMk2Format current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2TAPSMk2Format

//______________________________________________________________________________
void TA2Tagger::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Tagger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Tagger::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Tagger::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Tagger(void *p) {
      delete (static_cast<::TA2Tagger*>(p));
   }
   static void deleteArray_TA2Tagger(void *p) {
      delete [] (static_cast<::TA2Tagger*>(p));
   }
   static void destruct_TA2Tagger(void *p) {
      typedef ::TA2Tagger current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Tagger

//______________________________________________________________________________
void TA2Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Track::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Track(void *p) {
      delete (static_cast<::TA2Track*>(p));
   }
   static void deleteArray_TA2Track(void *p) {
      delete [] (static_cast<::TA2Track*>(p));
   }
   static void destruct_TA2Track(void *p) {
      typedef ::TA2Track current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Track

//______________________________________________________________________________
void TA2WireChamber::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2WireChamber.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2WireChamber::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2WireChamber::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2WireChamber(void *p) {
      delete (static_cast<::TA2WireChamber*>(p));
   }
   static void deleteArray_TA2WireChamber(void *p) {
      delete [] (static_cast<::TA2WireChamber*>(p));
   }
   static void destruct_TA2WireChamber(void *p) {
      typedef ::TA2WireChamber current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2WireChamber

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 458,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned short>","std::vector<unsigned short, std::allocator<unsigned short> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr))->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete (static_cast<vector<unsigned short>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<vector<unsigned short>*>(p));
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_AcquRootDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_AcquRootDict) = RecordReadRules_AcquRootDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_AcquRootDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_AcquRootDict_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Apparatus.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2BitPattern.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2ClusterDetector.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Control.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Cut.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylStrip.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylWire.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataFormat.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataManager.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataServer.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataSource.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Detector.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2FileSource.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericApparatus.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericDetector.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericPhysics.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2H.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2HistManager.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Ladder.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2LocalSource.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2LongScint.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Mk1Format.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Mk2Format.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2MultiCut.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2NetSource.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Particle.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2ParticleID.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Physics.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2RateMonitor.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2System.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2TAPSFormat.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2TAPSMk2Format.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Tagger.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Track.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2WCLayer.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2WireChamber.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TAcquRoot.h",
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
#line 1 "AcquRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TA2System.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2System;
class __attribute__((annotate("$clingAutoload$TA2DataFormat.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2DataFormat;
class __attribute__((annotate("$clingAutoload$TA2Mk2Format.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2Mk2Format;
class __attribute__((annotate("$clingAutoload$TAcquRoot.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TAcquRoot;
class __attribute__((annotate("$clingAutoload$TA2Cut.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2Cut;
class __attribute__((annotate("$clingAutoload$TA2MultiCut.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2MultiCut;
class __attribute__((annotate("$clingAutoload$TA2BitPattern.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2BitPattern;
class __attribute__((annotate("$clingAutoload$TA2RateMonitor.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2RateMonitor;
class __attribute__((annotate("$clingAutoload$TA2DataManager.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2DataManager;
class __attribute__((annotate("$clingAutoload$TA2H.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2H;
class __attribute__((annotate("$clingAutoload$TA2HistManager.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2HistManager;
class __attribute__((annotate("$clingAutoload$TA2Detector.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2Detector;
class __attribute__((annotate("$clingAutoload$TA2ParticleID.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2ParticleID;
class __attribute__((annotate("$clingAutoload$TA2Apparatus.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2Apparatus;
class __attribute__((annotate("$clingAutoload$TA2Physics.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2Physics;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h")))  TA2Analysis;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2ClusterDetector.h")))  TA2ClusterDetector;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Control.h")))  TA2Control;
class __attribute__((annotate("$clingAutoload$TA2WCLayer.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylStrip.h")))  TA2WCLayer;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylStrip.h")))  TA2CylStrip;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylWire.h")))  TA2CylWire;
class __attribute__((annotate("$clingAutoload$TA2DataSource.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataServer.h")))  TA2DataSource;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataServer.h")))  TA2DataServer;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2FileSource.h")))  TA2FileSource;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericApparatus.h")))  TA2GenericApparatus;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericDetector.h")))  TA2GenericDetector;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericPhysics.h")))  TA2GenericPhysics;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Ladder.h")))  TA2Ladder;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2LocalSource.h")))  TA2LocalSource;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2LongScint.h")))  TA2LongScint;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Mk1Format.h")))  TA2Mk1Format;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2NetSource.h")))  TA2NetSource;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Particle.h")))  TA2Particle;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2TAPSFormat.h")))  TA2TAPSFormat;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2TAPSMk2Format.h")))  TA2TAPSMk2Format;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Tagger.h")))  TA2Tagger;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Track.h")))  TA2Track;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2WireChamber.h")))  TA2WireChamber;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "AcquRootDict dictionary payload"

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
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Analysis.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Apparatus.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2BitPattern.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2ClusterDetector.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Control.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Cut.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylStrip.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2CylWire.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataFormat.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataManager.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataServer.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2DataSource.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Detector.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2FileSource.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericApparatus.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericDetector.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2GenericPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2H.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2HistManager.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Ladder.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2LocalSource.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2LongScint.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Mk1Format.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Mk2Format.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2MultiCut.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2NetSource.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Particle.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2ParticleID.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Physics.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2RateMonitor.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2System.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2TAPSFormat.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2TAPSMk2Format.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Tagger.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2Track.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2WCLayer.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TA2WireChamber.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src/TAcquRoot.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TA2Analysis", payloadCode, "@",
"TA2Apparatus", payloadCode, "@",
"TA2BitPattern", payloadCode, "@",
"TA2ClusterDetector", payloadCode, "@",
"TA2Control", payloadCode, "@",
"TA2Cut", payloadCode, "@",
"TA2CylStrip", payloadCode, "@",
"TA2CylWire", payloadCode, "@",
"TA2DataFormat", payloadCode, "@",
"TA2DataManager", payloadCode, "@",
"TA2DataServer", payloadCode, "@",
"TA2DataSource", payloadCode, "@",
"TA2Detector", payloadCode, "@",
"TA2FileSource", payloadCode, "@",
"TA2GenericApparatus", payloadCode, "@",
"TA2GenericDetector", payloadCode, "@",
"TA2GenericPhysics", payloadCode, "@",
"TA2H", payloadCode, "@",
"TA2HistManager", payloadCode, "@",
"TA2Ladder", payloadCode, "@",
"TA2LocalSource", payloadCode, "@",
"TA2LongScint", payloadCode, "@",
"TA2Mk1Format", payloadCode, "@",
"TA2Mk2Format", payloadCode, "@",
"TA2MultiCut", payloadCode, "@",
"TA2NetSource", payloadCode, "@",
"TA2Particle", payloadCode, "@",
"TA2ParticleID", payloadCode, "@",
"TA2Physics", payloadCode, "@",
"TA2RateMonitor", payloadCode, "@",
"TA2System", payloadCode, "@",
"TA2TAPSFormat", payloadCode, "@",
"TA2TAPSMk2Format", payloadCode, "@",
"TA2Tagger", payloadCode, "@",
"TA2Track", payloadCode, "@",
"TA2WCLayer", payloadCode, "@",
"TA2WireChamber", payloadCode, "@",
"TAcquRoot", payloadCode, "@",
"gAN", payloadCode, "@",
"gAR", payloadCode, "@",
"gCTRL", payloadCode, "@",
"gDAQ", payloadCode, "@",
"gDS", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("AcquRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_AcquRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_AcquRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_AcquRootDict() {
  TriggerDictionaryInitialization_AcquRootDict_Impl();
}
