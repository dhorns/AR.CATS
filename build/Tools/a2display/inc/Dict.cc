// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddIToolsdIa2displaydIincdIDict
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
#include "/home/dave/opt/AR.CATS/Tools/a2display/inc/CanvasTool.h"
#include "/home/dave/opt/AR.CATS/Tools/a2display/inc/PollingHist.h"
#include "/home/dave/opt/AR.CATS/Tools/a2display/inc/TH2CB.h"
#include "/home/dave/opt/AR.CATS/Tools/a2display/inc/TH2TAPS.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CanvasTool(void *p = nullptr);
   static void *newArray_CanvasTool(Long_t size, void *p);
   static void delete_CanvasTool(void *p);
   static void deleteArray_CanvasTool(void *p);
   static void destruct_CanvasTool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CanvasTool*)
   {
      ::CanvasTool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CanvasTool >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CanvasTool", ::CanvasTool::Class_Version(), "CanvasTool.h", 8,
                  typeid(::CanvasTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CanvasTool::Dictionary, isa_proxy, 4,
                  sizeof(::CanvasTool) );
      instance.SetNew(&new_CanvasTool);
      instance.SetNewArray(&newArray_CanvasTool);
      instance.SetDelete(&delete_CanvasTool);
      instance.SetDeleteArray(&deleteArray_CanvasTool);
      instance.SetDestructor(&destruct_CanvasTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CanvasTool*)
   {
      return GenerateInitInstanceLocal(static_cast<::CanvasTool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CanvasTool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2Crystals(void *p = nullptr);
   static void *newArray_TH2Crystals(Long_t size, void *p);
   static void delete_TH2Crystals(void *p);
   static void deleteArray_TH2Crystals(void *p);
   static void destruct_TH2Crystals(void *p);
   static void directoryAutoAdd_TH2Crystals(void *obj, TDirectory *dir);
   static Long64_t merge_TH2Crystals(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2Crystals*)
   {
      ::TH2Crystals *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2Crystals >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2Crystals", ::TH2Crystals::Class_Version(), "a2display.h", 11,
                  typeid(::TH2Crystals), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2Crystals::Dictionary, isa_proxy, 4,
                  sizeof(::TH2Crystals) );
      instance.SetNew(&new_TH2Crystals);
      instance.SetNewArray(&newArray_TH2Crystals);
      instance.SetDelete(&delete_TH2Crystals);
      instance.SetDeleteArray(&deleteArray_TH2Crystals);
      instance.SetDestructor(&destruct_TH2Crystals);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2Crystals);
      instance.SetMerge(&merge_TH2Crystals);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2Crystals*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2Crystals*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2Crystals*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2CB(void *p = nullptr);
   static void *newArray_TH2CB(Long_t size, void *p);
   static void delete_TH2CB(void *p);
   static void deleteArray_TH2CB(void *p);
   static void destruct_TH2CB(void *p);
   static void directoryAutoAdd_TH2CB(void *obj, TDirectory *dir);
   static Long64_t merge_TH2CB(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2CB*)
   {
      ::TH2CB *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2CB >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2CB", ::TH2CB::Class_Version(), "TH2CB.h", 32,
                  typeid(::TH2CB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2CB::Dictionary, isa_proxy, 4,
                  sizeof(::TH2CB) );
      instance.SetNew(&new_TH2CB);
      instance.SetNewArray(&newArray_TH2CB);
      instance.SetDelete(&delete_TH2CB);
      instance.SetDeleteArray(&deleteArray_TH2CB);
      instance.SetDestructor(&destruct_TH2CB);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2CB);
      instance.SetMerge(&merge_TH2CB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2CB*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2CB*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2CB*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2TAPS(void *p = nullptr);
   static void *newArray_TH2TAPS(Long_t size, void *p);
   static void delete_TH2TAPS(void *p);
   static void deleteArray_TH2TAPS(void *p);
   static void destruct_TH2TAPS(void *p);
   static void directoryAutoAdd_TH2TAPS(void *obj, TDirectory *dir);
   static Long64_t merge_TH2TAPS(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2TAPS*)
   {
      ::TH2TAPS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2TAPS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2TAPS", ::TH2TAPS::Class_Version(), "TH2TAPS.h", 7,
                  typeid(::TH2TAPS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2TAPS::Dictionary, isa_proxy, 4,
                  sizeof(::TH2TAPS) );
      instance.SetNew(&new_TH2TAPS);
      instance.SetNewArray(&newArray_TH2TAPS);
      instance.SetDelete(&delete_TH2TAPS);
      instance.SetDeleteArray(&deleteArray_TH2TAPS);
      instance.SetDestructor(&destruct_TH2TAPS);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2TAPS);
      instance.SetMerge(&merge_TH2TAPS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2TAPS*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2TAPS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2TAPS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *PollingHistogramlETH2CBgR_Dictionary();
   static void PollingHistogramlETH2CBgR_TClassManip(TClass*);
   static void delete_PollingHistogramlETH2CBgR(void *p);
   static void deleteArray_PollingHistogramlETH2CBgR(void *p);
   static void destruct_PollingHistogramlETH2CBgR(void *p);
   static void directoryAutoAdd_PollingHistogramlETH2CBgR(void *obj, TDirectory *dir);
   static Long64_t merge_PollingHistogramlETH2CBgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PollingHistogram<TH2CB>*)
   {
      ::PollingHistogram<TH2CB> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PollingHistogram<TH2CB> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PollingHistogram<TH2CB>", ::PollingHistogram<TH2CB>::Class_Version(), "PollingHist.h", 111,
                  typeid(::PollingHistogram<TH2CB>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PollingHistogramlETH2CBgR_Dictionary, isa_proxy, 4,
                  sizeof(::PollingHistogram<TH2CB>) );
      instance.SetDelete(&delete_PollingHistogramlETH2CBgR);
      instance.SetDeleteArray(&deleteArray_PollingHistogramlETH2CBgR);
      instance.SetDestructor(&destruct_PollingHistogramlETH2CBgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_PollingHistogramlETH2CBgR);
      instance.SetMerge(&merge_PollingHistogramlETH2CBgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PollingHistogram<TH2CB>*)
   {
      return GenerateInitInstanceLocal(static_cast<::PollingHistogram<TH2CB>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PollingHistogram<TH2CB>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PollingHistogramlETH2CBgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::PollingHistogram<TH2CB>*>(nullptr))->GetClass();
      PollingHistogramlETH2CBgR_TClassManip(theClass);
   return theClass;
   }

   static void PollingHistogramlETH2CBgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *PollingHistogramlETH2TAPSgR_Dictionary();
   static void PollingHistogramlETH2TAPSgR_TClassManip(TClass*);
   static void delete_PollingHistogramlETH2TAPSgR(void *p);
   static void deleteArray_PollingHistogramlETH2TAPSgR(void *p);
   static void destruct_PollingHistogramlETH2TAPSgR(void *p);
   static void directoryAutoAdd_PollingHistogramlETH2TAPSgR(void *obj, TDirectory *dir);
   static Long64_t merge_PollingHistogramlETH2TAPSgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PollingHistogram<TH2TAPS>*)
   {
      ::PollingHistogram<TH2TAPS> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PollingHistogram<TH2TAPS> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PollingHistogram<TH2TAPS>", ::PollingHistogram<TH2TAPS>::Class_Version(), "PollingHist.h", 112,
                  typeid(::PollingHistogram<TH2TAPS>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PollingHistogramlETH2TAPSgR_Dictionary, isa_proxy, 4,
                  sizeof(::PollingHistogram<TH2TAPS>) );
      instance.SetDelete(&delete_PollingHistogramlETH2TAPSgR);
      instance.SetDeleteArray(&deleteArray_PollingHistogramlETH2TAPSgR);
      instance.SetDestructor(&destruct_PollingHistogramlETH2TAPSgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_PollingHistogramlETH2TAPSgR);
      instance.SetMerge(&merge_PollingHistogramlETH2TAPSgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PollingHistogram<TH2TAPS>*)
   {
      return GenerateInitInstanceLocal(static_cast<::PollingHistogram<TH2TAPS>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PollingHistogram<TH2TAPS>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PollingHistogramlETH2TAPSgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::PollingHistogram<TH2TAPS>*>(nullptr))->GetClass();
      PollingHistogramlETH2TAPSgR_TClassManip(theClass);
   return theClass;
   }

   static void PollingHistogramlETH2TAPSgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CanvasTool::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CanvasTool::Class_Name()
{
   return "CanvasTool";
}

//______________________________________________________________________________
const char *CanvasTool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CanvasTool*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CanvasTool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CanvasTool*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CanvasTool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CanvasTool*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CanvasTool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CanvasTool*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2Crystals::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2Crystals::Class_Name()
{
   return "TH2Crystals";
}

//______________________________________________________________________________
const char *TH2Crystals::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2Crystals*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2Crystals::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2Crystals*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2Crystals::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2Crystals*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2Crystals::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2Crystals*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2CB::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2CB::Class_Name()
{
   return "TH2CB";
}

//______________________________________________________________________________
const char *TH2CB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2CB*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2CB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2CB*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2CB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2CB*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2CB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2CB*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2TAPS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2TAPS::Class_Name()
{
   return "TH2TAPS";
}

//______________________________________________________________________________
const char *TH2TAPS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2TAPS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2TAPS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2TAPS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2TAPS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2TAPS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2TAPS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2TAPS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr PollingHistogram<TH2CB>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *PollingHistogram<TH2CB>::Class_Name()
{
   return "PollingHistogram<TH2CB>";
}

//______________________________________________________________________________
template <> const char *PollingHistogram<TH2CB>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PollingHistogram<TH2CB>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int PollingHistogram<TH2CB>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PollingHistogram<TH2CB>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *PollingHistogram<TH2CB>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PollingHistogram<TH2CB>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *PollingHistogram<TH2CB>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PollingHistogram<TH2CB>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr PollingHistogram<TH2TAPS>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *PollingHistogram<TH2TAPS>::Class_Name()
{
   return "PollingHistogram<TH2TAPS>";
}

//______________________________________________________________________________
template <> const char *PollingHistogram<TH2TAPS>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PollingHistogram<TH2TAPS>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int PollingHistogram<TH2TAPS>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PollingHistogram<TH2TAPS>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *PollingHistogram<TH2TAPS>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PollingHistogram<TH2TAPS>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *PollingHistogram<TH2TAPS>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PollingHistogram<TH2TAPS>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CanvasTool::Streamer(TBuffer &R__b)
{
   // Stream an object of class CanvasTool.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CanvasTool::Class(),this);
   } else {
      R__b.WriteClassBuffer(CanvasTool::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CanvasTool(void *p) {
      return  p ? new(p) ::CanvasTool : new ::CanvasTool;
   }
   static void *newArray_CanvasTool(Long_t nElements, void *p) {
      return p ? new(p) ::CanvasTool[nElements] : new ::CanvasTool[nElements];
   }
   // Wrapper around operator delete
   static void delete_CanvasTool(void *p) {
      delete (static_cast<::CanvasTool*>(p));
   }
   static void deleteArray_CanvasTool(void *p) {
      delete [] (static_cast<::CanvasTool*>(p));
   }
   static void destruct_CanvasTool(void *p) {
      typedef ::CanvasTool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CanvasTool

//______________________________________________________________________________
void TH2Crystals::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2Crystals.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH2Crystals::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH2Crystals::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2Crystals(void *p) {
      return  p ? new(p) ::TH2Crystals : new ::TH2Crystals;
   }
   static void *newArray_TH2Crystals(Long_t nElements, void *p) {
      return p ? new(p) ::TH2Crystals[nElements] : new ::TH2Crystals[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2Crystals(void *p) {
      delete (static_cast<::TH2Crystals*>(p));
   }
   static void deleteArray_TH2Crystals(void *p) {
      delete [] (static_cast<::TH2Crystals*>(p));
   }
   static void destruct_TH2Crystals(void *p) {
      typedef ::TH2Crystals current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2Crystals(void *p, TDirectory *dir) {
      ((::TH2Crystals*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2Crystals(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2Crystals*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2Crystals

//______________________________________________________________________________
void TH2CB::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2CB.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH2CB::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH2CB::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2CB(void *p) {
      return  p ? new(p) ::TH2CB : new ::TH2CB;
   }
   static void *newArray_TH2CB(Long_t nElements, void *p) {
      return p ? new(p) ::TH2CB[nElements] : new ::TH2CB[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2CB(void *p) {
      delete (static_cast<::TH2CB*>(p));
   }
   static void deleteArray_TH2CB(void *p) {
      delete [] (static_cast<::TH2CB*>(p));
   }
   static void destruct_TH2CB(void *p) {
      typedef ::TH2CB current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2CB(void *p, TDirectory *dir) {
      ((::TH2CB*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2CB(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2CB*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2CB

//______________________________________________________________________________
void TH2TAPS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2TAPS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH2TAPS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH2TAPS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2TAPS(void *p) {
      return  p ? new(p) ::TH2TAPS : new ::TH2TAPS;
   }
   static void *newArray_TH2TAPS(Long_t nElements, void *p) {
      return p ? new(p) ::TH2TAPS[nElements] : new ::TH2TAPS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2TAPS(void *p) {
      delete (static_cast<::TH2TAPS*>(p));
   }
   static void deleteArray_TH2TAPS(void *p) {
      delete [] (static_cast<::TH2TAPS*>(p));
   }
   static void destruct_TH2TAPS(void *p) {
      typedef ::TH2TAPS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2TAPS(void *p, TDirectory *dir) {
      ((::TH2TAPS*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2TAPS(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2TAPS*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2TAPS

//______________________________________________________________________________
template <> void PollingHistogram<TH2CB>::Streamer(TBuffer &R__b)
{
   // Stream an object of class PollingHistogram<TH2CB>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PollingHistogram<TH2CB>::Class(),this);
   } else {
      R__b.WriteClassBuffer(PollingHistogram<TH2CB>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PollingHistogramlETH2CBgR(void *p) {
      delete (static_cast<::PollingHistogram<TH2CB>*>(p));
   }
   static void deleteArray_PollingHistogramlETH2CBgR(void *p) {
      delete [] (static_cast<::PollingHistogram<TH2CB>*>(p));
   }
   static void destruct_PollingHistogramlETH2CBgR(void *p) {
      typedef ::PollingHistogram<TH2CB> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_PollingHistogramlETH2CBgR(void *p, TDirectory *dir) {
      ((::PollingHistogram<TH2CB>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_PollingHistogramlETH2CBgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::PollingHistogram<TH2CB>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::PollingHistogram<TH2CB>

//______________________________________________________________________________
template <> void PollingHistogram<TH2TAPS>::Streamer(TBuffer &R__b)
{
   // Stream an object of class PollingHistogram<TH2TAPS>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PollingHistogram<TH2TAPS>::Class(),this);
   } else {
      R__b.WriteClassBuffer(PollingHistogram<TH2TAPS>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PollingHistogramlETH2TAPSgR(void *p) {
      delete (static_cast<::PollingHistogram<TH2TAPS>*>(p));
   }
   static void deleteArray_PollingHistogramlETH2TAPSgR(void *p) {
      delete [] (static_cast<::PollingHistogram<TH2TAPS>*>(p));
   }
   static void destruct_PollingHistogramlETH2TAPSgR(void *p) {
      typedef ::PollingHistogram<TH2TAPS> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_PollingHistogramlETH2TAPSgR(void *p, TDirectory *dir) {
      ((::PollingHistogram<TH2TAPS>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_PollingHistogramlETH2TAPSgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::PollingHistogram<TH2TAPS>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::PollingHistogram<TH2TAPS>

namespace {
  void TriggerDictionaryInitialization_Dict_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/Tools/a2display/inc/CanvasTool.h",
"/home/dave/opt/AR.CATS/Tools/a2display/inc/PollingHist.h",
"/home/dave/opt/AR.CATS/Tools/a2display/inc/TH2CB.h",
"/home/dave/opt/AR.CATS/Tools/a2display/inc/TH2TAPS.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root_v6.28.06_cxx14/include",
"/home/dave/opt/AR.CATS/Tools/a2display/inc",
"/opt/root_v6.28.06_cxx14/include/",
"/home/dave/opt/AR.CATS/build/Tools/a2display/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/a2display/inc/CanvasTool.h")))  CanvasTool;
class __attribute__((annotate("$clingAutoload$a2display.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/a2display/inc/PollingHist.h")))  TH2Crystals;
class __attribute__((annotate("$clingAutoload$TH2CB.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/a2display/inc/PollingHist.h")))  TH2CB;
class __attribute__((annotate("$clingAutoload$TH2TAPS.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/a2display/inc/PollingHist.h")))  TH2TAPS;
template <class HistType> class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/a2display/inc/PollingHist.h")))  PollingHistogram;

)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Dict dictionary payload"

#ifndef _FORTIFY_SOURCE
  #define _FORTIFY_SOURCE 2
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/dave/opt/AR.CATS/Tools/a2display/inc/CanvasTool.h"
#include "/home/dave/opt/AR.CATS/Tools/a2display/inc/PollingHist.h"
#include "/home/dave/opt/AR.CATS/Tools/a2display/inc/TH2CB.h"
#include "/home/dave/opt/AR.CATS/Tools/a2display/inc/TH2TAPS.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CanvasTool", payloadCode, "@",
"PollingHistogram<TH2CB>", payloadCode, "@",
"PollingHistogram<TH2TAPS>", payloadCode, "@",
"TH2CB", payloadCode, "@",
"TH2Crystals", payloadCode, "@",
"TH2TAPS", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Dict() {
  TriggerDictionaryInitialization_Dict_Impl();
}
