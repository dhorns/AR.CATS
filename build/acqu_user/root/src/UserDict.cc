// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddIacqu_userdIrootdIsrcdIUserDict
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
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BasePhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BeamPolMon.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CB.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CBKinematicFitter.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CalArray.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Calorimeter.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CentralApparatus.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CentralTrack.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CosmicCal.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CrystalBall.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpc.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcLayer.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcStrip.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcWire.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Event.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2FPMicro.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSAnnulus.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSCore.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSShield.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GeomCalibPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GoAT.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2KFParticle.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2LinearPolEpics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MesonPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Moeller.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MwpcIntersection.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MwpcTrack.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MyCaLib.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MyPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2OnlinePhys.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PairSpec.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Pi0Compton.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PlasticPID.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PlasticVETO.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPSAnalysis.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPS_BaF2.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPS_Veto.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Taps.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TrackLine.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TriggerPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserAnalysis.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserControl.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserPhysics.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TA2TAPS_BaF2(void *p);
   static void deleteArray_TA2TAPS_BaF2(void *p);
   static void destruct_TA2TAPS_BaF2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2TAPS_BaF2*)
   {
      ::TA2TAPS_BaF2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2TAPS_BaF2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2TAPS_BaF2", ::TA2TAPS_BaF2::Class_Version(), "TA2TAPS_BaF2.h", 32,
                  typeid(::TA2TAPS_BaF2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2TAPS_BaF2::Dictionary, isa_proxy, 4,
                  sizeof(::TA2TAPS_BaF2) );
      instance.SetDelete(&delete_TA2TAPS_BaF2);
      instance.SetDeleteArray(&deleteArray_TA2TAPS_BaF2);
      instance.SetDestructor(&destruct_TA2TAPS_BaF2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2TAPS_BaF2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2TAPS_BaF2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2TAPS_BaF2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CylMwpcLayer(void *p);
   static void deleteArray_TA2CylMwpcLayer(void *p);
   static void destruct_TA2CylMwpcLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CylMwpcLayer*)
   {
      ::TA2CylMwpcLayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CylMwpcLayer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CylMwpcLayer", ::TA2CylMwpcLayer::Class_Version(), "TA2CylMwpcLayer.h", 8,
                  typeid(::TA2CylMwpcLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CylMwpcLayer::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CylMwpcLayer) );
      instance.SetDelete(&delete_TA2CylMwpcLayer);
      instance.SetDeleteArray(&deleteArray_TA2CylMwpcLayer);
      instance.SetDestructor(&destruct_TA2CylMwpcLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CylMwpcLayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CylMwpcLayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CylMwpcLayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CylMwpcStrip(void *p);
   static void deleteArray_TA2CylMwpcStrip(void *p);
   static void destruct_TA2CylMwpcStrip(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CylMwpcStrip*)
   {
      ::TA2CylMwpcStrip *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CylMwpcStrip >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CylMwpcStrip", ::TA2CylMwpcStrip::Class_Version(), "TA2CylMwpcStrip.h", 6,
                  typeid(::TA2CylMwpcStrip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CylMwpcStrip::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CylMwpcStrip) );
      instance.SetDelete(&delete_TA2CylMwpcStrip);
      instance.SetDeleteArray(&deleteArray_TA2CylMwpcStrip);
      instance.SetDestructor(&destruct_TA2CylMwpcStrip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CylMwpcStrip*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CylMwpcStrip*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CylMwpcStrip*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CylMwpcWire(void *p);
   static void deleteArray_TA2CylMwpcWire(void *p);
   static void destruct_TA2CylMwpcWire(void *p);
   static void streamer_TA2CylMwpcWire(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CylMwpcWire*)
   {
      ::TA2CylMwpcWire *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CylMwpcWire >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CylMwpcWire", ::TA2CylMwpcWire::Class_Version(), "TA2CylMwpcWire.h", 7,
                  typeid(::TA2CylMwpcWire), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CylMwpcWire::Dictionary, isa_proxy, 16,
                  sizeof(::TA2CylMwpcWire) );
      instance.SetDelete(&delete_TA2CylMwpcWire);
      instance.SetDeleteArray(&deleteArray_TA2CylMwpcWire);
      instance.SetDestructor(&destruct_TA2CylMwpcWire);
      instance.SetStreamerFunc(&streamer_TA2CylMwpcWire);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CylMwpcWire*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CylMwpcWire*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CylMwpcWire*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TA2TrackLine(void *p = nullptr);
   static void *newArray_TA2TrackLine(Long_t size, void *p);
   static void delete_TA2TrackLine(void *p);
   static void deleteArray_TA2TrackLine(void *p);
   static void destruct_TA2TrackLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2TrackLine*)
   {
      ::TA2TrackLine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2TrackLine >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2TrackLine", ::TA2TrackLine::Class_Version(), "TA2TrackLine.h", 10,
                  typeid(::TA2TrackLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2TrackLine::Dictionary, isa_proxy, 4,
                  sizeof(::TA2TrackLine) );
      instance.SetNew(&new_TA2TrackLine);
      instance.SetNewArray(&newArray_TA2TrackLine);
      instance.SetDelete(&delete_TA2TrackLine);
      instance.SetDeleteArray(&deleteArray_TA2TrackLine);
      instance.SetDestructor(&destruct_TA2TrackLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2TrackLine*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2TrackLine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2TrackLine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TA2MwpcTrack(void *p = nullptr);
   static void *newArray_TA2MwpcTrack(Long_t size, void *p);
   static void delete_TA2MwpcTrack(void *p);
   static void deleteArray_TA2MwpcTrack(void *p);
   static void destruct_TA2MwpcTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2MwpcTrack*)
   {
      ::TA2MwpcTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2MwpcTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2MwpcTrack", ::TA2MwpcTrack::Class_Version(), "TA2MwpcTrack.h", 8,
                  typeid(::TA2MwpcTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2MwpcTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TA2MwpcTrack) );
      instance.SetNew(&new_TA2MwpcTrack);
      instance.SetNewArray(&newArray_TA2MwpcTrack);
      instance.SetDelete(&delete_TA2MwpcTrack);
      instance.SetDeleteArray(&deleteArray_TA2MwpcTrack);
      instance.SetDestructor(&destruct_TA2MwpcTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2MwpcTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2MwpcTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2MwpcTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TA2MwpcIntersection(void *p = nullptr);
   static void *newArray_TA2MwpcIntersection(Long_t size, void *p);
   static void delete_TA2MwpcIntersection(void *p);
   static void deleteArray_TA2MwpcIntersection(void *p);
   static void destruct_TA2MwpcIntersection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2MwpcIntersection*)
   {
      ::TA2MwpcIntersection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2MwpcIntersection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2MwpcIntersection", ::TA2MwpcIntersection::Class_Version(), "TA2MwpcIntersection.h", 10,
                  typeid(::TA2MwpcIntersection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2MwpcIntersection::Dictionary, isa_proxy, 4,
                  sizeof(::TA2MwpcIntersection) );
      instance.SetNew(&new_TA2MwpcIntersection);
      instance.SetNewArray(&newArray_TA2MwpcIntersection);
      instance.SetDelete(&delete_TA2MwpcIntersection);
      instance.SetDeleteArray(&deleteArray_TA2MwpcIntersection);
      instance.SetDestructor(&destruct_TA2MwpcIntersection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2MwpcIntersection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2MwpcIntersection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2MwpcIntersection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CylMwpc(void *p);
   static void deleteArray_TA2CylMwpc(void *p);
   static void destruct_TA2CylMwpc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CylMwpc*)
   {
      ::TA2CylMwpc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CylMwpc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CylMwpc", ::TA2CylMwpc::Class_Version(), "TA2CylMwpc.h", 30,
                  typeid(::TA2CylMwpc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CylMwpc::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CylMwpc) );
      instance.SetDelete(&delete_TA2CylMwpc);
      instance.SetDeleteArray(&deleteArray_TA2CylMwpc);
      instance.SetDestructor(&destruct_TA2CylMwpc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CylMwpc*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CylMwpc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CylMwpc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TA2CentralTrack(void *p = nullptr);
   static void *newArray_TA2CentralTrack(Long_t size, void *p);
   static void delete_TA2CentralTrack(void *p);
   static void deleteArray_TA2CentralTrack(void *p);
   static void destruct_TA2CentralTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CentralTrack*)
   {
      ::TA2CentralTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CentralTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CentralTrack", ::TA2CentralTrack::Class_Version(), "TA2CentralTrack.h", 8,
                  typeid(::TA2CentralTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CentralTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CentralTrack) );
      instance.SetNew(&new_TA2CentralTrack);
      instance.SetNewArray(&newArray_TA2CentralTrack);
      instance.SetDelete(&delete_TA2CentralTrack);
      instance.SetDeleteArray(&deleteArray_TA2CentralTrack);
      instance.SetDestructor(&destruct_TA2CentralTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CentralTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CentralTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CentralTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CentralApparatus(void *p);
   static void deleteArray_TA2CentralApparatus(void *p);
   static void destruct_TA2CentralApparatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CentralApparatus*)
   {
      ::TA2CentralApparatus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CentralApparatus >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CentralApparatus", ::TA2CentralApparatus::Class_Version(), "TA2CentralApparatus.h", 28,
                  typeid(::TA2CentralApparatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CentralApparatus::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CentralApparatus) );
      instance.SetDelete(&delete_TA2CentralApparatus);
      instance.SetDeleteArray(&deleteArray_TA2CentralApparatus);
      instance.SetDestructor(&destruct_TA2CentralApparatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CentralApparatus*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CentralApparatus*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CentralApparatus*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2PlasticPID(void *p);
   static void deleteArray_TA2PlasticPID(void *p);
   static void destruct_TA2PlasticPID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2PlasticPID*)
   {
      ::TA2PlasticPID *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2PlasticPID >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2PlasticPID", ::TA2PlasticPID::Class_Version(), "TA2PlasticPID.h", 24,
                  typeid(::TA2PlasticPID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2PlasticPID::Dictionary, isa_proxy, 4,
                  sizeof(::TA2PlasticPID) );
      instance.SetDelete(&delete_TA2PlasticPID);
      instance.SetDeleteArray(&deleteArray_TA2PlasticPID);
      instance.SetDestructor(&destruct_TA2PlasticPID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2PlasticPID*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2PlasticPID*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2PlasticPID*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2UserAnalysis(void *p);
   static void deleteArray_TA2UserAnalysis(void *p);
   static void destruct_TA2UserAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2UserAnalysis*)
   {
      ::TA2UserAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2UserAnalysis >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2UserAnalysis", ::TA2UserAnalysis::Class_Version(), "TA2UserAnalysis.h", 23,
                  typeid(::TA2UserAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2UserAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::TA2UserAnalysis) );
      instance.SetDelete(&delete_TA2UserAnalysis);
      instance.SetDeleteArray(&deleteArray_TA2UserAnalysis);
      instance.SetDestructor(&destruct_TA2UserAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2UserAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2UserAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2UserAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2UserControl(void *p);
   static void deleteArray_TA2UserControl(void *p);
   static void destruct_TA2UserControl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2UserControl*)
   {
      ::TA2UserControl *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2UserControl >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2UserControl", ::TA2UserControl::Class_Version(), "TA2UserControl.h", 29,
                  typeid(::TA2UserControl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2UserControl::Dictionary, isa_proxy, 4,
                  sizeof(::TA2UserControl) );
      instance.SetDelete(&delete_TA2UserControl);
      instance.SetDeleteArray(&deleteArray_TA2UserControl);
      instance.SetDestructor(&destruct_TA2UserControl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2UserControl*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2UserControl*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2UserControl*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CalArray(void *p);
   static void deleteArray_TA2CalArray(void *p);
   static void destruct_TA2CalArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CalArray*)
   {
      ::TA2CalArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CalArray >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CalArray", ::TA2CalArray::Class_Version(), "TA2CalArray.h", 28,
                  typeid(::TA2CalArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CalArray::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CalArray) );
      instance.SetDelete(&delete_TA2CalArray);
      instance.SetDeleteArray(&deleteArray_TA2CalArray);
      instance.SetDestructor(&destruct_TA2CalArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CalArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CalArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CalArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CrystalBall(void *p);
   static void deleteArray_TA2CrystalBall(void *p);
   static void destruct_TA2CrystalBall(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CrystalBall*)
   {
      ::TA2CrystalBall *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CrystalBall >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CrystalBall", ::TA2CrystalBall::Class_Version(), "TA2CrystalBall.h", 36,
                  typeid(::TA2CrystalBall), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CrystalBall::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CrystalBall) );
      instance.SetDelete(&delete_TA2CrystalBall);
      instance.SetDeleteArray(&deleteArray_TA2CrystalBall);
      instance.SetDestructor(&destruct_TA2CrystalBall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CrystalBall*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CrystalBall*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CrystalBall*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2TAPS_Veto(void *p);
   static void deleteArray_TA2TAPS_Veto(void *p);
   static void destruct_TA2TAPS_Veto(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2TAPS_Veto*)
   {
      ::TA2TAPS_Veto *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2TAPS_Veto >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2TAPS_Veto", ::TA2TAPS_Veto::Class_Version(), "TA2TAPS_Veto.h", 18,
                  typeid(::TA2TAPS_Veto), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2TAPS_Veto::Dictionary, isa_proxy, 4,
                  sizeof(::TA2TAPS_Veto) );
      instance.SetDelete(&delete_TA2TAPS_Veto);
      instance.SetDeleteArray(&deleteArray_TA2TAPS_Veto);
      instance.SetDestructor(&destruct_TA2TAPS_Veto);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2TAPS_Veto*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2TAPS_Veto*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2TAPS_Veto*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Calorimeter(void *p);
   static void deleteArray_TA2Calorimeter(void *p);
   static void destruct_TA2Calorimeter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Calorimeter*)
   {
      ::TA2Calorimeter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Calorimeter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Calorimeter", ::TA2Calorimeter::Class_Version(), "TA2Calorimeter.h", 25,
                  typeid(::TA2Calorimeter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Calorimeter::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Calorimeter) );
      instance.SetDelete(&delete_TA2Calorimeter);
      instance.SetDeleteArray(&deleteArray_TA2Calorimeter);
      instance.SetDestructor(&destruct_TA2Calorimeter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Calorimeter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Calorimeter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Calorimeter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Taps(void *p);
   static void deleteArray_TA2Taps(void *p);
   static void destruct_TA2Taps(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Taps*)
   {
      ::TA2Taps *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Taps >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Taps", ::TA2Taps::Class_Version(), "TA2Taps.h", 40,
                  typeid(::TA2Taps), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Taps::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Taps) );
      instance.SetDelete(&delete_TA2Taps);
      instance.SetDeleteArray(&deleteArray_TA2Taps);
      instance.SetDestructor(&destruct_TA2Taps);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Taps*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Taps*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Taps*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2LinearPolEpics(void *p);
   static void deleteArray_TA2LinearPolEpics(void *p);
   static void destruct_TA2LinearPolEpics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2LinearPolEpics*)
   {
      ::TA2LinearPolEpics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2LinearPolEpics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2LinearPolEpics", ::TA2LinearPolEpics::Class_Version(), "TA2LinearPolEpics.h", 40,
                  typeid(::TA2LinearPolEpics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2LinearPolEpics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2LinearPolEpics) );
      instance.SetDelete(&delete_TA2LinearPolEpics);
      instance.SetDeleteArray(&deleteArray_TA2LinearPolEpics);
      instance.SetDestructor(&destruct_TA2LinearPolEpics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2LinearPolEpics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2LinearPolEpics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2LinearPolEpics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2PairSpec(void *p);
   static void deleteArray_TA2PairSpec(void *p);
   static void destruct_TA2PairSpec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2PairSpec*)
   {
      ::TA2PairSpec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2PairSpec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2PairSpec", ::TA2PairSpec::Class_Version(), "TA2PairSpec.h", 8,
                  typeid(::TA2PairSpec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2PairSpec::Dictionary, isa_proxy, 4,
                  sizeof(::TA2PairSpec) );
      instance.SetDelete(&delete_TA2PairSpec);
      instance.SetDeleteArray(&deleteArray_TA2PairSpec);
      instance.SetDestructor(&destruct_TA2PairSpec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2PairSpec*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2PairSpec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2PairSpec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Moeller(void *p);
   static void deleteArray_TA2Moeller(void *p);
   static void destruct_TA2Moeller(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Moeller*)
   {
      ::TA2Moeller *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Moeller >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Moeller", ::TA2Moeller::Class_Version(), "TA2Moeller.h", 7,
                  typeid(::TA2Moeller), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Moeller::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Moeller) );
      instance.SetDelete(&delete_TA2Moeller);
      instance.SetDeleteArray(&deleteArray_TA2Moeller);
      instance.SetDestructor(&destruct_TA2Moeller);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Moeller*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Moeller*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Moeller*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2AccessSQL(void *p);
   static void deleteArray_TA2AccessSQL(void *p);
   static void destruct_TA2AccessSQL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2AccessSQL*)
   {
      ::TA2AccessSQL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2AccessSQL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2AccessSQL", ::TA2AccessSQL::Class_Version(), "TA2AccessSQL.h", 63,
                  typeid(::TA2AccessSQL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2AccessSQL::Dictionary, isa_proxy, 4,
                  sizeof(::TA2AccessSQL) );
      instance.SetDelete(&delete_TA2AccessSQL);
      instance.SetDeleteArray(&deleteArray_TA2AccessSQL);
      instance.SetDestructor(&destruct_TA2AccessSQL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2AccessSQL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2AccessSQL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2AccessSQL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CB(void *p);
   static void deleteArray_TA2CB(void *p);
   static void destruct_TA2CB(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CB*)
   {
      ::TA2CB *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CB >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CB", ::TA2CB::Class_Version(), "TA2CB.h", 15,
                  typeid(::TA2CB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CB::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CB) );
      instance.SetDelete(&delete_TA2CB);
      instance.SetDeleteArray(&deleteArray_TA2CB);
      instance.SetDestructor(&destruct_TA2CB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CB*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CB*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CB*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TA2Event(void *p = nullptr);
   static void *newArray_TA2Event(Long_t size, void *p);
   static void delete_TA2Event(void *p);
   static void deleteArray_TA2Event(void *p);
   static void destruct_TA2Event(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Event*)
   {
      ::TA2Event *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Event >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Event", ::TA2Event::Class_Version(), "TA2Event.h", 11,
                  typeid(::TA2Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Event::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Event) );
      instance.SetNew(&new_TA2Event);
      instance.SetNewArray(&newArray_TA2Event);
      instance.SetDelete(&delete_TA2Event);
      instance.SetDeleteArray(&deleteArray_TA2Event);
      instance.SetDestructor(&destruct_TA2Event);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Event*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Event*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Event*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2BasePhysics(void *p);
   static void deleteArray_TA2BasePhysics(void *p);
   static void destruct_TA2BasePhysics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2BasePhysics*)
   {
      ::TA2BasePhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2BasePhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2BasePhysics", ::TA2BasePhysics::Class_Version(), "TA2BasePhysics.h", 23,
                  typeid(::TA2BasePhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2BasePhysics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2BasePhysics) );
      instance.SetDelete(&delete_TA2BasePhysics);
      instance.SetDeleteArray(&deleteArray_TA2BasePhysics);
      instance.SetDestructor(&destruct_TA2BasePhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2BasePhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2BasePhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2BasePhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2BeamPolMon(void *p);
   static void deleteArray_TA2BeamPolMon(void *p);
   static void destruct_TA2BeamPolMon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2BeamPolMon*)
   {
      ::TA2BeamPolMon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2BeamPolMon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2BeamPolMon", ::TA2BeamPolMon::Class_Version(), "TA2BeamPolMon.h", 8,
                  typeid(::TA2BeamPolMon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2BeamPolMon::Dictionary, isa_proxy, 4,
                  sizeof(::TA2BeamPolMon) );
      instance.SetDelete(&delete_TA2BeamPolMon);
      instance.SetDeleteArray(&deleteArray_TA2BeamPolMon);
      instance.SetDestructor(&destruct_TA2BeamPolMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2BeamPolMon*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2BeamPolMon*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2BeamPolMon*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GenericApp_CATSCore(void *p);
   static void deleteArray_TA2GenericApp_CATSCore(void *p);
   static void destruct_TA2GenericApp_CATSCore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GenericApp_CATSCore*)
   {
      ::TA2GenericApp_CATSCore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GenericApp_CATSCore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GenericApp_CATSCore", ::TA2GenericApp_CATSCore::Class_Version(), "TA2GenericApp_CATSCore.h", 8,
                  typeid(::TA2GenericApp_CATSCore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GenericApp_CATSCore::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GenericApp_CATSCore) );
      instance.SetDelete(&delete_TA2GenericApp_CATSCore);
      instance.SetDeleteArray(&deleteArray_TA2GenericApp_CATSCore);
      instance.SetDestructor(&destruct_TA2GenericApp_CATSCore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GenericApp_CATSCore*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GenericApp_CATSCore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GenericApp_CATSCore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GenericApp_CATSAnnulus(void *p);
   static void deleteArray_TA2GenericApp_CATSAnnulus(void *p);
   static void destruct_TA2GenericApp_CATSAnnulus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GenericApp_CATSAnnulus*)
   {
      ::TA2GenericApp_CATSAnnulus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GenericApp_CATSAnnulus >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GenericApp_CATSAnnulus", ::TA2GenericApp_CATSAnnulus::Class_Version(), "TA2GenericApp_CATSAnnulus.h", 9,
                  typeid(::TA2GenericApp_CATSAnnulus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GenericApp_CATSAnnulus::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GenericApp_CATSAnnulus) );
      instance.SetDelete(&delete_TA2GenericApp_CATSAnnulus);
      instance.SetDeleteArray(&deleteArray_TA2GenericApp_CATSAnnulus);
      instance.SetDestructor(&destruct_TA2GenericApp_CATSAnnulus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GenericApp_CATSAnnulus*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GenericApp_CATSAnnulus*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GenericApp_CATSAnnulus*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GenericApp_CATSShield(void *p);
   static void deleteArray_TA2GenericApp_CATSShield(void *p);
   static void destruct_TA2GenericApp_CATSShield(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GenericApp_CATSShield*)
   {
      ::TA2GenericApp_CATSShield *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GenericApp_CATSShield >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GenericApp_CATSShield", ::TA2GenericApp_CATSShield::Class_Version(), "TA2GenericApp_CATSShield.h", 8,
                  typeid(::TA2GenericApp_CATSShield), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GenericApp_CATSShield::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GenericApp_CATSShield) );
      instance.SetDelete(&delete_TA2GenericApp_CATSShield);
      instance.SetDeleteArray(&deleteArray_TA2GenericApp_CATSShield);
      instance.SetDestructor(&destruct_TA2GenericApp_CATSShield);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GenericApp_CATSShield*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GenericApp_CATSShield*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GenericApp_CATSShield*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2FPMicro(void *p);
   static void deleteArray_TA2FPMicro(void *p);
   static void destruct_TA2FPMicro(void *p);
   static void streamer_TA2FPMicro(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2FPMicro*)
   {
      ::TA2FPMicro *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2FPMicro >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2FPMicro", ::TA2FPMicro::Class_Version(), "TA2FPMicro.h", 19,
                  typeid(::TA2FPMicro), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2FPMicro::Dictionary, isa_proxy, 16,
                  sizeof(::TA2FPMicro) );
      instance.SetDelete(&delete_TA2FPMicro);
      instance.SetDeleteArray(&deleteArray_TA2FPMicro);
      instance.SetDestructor(&destruct_TA2FPMicro);
      instance.SetStreamerFunc(&streamer_TA2FPMicro);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2FPMicro*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2FPMicro*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2FPMicro*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GenericApp(void *p);
   static void deleteArray_TA2GenericApp(void *p);
   static void destruct_TA2GenericApp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GenericApp*)
   {
      ::TA2GenericApp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GenericApp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GenericApp", ::TA2GenericApp::Class_Version(), "TA2GenericApp.h", 25,
                  typeid(::TA2GenericApp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GenericApp::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GenericApp) );
      instance.SetDelete(&delete_TA2GenericApp);
      instance.SetDeleteArray(&deleteArray_TA2GenericApp);
      instance.SetDestructor(&destruct_TA2GenericApp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GenericApp*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GenericApp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GenericApp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CATSPhysics(void *p);
   static void deleteArray_TA2CATSPhysics(void *p);
   static void destruct_TA2CATSPhysics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CATSPhysics*)
   {
      ::TA2CATSPhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CATSPhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CATSPhysics", ::TA2CATSPhysics::Class_Version(), "TA2CATSPhysics.h", 38,
                  typeid(::TA2CATSPhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CATSPhysics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CATSPhysics) );
      instance.SetDelete(&delete_TA2CATSPhysics);
      instance.SetDeleteArray(&deleteArray_TA2CATSPhysics);
      instance.SetDestructor(&destruct_TA2CATSPhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CATSPhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CATSPhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CATSPhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TA2KFParticle(void *p = nullptr);
   static void *newArray_TA2KFParticle(Long_t size, void *p);
   static void delete_TA2KFParticle(void *p);
   static void deleteArray_TA2KFParticle(void *p);
   static void destruct_TA2KFParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2KFParticle*)
   {
      ::TA2KFParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2KFParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2KFParticle", ::TA2KFParticle::Class_Version(), "TA2KFParticle.h", 8,
                  typeid(::TA2KFParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2KFParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TA2KFParticle) );
      instance.SetNew(&new_TA2KFParticle);
      instance.SetNewArray(&newArray_TA2KFParticle);
      instance.SetDelete(&delete_TA2KFParticle);
      instance.SetDeleteArray(&deleteArray_TA2KFParticle);
      instance.SetDestructor(&destruct_TA2KFParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2KFParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2KFParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2KFParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TA2CBKinematicFitter(void *p = nullptr);
   static void *newArray_TA2CBKinematicFitter(Long_t size, void *p);
   static void delete_TA2CBKinematicFitter(void *p);
   static void deleteArray_TA2CBKinematicFitter(void *p);
   static void destruct_TA2CBKinematicFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CBKinematicFitter*)
   {
      ::TA2CBKinematicFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CBKinematicFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CBKinematicFitter", ::TA2CBKinematicFitter::Class_Version(), "TA2CBKinematicFitter.h", 10,
                  typeid(::TA2CBKinematicFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CBKinematicFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CBKinematicFitter) );
      instance.SetNew(&new_TA2CBKinematicFitter);
      instance.SetNewArray(&newArray_TA2CBKinematicFitter);
      instance.SetDelete(&delete_TA2CBKinematicFitter);
      instance.SetDeleteArray(&deleteArray_TA2CBKinematicFitter);
      instance.SetDestructor(&destruct_TA2CBKinematicFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CBKinematicFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CBKinematicFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CBKinematicFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2CosmicCal(void *p);
   static void deleteArray_TA2CosmicCal(void *p);
   static void destruct_TA2CosmicCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2CosmicCal*)
   {
      ::TA2CosmicCal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2CosmicCal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2CosmicCal", ::TA2CosmicCal::Class_Version(), "TA2CosmicCal.h", 19,
                  typeid(::TA2CosmicCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2CosmicCal::Dictionary, isa_proxy, 4,
                  sizeof(::TA2CosmicCal) );
      instance.SetDelete(&delete_TA2CosmicCal);
      instance.SetDeleteArray(&deleteArray_TA2CosmicCal);
      instance.SetDestructor(&destruct_TA2CosmicCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2CosmicCal*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2CosmicCal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2CosmicCal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GeomCalibPhysics(void *p);
   static void deleteArray_TA2GeomCalibPhysics(void *p);
   static void destruct_TA2GeomCalibPhysics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GeomCalibPhysics*)
   {
      ::TA2GeomCalibPhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GeomCalibPhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GeomCalibPhysics", ::TA2GeomCalibPhysics::Class_Version(), "TA2GeomCalibPhysics.h", 13,
                  typeid(::TA2GeomCalibPhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GeomCalibPhysics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GeomCalibPhysics) );
      instance.SetDelete(&delete_TA2GeomCalibPhysics);
      instance.SetDeleteArray(&deleteArray_TA2GeomCalibPhysics);
      instance.SetDestructor(&destruct_TA2GeomCalibPhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GeomCalibPhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GeomCalibPhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GeomCalibPhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2GoAT(void *p);
   static void deleteArray_TA2GoAT(void *p);
   static void destruct_TA2GoAT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2GoAT*)
   {
      ::TA2GoAT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2GoAT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2GoAT", ::TA2GoAT::Class_Version(), "TA2GoAT.h", 37,
                  typeid(::TA2GoAT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2GoAT::Dictionary, isa_proxy, 4,
                  sizeof(::TA2GoAT) );
      instance.SetDelete(&delete_TA2GoAT);
      instance.SetDeleteArray(&deleteArray_TA2GoAT);
      instance.SetDestructor(&destruct_TA2GoAT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2GoAT*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2GoAT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2GoAT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2MesonPhysics(void *p);
   static void deleteArray_TA2MesonPhysics(void *p);
   static void destruct_TA2MesonPhysics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2MesonPhysics*)
   {
      ::TA2MesonPhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2MesonPhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2MesonPhysics", ::TA2MesonPhysics::Class_Version(), "TA2MesonPhysics.h", 13,
                  typeid(::TA2MesonPhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2MesonPhysics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2MesonPhysics) );
      instance.SetDelete(&delete_TA2MesonPhysics);
      instance.SetDeleteArray(&deleteArray_TA2MesonPhysics);
      instance.SetDestructor(&destruct_TA2MesonPhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2MesonPhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2MesonPhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2MesonPhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2MyPhysics(void *p);
   static void deleteArray_TA2MyPhysics(void *p);
   static void destruct_TA2MyPhysics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2MyPhysics*)
   {
      ::TA2MyPhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2MyPhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2MyPhysics", ::TA2MyPhysics::Class_Version(), "TA2MyPhysics.h", 126,
                  typeid(::TA2MyPhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2MyPhysics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2MyPhysics) );
      instance.SetDelete(&delete_TA2MyPhysics);
      instance.SetDeleteArray(&deleteArray_TA2MyPhysics);
      instance.SetDestructor(&destruct_TA2MyPhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2MyPhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2MyPhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2MyPhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2MyCaLib(void *p);
   static void deleteArray_TA2MyCaLib(void *p);
   static void destruct_TA2MyCaLib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2MyCaLib*)
   {
      ::TA2MyCaLib *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2MyCaLib >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2MyCaLib", ::TA2MyCaLib::Class_Version(), "TA2MyCaLib.h", 107,
                  typeid(::TA2MyCaLib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2MyCaLib::Dictionary, isa_proxy, 4,
                  sizeof(::TA2MyCaLib) );
      instance.SetDelete(&delete_TA2MyCaLib);
      instance.SetDeleteArray(&deleteArray_TA2MyCaLib);
      instance.SetDestructor(&destruct_TA2MyCaLib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2MyCaLib*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2MyCaLib*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2MyCaLib*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2OnlinePhys(void *p);
   static void deleteArray_TA2OnlinePhys(void *p);
   static void destruct_TA2OnlinePhys(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2OnlinePhys*)
   {
      ::TA2OnlinePhys *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2OnlinePhys >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2OnlinePhys", ::TA2OnlinePhys::Class_Version(), "TA2OnlinePhys.h", 33,
                  typeid(::TA2OnlinePhys), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2OnlinePhys::Dictionary, isa_proxy, 4,
                  sizeof(::TA2OnlinePhys) );
      instance.SetDelete(&delete_TA2OnlinePhys);
      instance.SetDeleteArray(&deleteArray_TA2OnlinePhys);
      instance.SetDestructor(&destruct_TA2OnlinePhys);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2OnlinePhys*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2OnlinePhys*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2OnlinePhys*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2Pi0Compton(void *p);
   static void deleteArray_TA2Pi0Compton(void *p);
   static void destruct_TA2Pi0Compton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2Pi0Compton*)
   {
      ::TA2Pi0Compton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2Pi0Compton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2Pi0Compton", ::TA2Pi0Compton::Class_Version(), "TA2Pi0Compton.h", 33,
                  typeid(::TA2Pi0Compton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2Pi0Compton::Dictionary, isa_proxy, 4,
                  sizeof(::TA2Pi0Compton) );
      instance.SetDelete(&delete_TA2Pi0Compton);
      instance.SetDeleteArray(&deleteArray_TA2Pi0Compton);
      instance.SetDestructor(&destruct_TA2Pi0Compton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2Pi0Compton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2Pi0Compton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2Pi0Compton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2PlasticVETO(void *p);
   static void deleteArray_TA2PlasticVETO(void *p);
   static void destruct_TA2PlasticVETO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2PlasticVETO*)
   {
      ::TA2PlasticVETO *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2PlasticVETO >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2PlasticVETO", ::TA2PlasticVETO::Class_Version(), "TA2PlasticVETO.h", 23,
                  typeid(::TA2PlasticVETO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2PlasticVETO::Dictionary, isa_proxy, 4,
                  sizeof(::TA2PlasticVETO) );
      instance.SetDelete(&delete_TA2PlasticVETO);
      instance.SetDeleteArray(&deleteArray_TA2PlasticVETO);
      instance.SetDestructor(&destruct_TA2PlasticVETO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2PlasticVETO*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2PlasticVETO*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2PlasticVETO*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2TAPSAnalysis(void *p);
   static void deleteArray_TA2TAPSAnalysis(void *p);
   static void destruct_TA2TAPSAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2TAPSAnalysis*)
   {
      ::TA2TAPSAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2TAPSAnalysis >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2TAPSAnalysis", ::TA2TAPSAnalysis::Class_Version(), "TA2TAPSAnalysis.h", 25,
                  typeid(::TA2TAPSAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2TAPSAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::TA2TAPSAnalysis) );
      instance.SetDelete(&delete_TA2TAPSAnalysis);
      instance.SetDeleteArray(&deleteArray_TA2TAPSAnalysis);
      instance.SetDestructor(&destruct_TA2TAPSAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2TAPSAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2TAPSAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2TAPSAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2TriggerPhysics(void *p);
   static void deleteArray_TA2TriggerPhysics(void *p);
   static void destruct_TA2TriggerPhysics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2TriggerPhysics*)
   {
      ::TA2TriggerPhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2TriggerPhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2TriggerPhysics", ::TA2TriggerPhysics::Class_Version(), "TA2TriggerPhysics.h", 16,
                  typeid(::TA2TriggerPhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2TriggerPhysics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2TriggerPhysics) );
      instance.SetDelete(&delete_TA2TriggerPhysics);
      instance.SetDeleteArray(&deleteArray_TA2TriggerPhysics);
      instance.SetDestructor(&destruct_TA2TriggerPhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2TriggerPhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2TriggerPhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2TriggerPhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TA2UserPhysics(void *p);
   static void deleteArray_TA2UserPhysics(void *p);
   static void destruct_TA2UserPhysics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TA2UserPhysics*)
   {
      ::TA2UserPhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TA2UserPhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TA2UserPhysics", ::TA2UserPhysics::Class_Version(), "TA2UserPhysics.h", 20,
                  typeid(::TA2UserPhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TA2UserPhysics::Dictionary, isa_proxy, 4,
                  sizeof(::TA2UserPhysics) );
      instance.SetDelete(&delete_TA2UserPhysics);
      instance.SetDeleteArray(&deleteArray_TA2UserPhysics);
      instance.SetDestructor(&destruct_TA2UserPhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TA2UserPhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::TA2UserPhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TA2UserPhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TA2TAPS_BaF2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2TAPS_BaF2::Class_Name()
{
   return "TA2TAPS_BaF2";
}

//______________________________________________________________________________
const char *TA2TAPS_BaF2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPS_BaF2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2TAPS_BaF2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPS_BaF2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2TAPS_BaF2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPS_BaF2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2TAPS_BaF2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPS_BaF2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CylMwpcLayer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CylMwpcLayer::Class_Name()
{
   return "TA2CylMwpcLayer";
}

//______________________________________________________________________________
const char *TA2CylMwpcLayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcLayer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CylMwpcLayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcLayer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CylMwpcLayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcLayer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CylMwpcLayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcLayer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CylMwpcStrip::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CylMwpcStrip::Class_Name()
{
   return "TA2CylMwpcStrip";
}

//______________________________________________________________________________
const char *TA2CylMwpcStrip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcStrip*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CylMwpcStrip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcStrip*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CylMwpcStrip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcStrip*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CylMwpcStrip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcStrip*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CylMwpcWire::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CylMwpcWire::Class_Name()
{
   return "TA2CylMwpcWire";
}

//______________________________________________________________________________
const char *TA2CylMwpcWire::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcWire*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CylMwpcWire::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcWire*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CylMwpcWire::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcWire*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CylMwpcWire::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpcWire*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2TrackLine::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2TrackLine::Class_Name()
{
   return "TA2TrackLine";
}

//______________________________________________________________________________
const char *TA2TrackLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TrackLine*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2TrackLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TrackLine*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2TrackLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TrackLine*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2TrackLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TrackLine*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2MwpcTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2MwpcTrack::Class_Name()
{
   return "TA2MwpcTrack";
}

//______________________________________________________________________________
const char *TA2MwpcTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MwpcTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2MwpcTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MwpcTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2MwpcTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MwpcTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2MwpcTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MwpcTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2MwpcIntersection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2MwpcIntersection::Class_Name()
{
   return "TA2MwpcIntersection";
}

//______________________________________________________________________________
const char *TA2MwpcIntersection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MwpcIntersection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2MwpcIntersection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MwpcIntersection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2MwpcIntersection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MwpcIntersection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2MwpcIntersection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MwpcIntersection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CylMwpc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CylMwpc::Class_Name()
{
   return "TA2CylMwpc";
}

//______________________________________________________________________________
const char *TA2CylMwpc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CylMwpc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CylMwpc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CylMwpc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CylMwpc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CentralTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CentralTrack::Class_Name()
{
   return "TA2CentralTrack";
}

//______________________________________________________________________________
const char *TA2CentralTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CentralTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CentralTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CentralTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CentralTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CentralTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CentralTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CentralTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CentralApparatus::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CentralApparatus::Class_Name()
{
   return "TA2CentralApparatus";
}

//______________________________________________________________________________
const char *TA2CentralApparatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CentralApparatus*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CentralApparatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CentralApparatus*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CentralApparatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CentralApparatus*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CentralApparatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CentralApparatus*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2PlasticPID::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2PlasticPID::Class_Name()
{
   return "TA2PlasticPID";
}

//______________________________________________________________________________
const char *TA2PlasticPID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2PlasticPID*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2PlasticPID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2PlasticPID*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2PlasticPID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2PlasticPID*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2PlasticPID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2PlasticPID*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2UserAnalysis::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2UserAnalysis::Class_Name()
{
   return "TA2UserAnalysis";
}

//______________________________________________________________________________
const char *TA2UserAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2UserAnalysis*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2UserAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2UserAnalysis*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2UserAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2UserAnalysis*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2UserAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2UserAnalysis*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2UserControl::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2UserControl::Class_Name()
{
   return "TA2UserControl";
}

//______________________________________________________________________________
const char *TA2UserControl::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2UserControl*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2UserControl::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2UserControl*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2UserControl::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2UserControl*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2UserControl::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2UserControl*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CalArray::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CalArray::Class_Name()
{
   return "TA2CalArray";
}

//______________________________________________________________________________
const char *TA2CalArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CalArray*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CalArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CalArray*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CalArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CalArray*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CalArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CalArray*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CrystalBall::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CrystalBall::Class_Name()
{
   return "TA2CrystalBall";
}

//______________________________________________________________________________
const char *TA2CrystalBall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CrystalBall*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CrystalBall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CrystalBall*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CrystalBall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CrystalBall*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CrystalBall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CrystalBall*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2TAPS_Veto::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2TAPS_Veto::Class_Name()
{
   return "TA2TAPS_Veto";
}

//______________________________________________________________________________
const char *TA2TAPS_Veto::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPS_Veto*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2TAPS_Veto::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPS_Veto*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2TAPS_Veto::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPS_Veto*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2TAPS_Veto::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPS_Veto*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Calorimeter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Calorimeter::Class_Name()
{
   return "TA2Calorimeter";
}

//______________________________________________________________________________
const char *TA2Calorimeter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Calorimeter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Calorimeter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Calorimeter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Calorimeter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Calorimeter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Calorimeter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Calorimeter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Taps::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Taps::Class_Name()
{
   return "TA2Taps";
}

//______________________________________________________________________________
const char *TA2Taps::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Taps*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Taps::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Taps*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Taps::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Taps*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Taps::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Taps*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2LinearPolEpics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2LinearPolEpics::Class_Name()
{
   return "TA2LinearPolEpics";
}

//______________________________________________________________________________
const char *TA2LinearPolEpics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2LinearPolEpics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2LinearPolEpics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2LinearPolEpics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2LinearPolEpics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2LinearPolEpics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2LinearPolEpics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2LinearPolEpics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2PairSpec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2PairSpec::Class_Name()
{
   return "TA2PairSpec";
}

//______________________________________________________________________________
const char *TA2PairSpec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2PairSpec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2PairSpec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2PairSpec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2PairSpec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2PairSpec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2PairSpec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2PairSpec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Moeller::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Moeller::Class_Name()
{
   return "TA2Moeller";
}

//______________________________________________________________________________
const char *TA2Moeller::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Moeller*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Moeller::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Moeller*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Moeller::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Moeller*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Moeller::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Moeller*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2AccessSQL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2AccessSQL::Class_Name()
{
   return "TA2AccessSQL";
}

//______________________________________________________________________________
const char *TA2AccessSQL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2AccessSQL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2AccessSQL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2AccessSQL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2AccessSQL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2AccessSQL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2AccessSQL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2AccessSQL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CB::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CB::Class_Name()
{
   return "TA2CB";
}

//______________________________________________________________________________
const char *TA2CB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CB*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CB*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CB*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CB*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Event::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Event::Class_Name()
{
   return "TA2Event";
}

//______________________________________________________________________________
const char *TA2Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Event*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Event*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Event*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Event*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2BasePhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2BasePhysics::Class_Name()
{
   return "TA2BasePhysics";
}

//______________________________________________________________________________
const char *TA2BasePhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2BasePhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2BasePhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2BasePhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2BasePhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2BasePhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2BasePhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2BasePhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2BeamPolMon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2BeamPolMon::Class_Name()
{
   return "TA2BeamPolMon";
}

//______________________________________________________________________________
const char *TA2BeamPolMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2BeamPolMon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2BeamPolMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2BeamPolMon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2BeamPolMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2BeamPolMon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2BeamPolMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2BeamPolMon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GenericApp_CATSCore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GenericApp_CATSCore::Class_Name()
{
   return "TA2GenericApp_CATSCore";
}

//______________________________________________________________________________
const char *TA2GenericApp_CATSCore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSCore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GenericApp_CATSCore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSCore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GenericApp_CATSCore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSCore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GenericApp_CATSCore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSCore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GenericApp_CATSAnnulus::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GenericApp_CATSAnnulus::Class_Name()
{
   return "TA2GenericApp_CATSAnnulus";
}

//______________________________________________________________________________
const char *TA2GenericApp_CATSAnnulus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSAnnulus*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GenericApp_CATSAnnulus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSAnnulus*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GenericApp_CATSAnnulus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSAnnulus*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GenericApp_CATSAnnulus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSAnnulus*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GenericApp_CATSShield::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GenericApp_CATSShield::Class_Name()
{
   return "TA2GenericApp_CATSShield";
}

//______________________________________________________________________________
const char *TA2GenericApp_CATSShield::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSShield*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GenericApp_CATSShield::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSShield*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GenericApp_CATSShield::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSShield*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GenericApp_CATSShield::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp_CATSShield*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2FPMicro::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2FPMicro::Class_Name()
{
   return "TA2FPMicro";
}

//______________________________________________________________________________
const char *TA2FPMicro::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2FPMicro*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2FPMicro::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2FPMicro*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2FPMicro::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2FPMicro*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2FPMicro::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2FPMicro*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GenericApp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GenericApp::Class_Name()
{
   return "TA2GenericApp";
}

//______________________________________________________________________________
const char *TA2GenericApp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GenericApp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GenericApp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GenericApp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GenericApp*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CATSPhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CATSPhysics::Class_Name()
{
   return "TA2CATSPhysics";
}

//______________________________________________________________________________
const char *TA2CATSPhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CATSPhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CATSPhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CATSPhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CATSPhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CATSPhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CATSPhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CATSPhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2KFParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2KFParticle::Class_Name()
{
   return "TA2KFParticle";
}

//______________________________________________________________________________
const char *TA2KFParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2KFParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2KFParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2KFParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2KFParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2KFParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2KFParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2KFParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CBKinematicFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CBKinematicFitter::Class_Name()
{
   return "TA2CBKinematicFitter";
}

//______________________________________________________________________________
const char *TA2CBKinematicFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CBKinematicFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CBKinematicFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CBKinematicFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CBKinematicFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CBKinematicFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CBKinematicFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CBKinematicFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2CosmicCal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2CosmicCal::Class_Name()
{
   return "TA2CosmicCal";
}

//______________________________________________________________________________
const char *TA2CosmicCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CosmicCal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2CosmicCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2CosmicCal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2CosmicCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CosmicCal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2CosmicCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2CosmicCal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GeomCalibPhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GeomCalibPhysics::Class_Name()
{
   return "TA2GeomCalibPhysics";
}

//______________________________________________________________________________
const char *TA2GeomCalibPhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GeomCalibPhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GeomCalibPhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GeomCalibPhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GeomCalibPhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GeomCalibPhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GeomCalibPhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GeomCalibPhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2GoAT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2GoAT::Class_Name()
{
   return "TA2GoAT";
}

//______________________________________________________________________________
const char *TA2GoAT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GoAT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2GoAT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2GoAT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2GoAT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GoAT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2GoAT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2GoAT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2MesonPhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2MesonPhysics::Class_Name()
{
   return "TA2MesonPhysics";
}

//______________________________________________________________________________
const char *TA2MesonPhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MesonPhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2MesonPhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MesonPhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2MesonPhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MesonPhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2MesonPhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MesonPhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2MyPhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2MyPhysics::Class_Name()
{
   return "TA2MyPhysics";
}

//______________________________________________________________________________
const char *TA2MyPhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MyPhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2MyPhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MyPhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2MyPhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MyPhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2MyPhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MyPhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2MyCaLib::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2MyCaLib::Class_Name()
{
   return "TA2MyCaLib";
}

//______________________________________________________________________________
const char *TA2MyCaLib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MyCaLib*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2MyCaLib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2MyCaLib*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2MyCaLib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MyCaLib*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2MyCaLib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2MyCaLib*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2OnlinePhys::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2OnlinePhys::Class_Name()
{
   return "TA2OnlinePhys";
}

//______________________________________________________________________________
const char *TA2OnlinePhys::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2OnlinePhys*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2OnlinePhys::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2OnlinePhys*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2OnlinePhys::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2OnlinePhys*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2OnlinePhys::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2OnlinePhys*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2Pi0Compton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2Pi0Compton::Class_Name()
{
   return "TA2Pi0Compton";
}

//______________________________________________________________________________
const char *TA2Pi0Compton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Pi0Compton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2Pi0Compton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2Pi0Compton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2Pi0Compton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Pi0Compton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2Pi0Compton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2Pi0Compton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2PlasticVETO::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2PlasticVETO::Class_Name()
{
   return "TA2PlasticVETO";
}

//______________________________________________________________________________
const char *TA2PlasticVETO::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2PlasticVETO*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2PlasticVETO::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2PlasticVETO*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2PlasticVETO::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2PlasticVETO*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2PlasticVETO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2PlasticVETO*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2TAPSAnalysis::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2TAPSAnalysis::Class_Name()
{
   return "TA2TAPSAnalysis";
}

//______________________________________________________________________________
const char *TA2TAPSAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSAnalysis*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2TAPSAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSAnalysis*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2TAPSAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSAnalysis*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2TAPSAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TAPSAnalysis*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2TriggerPhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2TriggerPhysics::Class_Name()
{
   return "TA2TriggerPhysics";
}

//______________________________________________________________________________
const char *TA2TriggerPhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TriggerPhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2TriggerPhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2TriggerPhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2TriggerPhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TriggerPhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2TriggerPhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2TriggerPhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TA2UserPhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TA2UserPhysics::Class_Name()
{
   return "TA2UserPhysics";
}

//______________________________________________________________________________
const char *TA2UserPhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2UserPhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TA2UserPhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TA2UserPhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TA2UserPhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2UserPhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TA2UserPhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TA2UserPhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TA2TAPS_BaF2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2TAPS_BaF2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2TAPS_BaF2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2TAPS_BaF2::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2TAPS_BaF2(void *p) {
      delete (static_cast<::TA2TAPS_BaF2*>(p));
   }
   static void deleteArray_TA2TAPS_BaF2(void *p) {
      delete [] (static_cast<::TA2TAPS_BaF2*>(p));
   }
   static void destruct_TA2TAPS_BaF2(void *p) {
      typedef ::TA2TAPS_BaF2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2TAPS_BaF2

//______________________________________________________________________________
void TA2CylMwpcLayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CylMwpcLayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CylMwpcLayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CylMwpcLayer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CylMwpcLayer(void *p) {
      delete (static_cast<::TA2CylMwpcLayer*>(p));
   }
   static void deleteArray_TA2CylMwpcLayer(void *p) {
      delete [] (static_cast<::TA2CylMwpcLayer*>(p));
   }
   static void destruct_TA2CylMwpcLayer(void *p) {
      typedef ::TA2CylMwpcLayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CylMwpcLayer

//______________________________________________________________________________
void TA2CylMwpcStrip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CylMwpcStrip.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CylMwpcStrip::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CylMwpcStrip::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CylMwpcStrip(void *p) {
      delete (static_cast<::TA2CylMwpcStrip*>(p));
   }
   static void deleteArray_TA2CylMwpcStrip(void *p) {
      delete [] (static_cast<::TA2CylMwpcStrip*>(p));
   }
   static void destruct_TA2CylMwpcStrip(void *p) {
      typedef ::TA2CylMwpcStrip current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CylMwpcStrip

//______________________________________________________________________________
void TA2CylMwpcWire::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CylMwpcWire.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TA2CylMwpcLayer::Streamer(R__b);
      R__b >> fRadius;
      R__b >> fLength;
      R__b >> fPhiSpace;
      R__b.CheckByteCount(R__s, R__c, TA2CylMwpcWire::IsA());
   } else {
      R__c = R__b.WriteVersion(TA2CylMwpcWire::IsA(), kTRUE);
      TA2CylMwpcLayer::Streamer(R__b);
      R__b << fRadius;
      R__b << fLength;
      R__b << fPhiSpace;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CylMwpcWire(void *p) {
      delete (static_cast<::TA2CylMwpcWire*>(p));
   }
   static void deleteArray_TA2CylMwpcWire(void *p) {
      delete [] (static_cast<::TA2CylMwpcWire*>(p));
   }
   static void destruct_TA2CylMwpcWire(void *p) {
      typedef ::TA2CylMwpcWire current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TA2CylMwpcWire(TBuffer &buf, void *obj) {
      ((::TA2CylMwpcWire*)obj)->::TA2CylMwpcWire::Streamer(buf);
   }
} // end of namespace ROOT for class ::TA2CylMwpcWire

//______________________________________________________________________________
void TA2TrackLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2TrackLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2TrackLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2TrackLine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TA2TrackLine(void *p) {
      return  p ? new(p) ::TA2TrackLine : new ::TA2TrackLine;
   }
   static void *newArray_TA2TrackLine(Long_t nElements, void *p) {
      return p ? new(p) ::TA2TrackLine[nElements] : new ::TA2TrackLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TA2TrackLine(void *p) {
      delete (static_cast<::TA2TrackLine*>(p));
   }
   static void deleteArray_TA2TrackLine(void *p) {
      delete [] (static_cast<::TA2TrackLine*>(p));
   }
   static void destruct_TA2TrackLine(void *p) {
      typedef ::TA2TrackLine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2TrackLine

//______________________________________________________________________________
void TA2MwpcTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2MwpcTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2MwpcTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2MwpcTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TA2MwpcTrack(void *p) {
      return  p ? new(p) ::TA2MwpcTrack : new ::TA2MwpcTrack;
   }
   static void *newArray_TA2MwpcTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TA2MwpcTrack[nElements] : new ::TA2MwpcTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TA2MwpcTrack(void *p) {
      delete (static_cast<::TA2MwpcTrack*>(p));
   }
   static void deleteArray_TA2MwpcTrack(void *p) {
      delete [] (static_cast<::TA2MwpcTrack*>(p));
   }
   static void destruct_TA2MwpcTrack(void *p) {
      typedef ::TA2MwpcTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2MwpcTrack

//______________________________________________________________________________
void TA2MwpcIntersection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2MwpcIntersection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2MwpcIntersection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2MwpcIntersection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TA2MwpcIntersection(void *p) {
      return  p ? new(p) ::TA2MwpcIntersection : new ::TA2MwpcIntersection;
   }
   static void *newArray_TA2MwpcIntersection(Long_t nElements, void *p) {
      return p ? new(p) ::TA2MwpcIntersection[nElements] : new ::TA2MwpcIntersection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TA2MwpcIntersection(void *p) {
      delete (static_cast<::TA2MwpcIntersection*>(p));
   }
   static void deleteArray_TA2MwpcIntersection(void *p) {
      delete [] (static_cast<::TA2MwpcIntersection*>(p));
   }
   static void destruct_TA2MwpcIntersection(void *p) {
      typedef ::TA2MwpcIntersection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2MwpcIntersection

//______________________________________________________________________________
void TA2CylMwpc::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CylMwpc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CylMwpc::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CylMwpc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CylMwpc(void *p) {
      delete (static_cast<::TA2CylMwpc*>(p));
   }
   static void deleteArray_TA2CylMwpc(void *p) {
      delete [] (static_cast<::TA2CylMwpc*>(p));
   }
   static void destruct_TA2CylMwpc(void *p) {
      typedef ::TA2CylMwpc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CylMwpc

//______________________________________________________________________________
void TA2CentralTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CentralTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CentralTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CentralTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TA2CentralTrack(void *p) {
      return  p ? new(p) ::TA2CentralTrack : new ::TA2CentralTrack;
   }
   static void *newArray_TA2CentralTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TA2CentralTrack[nElements] : new ::TA2CentralTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TA2CentralTrack(void *p) {
      delete (static_cast<::TA2CentralTrack*>(p));
   }
   static void deleteArray_TA2CentralTrack(void *p) {
      delete [] (static_cast<::TA2CentralTrack*>(p));
   }
   static void destruct_TA2CentralTrack(void *p) {
      typedef ::TA2CentralTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CentralTrack

//______________________________________________________________________________
void TA2CentralApparatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CentralApparatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CentralApparatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CentralApparatus::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CentralApparatus(void *p) {
      delete (static_cast<::TA2CentralApparatus*>(p));
   }
   static void deleteArray_TA2CentralApparatus(void *p) {
      delete [] (static_cast<::TA2CentralApparatus*>(p));
   }
   static void destruct_TA2CentralApparatus(void *p) {
      typedef ::TA2CentralApparatus current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CentralApparatus

//______________________________________________________________________________
void TA2PlasticPID::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2PlasticPID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2PlasticPID::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2PlasticPID::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2PlasticPID(void *p) {
      delete (static_cast<::TA2PlasticPID*>(p));
   }
   static void deleteArray_TA2PlasticPID(void *p) {
      delete [] (static_cast<::TA2PlasticPID*>(p));
   }
   static void destruct_TA2PlasticPID(void *p) {
      typedef ::TA2PlasticPID current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2PlasticPID

//______________________________________________________________________________
void TA2UserAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2UserAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2UserAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2UserAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2UserAnalysis(void *p) {
      delete (static_cast<::TA2UserAnalysis*>(p));
   }
   static void deleteArray_TA2UserAnalysis(void *p) {
      delete [] (static_cast<::TA2UserAnalysis*>(p));
   }
   static void destruct_TA2UserAnalysis(void *p) {
      typedef ::TA2UserAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2UserAnalysis

//______________________________________________________________________________
void TA2UserControl::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2UserControl.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2UserControl::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2UserControl::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2UserControl(void *p) {
      delete (static_cast<::TA2UserControl*>(p));
   }
   static void deleteArray_TA2UserControl(void *p) {
      delete [] (static_cast<::TA2UserControl*>(p));
   }
   static void destruct_TA2UserControl(void *p) {
      typedef ::TA2UserControl current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2UserControl

//______________________________________________________________________________
void TA2CalArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CalArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CalArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CalArray::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CalArray(void *p) {
      delete (static_cast<::TA2CalArray*>(p));
   }
   static void deleteArray_TA2CalArray(void *p) {
      delete [] (static_cast<::TA2CalArray*>(p));
   }
   static void destruct_TA2CalArray(void *p) {
      typedef ::TA2CalArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CalArray

//______________________________________________________________________________
void TA2CrystalBall::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CrystalBall.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CrystalBall::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CrystalBall::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CrystalBall(void *p) {
      delete (static_cast<::TA2CrystalBall*>(p));
   }
   static void deleteArray_TA2CrystalBall(void *p) {
      delete [] (static_cast<::TA2CrystalBall*>(p));
   }
   static void destruct_TA2CrystalBall(void *p) {
      typedef ::TA2CrystalBall current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CrystalBall

//______________________________________________________________________________
void TA2TAPS_Veto::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2TAPS_Veto.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2TAPS_Veto::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2TAPS_Veto::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2TAPS_Veto(void *p) {
      delete (static_cast<::TA2TAPS_Veto*>(p));
   }
   static void deleteArray_TA2TAPS_Veto(void *p) {
      delete [] (static_cast<::TA2TAPS_Veto*>(p));
   }
   static void destruct_TA2TAPS_Veto(void *p) {
      typedef ::TA2TAPS_Veto current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2TAPS_Veto

//______________________________________________________________________________
void TA2Calorimeter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Calorimeter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Calorimeter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Calorimeter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Calorimeter(void *p) {
      delete (static_cast<::TA2Calorimeter*>(p));
   }
   static void deleteArray_TA2Calorimeter(void *p) {
      delete [] (static_cast<::TA2Calorimeter*>(p));
   }
   static void destruct_TA2Calorimeter(void *p) {
      typedef ::TA2Calorimeter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Calorimeter

//______________________________________________________________________________
void TA2Taps::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Taps.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Taps::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Taps::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Taps(void *p) {
      delete (static_cast<::TA2Taps*>(p));
   }
   static void deleteArray_TA2Taps(void *p) {
      delete [] (static_cast<::TA2Taps*>(p));
   }
   static void destruct_TA2Taps(void *p) {
      typedef ::TA2Taps current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Taps

//______________________________________________________________________________
void TA2LinearPolEpics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2LinearPolEpics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2LinearPolEpics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2LinearPolEpics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2LinearPolEpics(void *p) {
      delete (static_cast<::TA2LinearPolEpics*>(p));
   }
   static void deleteArray_TA2LinearPolEpics(void *p) {
      delete [] (static_cast<::TA2LinearPolEpics*>(p));
   }
   static void destruct_TA2LinearPolEpics(void *p) {
      typedef ::TA2LinearPolEpics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2LinearPolEpics

//______________________________________________________________________________
void TA2PairSpec::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2PairSpec.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2PairSpec::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2PairSpec::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2PairSpec(void *p) {
      delete (static_cast<::TA2PairSpec*>(p));
   }
   static void deleteArray_TA2PairSpec(void *p) {
      delete [] (static_cast<::TA2PairSpec*>(p));
   }
   static void destruct_TA2PairSpec(void *p) {
      typedef ::TA2PairSpec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2PairSpec

//______________________________________________________________________________
void TA2Moeller::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Moeller.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Moeller::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Moeller::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Moeller(void *p) {
      delete (static_cast<::TA2Moeller*>(p));
   }
   static void deleteArray_TA2Moeller(void *p) {
      delete [] (static_cast<::TA2Moeller*>(p));
   }
   static void destruct_TA2Moeller(void *p) {
      typedef ::TA2Moeller current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Moeller

//______________________________________________________________________________
void TA2AccessSQL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2AccessSQL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2AccessSQL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2AccessSQL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2AccessSQL(void *p) {
      delete (static_cast<::TA2AccessSQL*>(p));
   }
   static void deleteArray_TA2AccessSQL(void *p) {
      delete [] (static_cast<::TA2AccessSQL*>(p));
   }
   static void destruct_TA2AccessSQL(void *p) {
      typedef ::TA2AccessSQL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2AccessSQL

//______________________________________________________________________________
void TA2CB::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CB.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CB::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CB::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CB(void *p) {
      delete (static_cast<::TA2CB*>(p));
   }
   static void deleteArray_TA2CB(void *p) {
      delete [] (static_cast<::TA2CB*>(p));
   }
   static void destruct_TA2CB(void *p) {
      typedef ::TA2CB current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CB

//______________________________________________________________________________
void TA2Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Event::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Event::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TA2Event(void *p) {
      return  p ? new(p) ::TA2Event : new ::TA2Event;
   }
   static void *newArray_TA2Event(Long_t nElements, void *p) {
      return p ? new(p) ::TA2Event[nElements] : new ::TA2Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_TA2Event(void *p) {
      delete (static_cast<::TA2Event*>(p));
   }
   static void deleteArray_TA2Event(void *p) {
      delete [] (static_cast<::TA2Event*>(p));
   }
   static void destruct_TA2Event(void *p) {
      typedef ::TA2Event current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Event

//______________________________________________________________________________
void TA2BasePhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2BasePhysics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2BasePhysics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2BasePhysics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2BasePhysics(void *p) {
      delete (static_cast<::TA2BasePhysics*>(p));
   }
   static void deleteArray_TA2BasePhysics(void *p) {
      delete [] (static_cast<::TA2BasePhysics*>(p));
   }
   static void destruct_TA2BasePhysics(void *p) {
      typedef ::TA2BasePhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2BasePhysics

//______________________________________________________________________________
void TA2BeamPolMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2BeamPolMon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2BeamPolMon::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2BeamPolMon::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2BeamPolMon(void *p) {
      delete (static_cast<::TA2BeamPolMon*>(p));
   }
   static void deleteArray_TA2BeamPolMon(void *p) {
      delete [] (static_cast<::TA2BeamPolMon*>(p));
   }
   static void destruct_TA2BeamPolMon(void *p) {
      typedef ::TA2BeamPolMon current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2BeamPolMon

//______________________________________________________________________________
void TA2GenericApp_CATSCore::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GenericApp_CATSCore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GenericApp_CATSCore::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GenericApp_CATSCore::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GenericApp_CATSCore(void *p) {
      delete (static_cast<::TA2GenericApp_CATSCore*>(p));
   }
   static void deleteArray_TA2GenericApp_CATSCore(void *p) {
      delete [] (static_cast<::TA2GenericApp_CATSCore*>(p));
   }
   static void destruct_TA2GenericApp_CATSCore(void *p) {
      typedef ::TA2GenericApp_CATSCore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GenericApp_CATSCore

//______________________________________________________________________________
void TA2GenericApp_CATSAnnulus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GenericApp_CATSAnnulus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GenericApp_CATSAnnulus::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GenericApp_CATSAnnulus::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GenericApp_CATSAnnulus(void *p) {
      delete (static_cast<::TA2GenericApp_CATSAnnulus*>(p));
   }
   static void deleteArray_TA2GenericApp_CATSAnnulus(void *p) {
      delete [] (static_cast<::TA2GenericApp_CATSAnnulus*>(p));
   }
   static void destruct_TA2GenericApp_CATSAnnulus(void *p) {
      typedef ::TA2GenericApp_CATSAnnulus current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GenericApp_CATSAnnulus

//______________________________________________________________________________
void TA2GenericApp_CATSShield::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GenericApp_CATSShield.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GenericApp_CATSShield::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GenericApp_CATSShield::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GenericApp_CATSShield(void *p) {
      delete (static_cast<::TA2GenericApp_CATSShield*>(p));
   }
   static void deleteArray_TA2GenericApp_CATSShield(void *p) {
      delete [] (static_cast<::TA2GenericApp_CATSShield*>(p));
   }
   static void destruct_TA2GenericApp_CATSShield(void *p) {
      typedef ::TA2GenericApp_CATSShield current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GenericApp_CATSShield

//______________________________________________________________________________
void TA2FPMicro::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2FPMicro.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TA2Detector::Streamer(R__b);
      R__b >> fNFPelem;
      R__b >> fNFPhits;
      delete [] fFPhits;
      fFPhits = new Int_t[fNFPelem];
      R__b.ReadFastArray(fFPhits,fNFPelem);
      R__b.CheckByteCount(R__s, R__c, TA2FPMicro::IsA());
   } else {
      R__c = R__b.WriteVersion(TA2FPMicro::IsA(), kTRUE);
      TA2Detector::Streamer(R__b);
      R__b << fNFPelem;
      R__b << fNFPhits;
      R__b.WriteFastArray(fFPhits,fNFPelem);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2FPMicro(void *p) {
      delete (static_cast<::TA2FPMicro*>(p));
   }
   static void deleteArray_TA2FPMicro(void *p) {
      delete [] (static_cast<::TA2FPMicro*>(p));
   }
   static void destruct_TA2FPMicro(void *p) {
      typedef ::TA2FPMicro current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TA2FPMicro(TBuffer &buf, void *obj) {
      ((::TA2FPMicro*)obj)->::TA2FPMicro::Streamer(buf);
   }
} // end of namespace ROOT for class ::TA2FPMicro

//______________________________________________________________________________
void TA2GenericApp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GenericApp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GenericApp::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GenericApp::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GenericApp(void *p) {
      delete (static_cast<::TA2GenericApp*>(p));
   }
   static void deleteArray_TA2GenericApp(void *p) {
      delete [] (static_cast<::TA2GenericApp*>(p));
   }
   static void destruct_TA2GenericApp(void *p) {
      typedef ::TA2GenericApp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GenericApp

//______________________________________________________________________________
void TA2CATSPhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CATSPhysics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CATSPhysics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CATSPhysics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CATSPhysics(void *p) {
      delete (static_cast<::TA2CATSPhysics*>(p));
   }
   static void deleteArray_TA2CATSPhysics(void *p) {
      delete [] (static_cast<::TA2CATSPhysics*>(p));
   }
   static void destruct_TA2CATSPhysics(void *p) {
      typedef ::TA2CATSPhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CATSPhysics

//______________________________________________________________________________
void TA2KFParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2KFParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2KFParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2KFParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TA2KFParticle(void *p) {
      return  p ? new(p) ::TA2KFParticle : new ::TA2KFParticle;
   }
   static void *newArray_TA2KFParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TA2KFParticle[nElements] : new ::TA2KFParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TA2KFParticle(void *p) {
      delete (static_cast<::TA2KFParticle*>(p));
   }
   static void deleteArray_TA2KFParticle(void *p) {
      delete [] (static_cast<::TA2KFParticle*>(p));
   }
   static void destruct_TA2KFParticle(void *p) {
      typedef ::TA2KFParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2KFParticle

//______________________________________________________________________________
void TA2CBKinematicFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CBKinematicFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CBKinematicFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CBKinematicFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TA2CBKinematicFitter(void *p) {
      return  p ? new(p) ::TA2CBKinematicFitter : new ::TA2CBKinematicFitter;
   }
   static void *newArray_TA2CBKinematicFitter(Long_t nElements, void *p) {
      return p ? new(p) ::TA2CBKinematicFitter[nElements] : new ::TA2CBKinematicFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TA2CBKinematicFitter(void *p) {
      delete (static_cast<::TA2CBKinematicFitter*>(p));
   }
   static void deleteArray_TA2CBKinematicFitter(void *p) {
      delete [] (static_cast<::TA2CBKinematicFitter*>(p));
   }
   static void destruct_TA2CBKinematicFitter(void *p) {
      typedef ::TA2CBKinematicFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CBKinematicFitter

//______________________________________________________________________________
void TA2CosmicCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2CosmicCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2CosmicCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2CosmicCal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2CosmicCal(void *p) {
      delete (static_cast<::TA2CosmicCal*>(p));
   }
   static void deleteArray_TA2CosmicCal(void *p) {
      delete [] (static_cast<::TA2CosmicCal*>(p));
   }
   static void destruct_TA2CosmicCal(void *p) {
      typedef ::TA2CosmicCal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2CosmicCal

//______________________________________________________________________________
void TA2GeomCalibPhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GeomCalibPhysics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GeomCalibPhysics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GeomCalibPhysics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GeomCalibPhysics(void *p) {
      delete (static_cast<::TA2GeomCalibPhysics*>(p));
   }
   static void deleteArray_TA2GeomCalibPhysics(void *p) {
      delete [] (static_cast<::TA2GeomCalibPhysics*>(p));
   }
   static void destruct_TA2GeomCalibPhysics(void *p) {
      typedef ::TA2GeomCalibPhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GeomCalibPhysics

//______________________________________________________________________________
void TA2GoAT::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2GoAT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2GoAT::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2GoAT::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2GoAT(void *p) {
      delete (static_cast<::TA2GoAT*>(p));
   }
   static void deleteArray_TA2GoAT(void *p) {
      delete [] (static_cast<::TA2GoAT*>(p));
   }
   static void destruct_TA2GoAT(void *p) {
      typedef ::TA2GoAT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2GoAT

//______________________________________________________________________________
void TA2MesonPhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2MesonPhysics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2MesonPhysics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2MesonPhysics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2MesonPhysics(void *p) {
      delete (static_cast<::TA2MesonPhysics*>(p));
   }
   static void deleteArray_TA2MesonPhysics(void *p) {
      delete [] (static_cast<::TA2MesonPhysics*>(p));
   }
   static void destruct_TA2MesonPhysics(void *p) {
      typedef ::TA2MesonPhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2MesonPhysics

//______________________________________________________________________________
void TA2MyPhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2MyPhysics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2MyPhysics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2MyPhysics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2MyPhysics(void *p) {
      delete (static_cast<::TA2MyPhysics*>(p));
   }
   static void deleteArray_TA2MyPhysics(void *p) {
      delete [] (static_cast<::TA2MyPhysics*>(p));
   }
   static void destruct_TA2MyPhysics(void *p) {
      typedef ::TA2MyPhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2MyPhysics

//______________________________________________________________________________
void TA2MyCaLib::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2MyCaLib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2MyCaLib::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2MyCaLib::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2MyCaLib(void *p) {
      delete (static_cast<::TA2MyCaLib*>(p));
   }
   static void deleteArray_TA2MyCaLib(void *p) {
      delete [] (static_cast<::TA2MyCaLib*>(p));
   }
   static void destruct_TA2MyCaLib(void *p) {
      typedef ::TA2MyCaLib current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2MyCaLib

//______________________________________________________________________________
void TA2OnlinePhys::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2OnlinePhys.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2OnlinePhys::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2OnlinePhys::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2OnlinePhys(void *p) {
      delete (static_cast<::TA2OnlinePhys*>(p));
   }
   static void deleteArray_TA2OnlinePhys(void *p) {
      delete [] (static_cast<::TA2OnlinePhys*>(p));
   }
   static void destruct_TA2OnlinePhys(void *p) {
      typedef ::TA2OnlinePhys current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2OnlinePhys

//______________________________________________________________________________
void TA2Pi0Compton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2Pi0Compton.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2Pi0Compton::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2Pi0Compton::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2Pi0Compton(void *p) {
      delete (static_cast<::TA2Pi0Compton*>(p));
   }
   static void deleteArray_TA2Pi0Compton(void *p) {
      delete [] (static_cast<::TA2Pi0Compton*>(p));
   }
   static void destruct_TA2Pi0Compton(void *p) {
      typedef ::TA2Pi0Compton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2Pi0Compton

//______________________________________________________________________________
void TA2PlasticVETO::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2PlasticVETO.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2PlasticVETO::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2PlasticVETO::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2PlasticVETO(void *p) {
      delete (static_cast<::TA2PlasticVETO*>(p));
   }
   static void deleteArray_TA2PlasticVETO(void *p) {
      delete [] (static_cast<::TA2PlasticVETO*>(p));
   }
   static void destruct_TA2PlasticVETO(void *p) {
      typedef ::TA2PlasticVETO current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2PlasticVETO

//______________________________________________________________________________
void TA2TAPSAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2TAPSAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2TAPSAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2TAPSAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2TAPSAnalysis(void *p) {
      delete (static_cast<::TA2TAPSAnalysis*>(p));
   }
   static void deleteArray_TA2TAPSAnalysis(void *p) {
      delete [] (static_cast<::TA2TAPSAnalysis*>(p));
   }
   static void destruct_TA2TAPSAnalysis(void *p) {
      typedef ::TA2TAPSAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2TAPSAnalysis

//______________________________________________________________________________
void TA2TriggerPhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2TriggerPhysics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2TriggerPhysics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2TriggerPhysics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2TriggerPhysics(void *p) {
      delete (static_cast<::TA2TriggerPhysics*>(p));
   }
   static void deleteArray_TA2TriggerPhysics(void *p) {
      delete [] (static_cast<::TA2TriggerPhysics*>(p));
   }
   static void destruct_TA2TriggerPhysics(void *p) {
      typedef ::TA2TriggerPhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2TriggerPhysics

//______________________________________________________________________________
void TA2UserPhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class TA2UserPhysics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TA2UserPhysics::Class(),this);
   } else {
      R__b.WriteClassBuffer(TA2UserPhysics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TA2UserPhysics(void *p) {
      delete (static_cast<::TA2UserPhysics*>(p));
   }
   static void deleteArray_TA2UserPhysics(void *p) {
      delete [] (static_cast<::TA2UserPhysics*>(p));
   }
   static void destruct_TA2UserPhysics(void *p) {
      typedef ::TA2UserPhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TA2UserPhysics

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 458,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr))->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete (static_cast<vector<unsigned int>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] (static_cast<vector<unsigned int>*>(p));
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEunsignedsPintmUgR_Dictionary();
   static void vectorlEunsignedsPintmUgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintmUgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintmUgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintmUgR(void *p);
   static void deleteArray_vectorlEunsignedsPintmUgR(void *p);
   static void destruct_vectorlEunsignedsPintmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int*>*)
   {
      vector<unsigned int*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int*>", -2, "vector", 458,
                  typeid(vector<unsigned int*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int*>) );
      instance.SetNew(&new_vectorlEunsignedsPintmUgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintmUgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintmUgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int*>","std::vector<unsigned int*, std::allocator<unsigned int*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int*>*>(nullptr))->GetClass();
      vectorlEunsignedsPintmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int*> : new vector<unsigned int*>;
   }
   static void *newArray_vectorlEunsignedsPintmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int*>[nElements] : new vector<unsigned int*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintmUgR(void *p) {
      delete (static_cast<vector<unsigned int*>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintmUgR(void *p) {
      delete [] (static_cast<vector<unsigned int*>*>(p));
   }
   static void destruct_vectorlEunsignedsPintmUgR(void *p) {
      typedef vector<unsigned int*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int*>

namespace ROOT {
   static TClass *vectorlEconstsPcharmUgR_Dictionary();
   static void vectorlEconstsPcharmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPcharmUgR(void *p = nullptr);
   static void *newArray_vectorlEconstsPcharmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPcharmUgR(void *p);
   static void deleteArray_vectorlEconstsPcharmUgR(void *p);
   static void destruct_vectorlEconstsPcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const char*>*)
   {
      vector<const char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const char*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const char*>", -2, "vector", 458,
                  typeid(vector<const char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPcharmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const char*>) );
      instance.SetNew(&new_vectorlEconstsPcharmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPcharmUgR);
      instance.SetDelete(&delete_vectorlEconstsPcharmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPcharmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<const char*>","std::vector<char const*, std::allocator<char const*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<const char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<const char*>*>(nullptr))->GetClass();
      vectorlEconstsPcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const char*> : new vector<const char*>;
   }
   static void *newArray_vectorlEconstsPcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const char*>[nElements] : new vector<const char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPcharmUgR(void *p) {
      delete (static_cast<vector<const char*>*>(p));
   }
   static void deleteArray_vectorlEconstsPcharmUgR(void *p) {
      delete [] (static_cast<vector<const char*>*>(p));
   }
   static void destruct_vectorlEconstsPcharmUgR(void *p) {
      typedef vector<const char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<const char*>

namespace ROOT {
   static TClass *vectorlETCutGmUgR_Dictionary();
   static void vectorlETCutGmUgR_TClassManip(TClass*);
   static void *new_vectorlETCutGmUgR(void *p = nullptr);
   static void *newArray_vectorlETCutGmUgR(Long_t size, void *p);
   static void delete_vectorlETCutGmUgR(void *p);
   static void deleteArray_vectorlETCutGmUgR(void *p);
   static void destruct_vectorlETCutGmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TCutG*>*)
   {
      vector<TCutG*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TCutG*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TCutG*>", -2, "vector", 458,
                  typeid(vector<TCutG*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETCutGmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TCutG*>) );
      instance.SetNew(&new_vectorlETCutGmUgR);
      instance.SetNewArray(&newArray_vectorlETCutGmUgR);
      instance.SetDelete(&delete_vectorlETCutGmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETCutGmUgR);
      instance.SetDestructor(&destruct_vectorlETCutGmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TCutG*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TCutG*>","std::vector<TCutG*, std::allocator<TCutG*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TCutG*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETCutGmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TCutG*>*>(nullptr))->GetClass();
      vectorlETCutGmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETCutGmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETCutGmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TCutG*> : new vector<TCutG*>;
   }
   static void *newArray_vectorlETCutGmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TCutG*>[nElements] : new vector<TCutG*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETCutGmUgR(void *p) {
      delete (static_cast<vector<TCutG*>*>(p));
   }
   static void deleteArray_vectorlETCutGmUgR(void *p) {
      delete [] (static_cast<vector<TCutG*>*>(p));
   }
   static void destruct_vectorlETCutGmUgR(void *p) {
      typedef vector<TCutG*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TCutG*>

namespace ROOT {
   static TClass *maplEintcOTGraph2DmUgR_Dictionary();
   static void maplEintcOTGraph2DmUgR_TClassManip(TClass*);
   static void *new_maplEintcOTGraph2DmUgR(void *p = nullptr);
   static void *newArray_maplEintcOTGraph2DmUgR(Long_t size, void *p);
   static void delete_maplEintcOTGraph2DmUgR(void *p);
   static void deleteArray_maplEintcOTGraph2DmUgR(void *p);
   static void destruct_maplEintcOTGraph2DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TGraph2D*>*)
   {
      map<int,TGraph2D*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TGraph2D*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TGraph2D*>", -2, "map", 105,
                  typeid(map<int,TGraph2D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTGraph2DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TGraph2D*>) );
      instance.SetNew(&new_maplEintcOTGraph2DmUgR);
      instance.SetNewArray(&newArray_maplEintcOTGraph2DmUgR);
      instance.SetDelete(&delete_maplEintcOTGraph2DmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTGraph2DmUgR);
      instance.SetDestructor(&destruct_maplEintcOTGraph2DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TGraph2D*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,TGraph2D*>","std::map<int, TGraph2D*, std::less<int>, std::allocator<std::pair<int const, TGraph2D*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,TGraph2D*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTGraph2DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,TGraph2D*>*>(nullptr))->GetClass();
      maplEintcOTGraph2DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTGraph2DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTGraph2DmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,TGraph2D*> : new map<int,TGraph2D*>;
   }
   static void *newArray_maplEintcOTGraph2DmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,TGraph2D*>[nElements] : new map<int,TGraph2D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTGraph2DmUgR(void *p) {
      delete (static_cast<map<int,TGraph2D*>*>(p));
   }
   static void deleteArray_maplEintcOTGraph2DmUgR(void *p) {
      delete [] (static_cast<map<int,TGraph2D*>*>(p));
   }
   static void destruct_maplEintcOTGraph2DmUgR(void *p) {
      typedef map<int,TGraph2D*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,TGraph2D*>

namespace ROOT {
   static TClass *maplEdoublecOpairlEintcOintgRsPgR_Dictionary();
   static void maplEdoublecOpairlEintcOintgRsPgR_TClassManip(TClass*);
   static void *new_maplEdoublecOpairlEintcOintgRsPgR(void *p = nullptr);
   static void *newArray_maplEdoublecOpairlEintcOintgRsPgR(Long_t size, void *p);
   static void delete_maplEdoublecOpairlEintcOintgRsPgR(void *p);
   static void deleteArray_maplEdoublecOpairlEintcOintgRsPgR(void *p);
   static void destruct_maplEdoublecOpairlEintcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,pair<int,int> >*)
   {
      map<double,pair<int,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,pair<int,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,pair<int,int> >", -2, "map", 105,
                  typeid(map<double,pair<int,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOpairlEintcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<double,pair<int,int> >) );
      instance.SetNew(&new_maplEdoublecOpairlEintcOintgRsPgR);
      instance.SetNewArray(&newArray_maplEdoublecOpairlEintcOintgRsPgR);
      instance.SetDelete(&delete_maplEdoublecOpairlEintcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOpairlEintcOintgRsPgR);
      instance.SetDestructor(&destruct_maplEdoublecOpairlEintcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,pair<int,int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<double,pair<int,int> >","std::map<double, std::pair<int, int>, std::less<double>, std::allocator<std::pair<double const, std::pair<int, int> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<double,pair<int,int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOpairlEintcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<double,pair<int,int> >*>(nullptr))->GetClass();
      maplEdoublecOpairlEintcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOpairlEintcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOpairlEintcOintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<double,pair<int,int> > : new map<double,pair<int,int> >;
   }
   static void *newArray_maplEdoublecOpairlEintcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<double,pair<int,int> >[nElements] : new map<double,pair<int,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOpairlEintcOintgRsPgR(void *p) {
      delete (static_cast<map<double,pair<int,int> >*>(p));
   }
   static void deleteArray_maplEdoublecOpairlEintcOintgRsPgR(void *p) {
      delete [] (static_cast<map<double,pair<int,int> >*>(p));
   }
   static void destruct_maplEdoublecOpairlEintcOintgRsPgR(void *p) {
      typedef map<double,pair<int,int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<double,pair<int,int> >

namespace ROOT {
   static TClass *maplEdoublecOintgR_Dictionary();
   static void maplEdoublecOintgR_TClassManip(TClass*);
   static void *new_maplEdoublecOintgR(void *p = nullptr);
   static void *newArray_maplEdoublecOintgR(Long_t size, void *p);
   static void delete_maplEdoublecOintgR(void *p);
   static void deleteArray_maplEdoublecOintgR(void *p);
   static void destruct_maplEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,int>*)
   {
      map<double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,int>", -2, "map", 105,
                  typeid(map<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<double,int>) );
      instance.SetNew(&new_maplEdoublecOintgR);
      instance.SetNewArray(&newArray_maplEdoublecOintgR);
      instance.SetDelete(&delete_maplEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOintgR);
      instance.SetDestructor(&destruct_maplEdoublecOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<double,int>","std::map<double, int, std::less<double>, std::allocator<std::pair<double const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<double,int>*>(nullptr))->GetClass();
      maplEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<double,int> : new map<double,int>;
   }
   static void *newArray_maplEdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<double,int>[nElements] : new map<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOintgR(void *p) {
      delete (static_cast<map<double,int>*>(p));
   }
   static void deleteArray_maplEdoublecOintgR(void *p) {
      delete [] (static_cast<map<double,int>*>(p));
   }
   static void destruct_maplEdoublecOintgR(void *p) {
      typedef map<double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<double,int>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_UserDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_UserDict) = RecordReadRules_UserDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_UserDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_UserDict_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BasePhysics.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BeamPolMon.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CB.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CBKinematicFitter.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CalArray.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Calorimeter.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CentralApparatus.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CentralTrack.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CosmicCal.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CrystalBall.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpc.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcLayer.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcStrip.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcWire.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Event.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2FPMicro.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSAnnulus.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSCore.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSShield.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GeomCalibPhysics.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GoAT.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2KFParticle.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2LinearPolEpics.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MesonPhysics.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Moeller.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MwpcIntersection.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MwpcTrack.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MyCaLib.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MyPhysics.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2OnlinePhys.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PairSpec.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Pi0Compton.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PlasticPID.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PlasticVETO.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPSAnalysis.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPS_BaF2.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPS_Veto.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Taps.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TrackLine.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TriggerPhysics.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserAnalysis.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserControl.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserPhysics.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root_v6.36.00/include",
"/home/dave/opt/AR.CATS/acqu_user/root/src",
"/home/dave/opt/AR.CATS/acqu_user/root/src-mc",
"/opt/root_v6.36.00/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/MC/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/main/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include",
"/opt/root_v6.36.00/include",
"/usr/include",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src",
"/home/dave/opt/AR.CATS/acqu_core/ezcaRoot/src",
"/home/dave/opt/AR.CATS/build/acqu_core/AcquRoot/src",
"/home/dave/opt/AR.CATS/Tools/a2display/inc",
"/opt/root_v6.36.00/include/",
"/home/dave/opt/AR.CATS/build/acqu_user/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "UserDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TA2TAPS_BaF2.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2TAPS_BaF2;
class __attribute__((annotate("$clingAutoload$TA2CylMwpcLayer.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2CylMwpcLayer;
class __attribute__((annotate("$clingAutoload$TA2CylMwpcStrip.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2CylMwpcStrip;
class __attribute__((annotate("$clingAutoload$TA2CylMwpcWire.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2CylMwpcWire;
class __attribute__((annotate("$clingAutoload$TA2TrackLine.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2TrackLine;
class __attribute__((annotate("$clingAutoload$TA2MwpcTrack.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2MwpcTrack;
class __attribute__((annotate("$clingAutoload$TA2MwpcIntersection.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2MwpcIntersection;
class __attribute__((annotate("$clingAutoload$TA2CylMwpc.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2CylMwpc;
class __attribute__((annotate("$clingAutoload$TA2CentralTrack.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2CentralTrack;
class __attribute__((annotate("$clingAutoload$TA2CentralApparatus.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2CentralApparatus;
class __attribute__((annotate("$clingAutoload$TA2PlasticPID.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2PlasticPID;
class __attribute__((annotate("$clingAutoload$TA2UserAnalysis.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2UserAnalysis;
class __attribute__((annotate("$clingAutoload$TA2UserControl.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2UserControl;
class __attribute__((annotate("$clingAutoload$TA2CalArray.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2CalArray;
class __attribute__((annotate("$clingAutoload$TA2CrystalBall.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2CrystalBall;
class __attribute__((annotate("$clingAutoload$TA2TAPS_Veto.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2TAPS_Veto;
class __attribute__((annotate("$clingAutoload$TA2Calorimeter.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2Calorimeter;
class __attribute__((annotate("$clingAutoload$TA2Taps.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2Taps;
class __attribute__((annotate("$clingAutoload$TA2LinearPolEpics.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2LinearPolEpics;
class __attribute__((annotate("$clingAutoload$TA2PairSpec.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2PairSpec;
class __attribute__((annotate("$clingAutoload$TA2Moeller.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2Moeller;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h")))  TA2AccessSQL;
class __attribute__((annotate("$clingAutoload$TA2CB.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BasePhysics.h")))  TA2CB;
class __attribute__((annotate("$clingAutoload$TA2Event.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BasePhysics.h")))  TA2Event;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BasePhysics.h")))  TA2BasePhysics;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BeamPolMon.h")))  TA2BeamPolMon;
class __attribute__((annotate("$clingAutoload$TA2GenericApp_CATSCore.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h")))  TA2GenericApp_CATSCore;
class __attribute__((annotate("$clingAutoload$TA2GenericApp_CATSAnnulus.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h")))  TA2GenericApp_CATSAnnulus;
class __attribute__((annotate("$clingAutoload$TA2GenericApp_CATSShield.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h")))  TA2GenericApp_CATSShield;
class __attribute__((annotate("$clingAutoload$TA2FPMicro.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h")))  TA2FPMicro;
class __attribute__((annotate("$clingAutoload$TA2GenericApp.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h")))  TA2GenericApp;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h")))  TA2CATSPhysics;
class __attribute__((annotate("$clingAutoload$TA2KFParticle.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CBKinematicFitter.h")))  TA2KFParticle;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CBKinematicFitter.h")))  TA2CBKinematicFitter;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CosmicCal.h")))  TA2CosmicCal;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GeomCalibPhysics.h")))  TA2GeomCalibPhysics;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GoAT.h")))  TA2GoAT;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MesonPhysics.h")))  TA2MesonPhysics;
class __attribute__((annotate("$clingAutoload$TA2MyPhysics.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MyCaLib.h")))  TA2MyPhysics;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MyCaLib.h")))  TA2MyCaLib;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2OnlinePhys.h")))  TA2OnlinePhys;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Pi0Compton.h")))  TA2Pi0Compton;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PlasticVETO.h")))  TA2PlasticVETO;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPSAnalysis.h")))  TA2TAPSAnalysis;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TriggerPhysics.h")))  TA2TriggerPhysics;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserPhysics.h")))  TA2UserPhysics;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "UserDict dictionary payload"

#ifndef _FORTIFY_SOURCE
  #define _FORTIFY_SOURCE 2
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2AccessSQL.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BasePhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2BeamPolMon.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CATSPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CB.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CBKinematicFitter.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CalArray.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Calorimeter.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CentralApparatus.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CentralTrack.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CosmicCal.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CrystalBall.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpc.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcLayer.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcStrip.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2CylMwpcWire.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Event.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2FPMicro.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSAnnulus.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSCore.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GenericApp_CATSShield.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GeomCalibPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2GoAT.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2KFParticle.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2LinearPolEpics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MesonPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Moeller.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MwpcIntersection.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MwpcTrack.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MyCaLib.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2MyPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2OnlinePhys.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PairSpec.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Pi0Compton.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PlasticPID.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2PlasticVETO.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPSAnalysis.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPS_BaF2.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TAPS_Veto.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2Taps.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TrackLine.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2TriggerPhysics.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserAnalysis.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserControl.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src/TA2UserPhysics.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TA2AccessSQL", payloadCode, "@",
"TA2BasePhysics", payloadCode, "@",
"TA2BeamPolMon", payloadCode, "@",
"TA2CATSPhysics", payloadCode, "@",
"TA2CB", payloadCode, "@",
"TA2CBKinematicFitter", payloadCode, "@",
"TA2CalArray", payloadCode, "@",
"TA2Calorimeter", payloadCode, "@",
"TA2CentralApparatus", payloadCode, "@",
"TA2CentralTrack", payloadCode, "@",
"TA2CosmicCal", payloadCode, "@",
"TA2CrystalBall", payloadCode, "@",
"TA2CylMwpc", payloadCode, "@",
"TA2CylMwpcLayer", payloadCode, "@",
"TA2CylMwpcStrip", payloadCode, "@",
"TA2CylMwpcWire", payloadCode, "@",
"TA2Event", payloadCode, "@",
"TA2FPMicro", payloadCode, "@",
"TA2GenericApp", payloadCode, "@",
"TA2GenericApp_CATSAnnulus", payloadCode, "@",
"TA2GenericApp_CATSCore", payloadCode, "@",
"TA2GenericApp_CATSShield", payloadCode, "@",
"TA2GeomCalibPhysics", payloadCode, "@",
"TA2GoAT", payloadCode, "@",
"TA2KFParticle", payloadCode, "@",
"TA2LinearPolEpics", payloadCode, "@",
"TA2MesonPhysics", payloadCode, "@",
"TA2Moeller", payloadCode, "@",
"TA2MwpcIntersection", payloadCode, "@",
"TA2MwpcTrack", payloadCode, "@",
"TA2MyCaLib", payloadCode, "@",
"TA2MyPhysics", payloadCode, "@",
"TA2OnlinePhys", payloadCode, "@",
"TA2PairSpec", payloadCode, "@",
"TA2Pi0Compton", payloadCode, "@",
"TA2PlasticPID", payloadCode, "@",
"TA2PlasticVETO", payloadCode, "@",
"TA2TAPSAnalysis", payloadCode, "@",
"TA2TAPS_BaF2", payloadCode, "@",
"TA2TAPS_Veto", payloadCode, "@",
"TA2Taps", payloadCode, "@",
"TA2TrackLine", payloadCode, "@",
"TA2TriggerPhysics", payloadCode, "@",
"TA2UserAnalysis", payloadCode, "@",
"TA2UserControl", payloadCode, "@",
"TA2UserPhysics", payloadCode, "@",
"gAN", payloadCode, "@",
"gAR", payloadCode, "@",
"gUAN", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("UserDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_UserDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_UserDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_UserDict() {
  TriggerDictionaryInitialization_UserDict_Impl();
}
