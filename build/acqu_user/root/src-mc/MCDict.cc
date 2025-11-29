// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddIacqu_userdIrootdIsrcmImcdIMCDict
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
#include "/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCHe4Phase.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCUserGenerator.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCUserParticle.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TMCHe4Phase(void *p);
   static void deleteArray_TMCHe4Phase(void *p);
   static void destruct_TMCHe4Phase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCHe4Phase*)
   {
      ::TMCHe4Phase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCHe4Phase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCHe4Phase", ::TMCHe4Phase::Class_Version(), "TMCHe4Phase.h", 32,
                  typeid(::TMCHe4Phase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCHe4Phase::Dictionary, isa_proxy, 4,
                  sizeof(::TMCHe4Phase) );
      instance.SetDelete(&delete_TMCHe4Phase);
      instance.SetDeleteArray(&deleteArray_TMCHe4Phase);
      instance.SetDestructor(&destruct_TMCHe4Phase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCHe4Phase*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCHe4Phase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCHe4Phase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCUserGenerator(void *p);
   static void deleteArray_TMCUserGenerator(void *p);
   static void destruct_TMCUserGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCUserGenerator*)
   {
      ::TMCUserGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCUserGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCUserGenerator", ::TMCUserGenerator::Class_Version(), "TMCUserGenerator.h", 18,
                  typeid(::TMCUserGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCUserGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::TMCUserGenerator) );
      instance.SetDelete(&delete_TMCUserGenerator);
      instance.SetDeleteArray(&deleteArray_TMCUserGenerator);
      instance.SetDestructor(&destruct_TMCUserGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCUserGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCUserGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCUserGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCUserParticle(void *p);
   static void deleteArray_TMCUserParticle(void *p);
   static void destruct_TMCUserParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCUserParticle*)
   {
      ::TMCUserParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCUserParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCUserParticle", ::TMCUserParticle::Class_Version(), "TMCUserParticle.h", 20,
                  typeid(::TMCUserParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCUserParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TMCUserParticle) );
      instance.SetDelete(&delete_TMCUserParticle);
      instance.SetDeleteArray(&deleteArray_TMCUserParticle);
      instance.SetDestructor(&destruct_TMCUserParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCUserParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCUserParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCUserParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMCHe4Phase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCHe4Phase::Class_Name()
{
   return "TMCHe4Phase";
}

//______________________________________________________________________________
const char *TMCHe4Phase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCHe4Phase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCHe4Phase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCHe4Phase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCHe4Phase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCHe4Phase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCHe4Phase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCHe4Phase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCUserGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCUserGenerator::Class_Name()
{
   return "TMCUserGenerator";
}

//______________________________________________________________________________
const char *TMCUserGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCUserGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCUserGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCUserGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCUserGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCUserGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCUserGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCUserGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCUserParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCUserParticle::Class_Name()
{
   return "TMCUserParticle";
}

//______________________________________________________________________________
const char *TMCUserParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCUserParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCUserParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCUserParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCUserParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCUserParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCUserParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCUserParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TMCHe4Phase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCHe4Phase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCHe4Phase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCHe4Phase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCHe4Phase(void *p) {
      delete (static_cast<::TMCHe4Phase*>(p));
   }
   static void deleteArray_TMCHe4Phase(void *p) {
      delete [] (static_cast<::TMCHe4Phase*>(p));
   }
   static void destruct_TMCHe4Phase(void *p) {
      typedef ::TMCHe4Phase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCHe4Phase

//______________________________________________________________________________
void TMCUserGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCUserGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCUserGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCUserGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCUserGenerator(void *p) {
      delete (static_cast<::TMCUserGenerator*>(p));
   }
   static void deleteArray_TMCUserGenerator(void *p) {
      delete [] (static_cast<::TMCUserGenerator*>(p));
   }
   static void destruct_TMCUserGenerator(void *p) {
      typedef ::TMCUserGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCUserGenerator

//______________________________________________________________________________
void TMCUserParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCUserParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCUserParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCUserParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCUserParticle(void *p) {
      delete (static_cast<::TMCUserParticle*>(p));
   }
   static void deleteArray_TMCUserParticle(void *p) {
      delete [] (static_cast<::TMCUserParticle*>(p));
   }
   static void destruct_TMCUserParticle(void *p) {
      typedef ::TMCUserParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCUserParticle

namespace {
  void TriggerDictionaryInitialization_MCDict_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCHe4Phase.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCUserGenerator.h",
"/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCUserParticle.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root_v6.28.06_cxx14/include",
"/home/dave/opt/AR.CATS/acqu_user/root/src",
"/home/dave/opt/AR.CATS/acqu_user/root/src-mc",
"/opt/root_v6.28.06_cxx14/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/MC/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/main/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include",
"/opt/root_v6.28.06_cxx14/include",
"/usr/include",
"/home/dave/opt/AR.CATS/acqu_core/AcquDAQ/src",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src",
"/home/dave/opt/AR.CATS/acqu_core/AcquRoot/src",
"/home/dave/opt/AR.CATS/acqu_core/ezcaRoot/src",
"/home/dave/opt/AR.CATS/build/acqu_core/AcquRoot/src",
"/home/dave/opt/AR.CATS/Tools/a2display/inc",
"/opt/root_v6.28.06_cxx14/include/",
"/home/dave/opt/AR.CATS/build/acqu_user/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MCDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCHe4Phase.h")))  TMCHe4Phase;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCUserGenerator.h")))  TMCUserGenerator;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCUserParticle.h")))  TMCUserParticle;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MCDict dictionary payload"

#ifndef _FORTIFY_SOURCE
  #define _FORTIFY_SOURCE 2
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCHe4Phase.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCUserGenerator.h"
#include "/home/dave/opt/AR.CATS/acqu_user/root/src-mc/TMCUserParticle.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TMCHe4Phase", payloadCode, "@",
"TMCUserGenerator", payloadCode, "@",
"TMCUserParticle", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MCDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MCDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MCDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MCDict() {
  TriggerDictionaryInitialization_MCDict_Impl();
}
