// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddIToolsdIWorkerdIsrcdIWorkerDict
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
#include "/home/dave/opt/AR.CATS/Tools/Worker/src/TProcessor.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TProcessor(void *p = nullptr);
   static void *newArray_TProcessor(Long_t size, void *p);
   static void delete_TProcessor(void *p);
   static void deleteArray_TProcessor(void *p);
   static void destruct_TProcessor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProcessor*)
   {
      ::TProcessor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProcessor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TProcessor", ::TProcessor::Class_Version(), "TProcessor.h", 10,
                  typeid(::TProcessor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProcessor::Dictionary, isa_proxy, 4,
                  sizeof(::TProcessor) );
      instance.SetNew(&new_TProcessor);
      instance.SetNewArray(&newArray_TProcessor);
      instance.SetDelete(&delete_TProcessor);
      instance.SetDeleteArray(&deleteArray_TProcessor);
      instance.SetDestructor(&destruct_TProcessor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProcessor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TProcessor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TProcessor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TProcessor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TProcessor::Class_Name()
{
   return "TProcessor";
}

//______________________________________________________________________________
const char *TProcessor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProcessor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TProcessor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProcessor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProcessor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProcessor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProcessor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProcessor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TProcessor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProcessor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProcessor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProcessor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProcessor(void *p) {
      return  p ? new(p) ::TProcessor : new ::TProcessor;
   }
   static void *newArray_TProcessor(Long_t nElements, void *p) {
      return p ? new(p) ::TProcessor[nElements] : new ::TProcessor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProcessor(void *p) {
      delete (static_cast<::TProcessor*>(p));
   }
   static void deleteArray_TProcessor(void *p) {
      delete [] (static_cast<::TProcessor*>(p));
   }
   static void destruct_TProcessor(void *p) {
      typedef ::TProcessor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TProcessor

namespace {
  void TriggerDictionaryInitialization_WorkerDict_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/Tools/Worker/src/TProcessor.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root_v6.28.06_cxx14/include",
"/home/dave/opt/AR.CATS/Tools/Worker/src",
"/opt/root_v6.28.06_cxx14/include/",
"/home/dave/opt/AR.CATS/build/Tools/Worker/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "WorkerDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/Worker/src/TProcessor.h")))  TProcessor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "WorkerDict dictionary payload"

#ifndef _FORTIFY_SOURCE
  #define _FORTIFY_SOURCE 2
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/dave/opt/AR.CATS/Tools/Worker/src/TProcessor.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TProcessor", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("WorkerDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_WorkerDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_WorkerDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_WorkerDict() {
  TriggerDictionaryInitialization_WorkerDict_Impl();
}
