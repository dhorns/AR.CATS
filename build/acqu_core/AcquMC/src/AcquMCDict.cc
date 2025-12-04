// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddIacqu_coredIAcquMCdIsrcdIAcquMCDict
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
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCDgpInt.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamInt.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamParticle.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCGenerator.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCParticle.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCPhotoPSGenerator.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCPhotoPSInt.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCResonance.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCdS5MDMInt.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCdS5MDMParticle.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TMCFoamInt(void *p);
   static void deleteArray_TMCFoamInt(void *p);
   static void destruct_TMCFoamInt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCFoamInt*)
   {
      ::TMCFoamInt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCFoamInt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCFoamInt", ::TMCFoamInt::Class_Version(), "TMCFoamInt.h", 42,
                  typeid(::TMCFoamInt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCFoamInt::Dictionary, isa_proxy, 4,
                  sizeof(::TMCFoamInt) );
      instance.SetDelete(&delete_TMCFoamInt);
      instance.SetDeleteArray(&deleteArray_TMCFoamInt);
      instance.SetDestructor(&destruct_TMCFoamInt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCFoamInt*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCFoamInt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCFoamInt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCDgpInt(void *p);
   static void deleteArray_TMCDgpInt(void *p);
   static void destruct_TMCDgpInt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCDgpInt*)
   {
      ::TMCDgpInt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCDgpInt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCDgpInt", ::TMCDgpInt::Class_Version(), "TMCDgpInt.h", 31,
                  typeid(::TMCDgpInt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCDgpInt::Dictionary, isa_proxy, 4,
                  sizeof(::TMCDgpInt) );
      instance.SetDelete(&delete_TMCDgpInt);
      instance.SetDeleteArray(&deleteArray_TMCDgpInt);
      instance.SetDestructor(&destruct_TMCDgpInt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCDgpInt*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCDgpInt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCDgpInt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCParticle(void *p);
   static void deleteArray_TMCParticle(void *p);
   static void destruct_TMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCParticle*)
   {
      ::TMCParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCParticle", ::TMCParticle::Class_Version(), "TMCParticle.h", 37,
                  typeid(::TMCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TMCParticle) );
      instance.SetDelete(&delete_TMCParticle);
      instance.SetDeleteArray(&deleteArray_TMCParticle);
      instance.SetDestructor(&destruct_TMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCResonance(void *p);
   static void deleteArray_TMCResonance(void *p);
   static void destruct_TMCResonance(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCResonance*)
   {
      ::TMCResonance *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCResonance >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCResonance", ::TMCResonance::Class_Version(), "TMCResonance.h", 22,
                  typeid(::TMCResonance), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCResonance::Dictionary, isa_proxy, 4,
                  sizeof(::TMCResonance) );
      instance.SetDelete(&delete_TMCResonance);
      instance.SetDeleteArray(&deleteArray_TMCResonance);
      instance.SetDestructor(&destruct_TMCResonance);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCResonance*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCResonance*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCResonance*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCFoamParticle(void *p);
   static void deleteArray_TMCFoamParticle(void *p);
   static void destruct_TMCFoamParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCFoamParticle*)
   {
      ::TMCFoamParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCFoamParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCFoamParticle", ::TMCFoamParticle::Class_Version(), "TMCFoamParticle.h", 43,
                  typeid(::TMCFoamParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCFoamParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TMCFoamParticle) );
      instance.SetDelete(&delete_TMCFoamParticle);
      instance.SetDeleteArray(&deleteArray_TMCFoamParticle);
      instance.SetDestructor(&destruct_TMCFoamParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCFoamParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCFoamParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCFoamParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCdS5MDMParticle(void *p);
   static void deleteArray_TMCdS5MDMParticle(void *p);
   static void destruct_TMCdS5MDMParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCdS5MDMParticle*)
   {
      ::TMCdS5MDMParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCdS5MDMParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCdS5MDMParticle", ::TMCdS5MDMParticle::Class_Version(), "TMCdS5MDMParticle.h", 25,
                  typeid(::TMCdS5MDMParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCdS5MDMParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TMCdS5MDMParticle) );
      instance.SetDelete(&delete_TMCdS5MDMParticle);
      instance.SetDeleteArray(&deleteArray_TMCdS5MDMParticle);
      instance.SetDestructor(&destruct_TMCdS5MDMParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCdS5MDMParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCdS5MDMParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCdS5MDMParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCGenerator(void *p);
   static void deleteArray_TMCGenerator(void *p);
   static void destruct_TMCGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCGenerator*)
   {
      ::TMCGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCGenerator", ::TMCGenerator::Class_Version(), "TMCGenerator.h", 74,
                  typeid(::TMCGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::TMCGenerator) );
      instance.SetDelete(&delete_TMCGenerator);
      instance.SetDeleteArray(&deleteArray_TMCGenerator);
      instance.SetDestructor(&destruct_TMCGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCPhotoPSInt(void *p);
   static void deleteArray_TMCPhotoPSInt(void *p);
   static void destruct_TMCPhotoPSInt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCPhotoPSInt*)
   {
      ::TMCPhotoPSInt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCPhotoPSInt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCPhotoPSInt", ::TMCPhotoPSInt::Class_Version(), "TMCPhotoPSInt.h", 34,
                  typeid(::TMCPhotoPSInt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCPhotoPSInt::Dictionary, isa_proxy, 4,
                  sizeof(::TMCPhotoPSInt) );
      instance.SetDelete(&delete_TMCPhotoPSInt);
      instance.SetDeleteArray(&deleteArray_TMCPhotoPSInt);
      instance.SetDestructor(&destruct_TMCPhotoPSInt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCPhotoPSInt*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCPhotoPSInt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCPhotoPSInt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCdS5MDMInt(void *p);
   static void deleteArray_TMCdS5MDMInt(void *p);
   static void destruct_TMCdS5MDMInt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCdS5MDMInt*)
   {
      ::TMCdS5MDMInt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCdS5MDMInt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCdS5MDMInt", ::TMCdS5MDMInt::Class_Version(), "TMCdS5MDMInt.h", 28,
                  typeid(::TMCdS5MDMInt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCdS5MDMInt::Dictionary, isa_proxy, 4,
                  sizeof(::TMCdS5MDMInt) );
      instance.SetDelete(&delete_TMCdS5MDMInt);
      instance.SetDeleteArray(&deleteArray_TMCdS5MDMInt);
      instance.SetDestructor(&destruct_TMCdS5MDMInt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCdS5MDMInt*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCdS5MDMInt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCdS5MDMInt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCFoamGenerator(void *p);
   static void deleteArray_TMCFoamGenerator(void *p);
   static void destruct_TMCFoamGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCFoamGenerator*)
   {
      ::TMCFoamGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCFoamGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCFoamGenerator", ::TMCFoamGenerator::Class_Version(), "TMCFoamGenerator.h", 34,
                  typeid(::TMCFoamGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCFoamGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::TMCFoamGenerator) );
      instance.SetDelete(&delete_TMCFoamGenerator);
      instance.SetDeleteArray(&deleteArray_TMCFoamGenerator);
      instance.SetDestructor(&destruct_TMCFoamGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCFoamGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCFoamGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCFoamGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMCPhotoPSGenerator(void *p);
   static void deleteArray_TMCPhotoPSGenerator(void *p);
   static void destruct_TMCPhotoPSGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCPhotoPSGenerator*)
   {
      ::TMCPhotoPSGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCPhotoPSGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCPhotoPSGenerator", ::TMCPhotoPSGenerator::Class_Version(), "TMCPhotoPSGenerator.h", 22,
                  typeid(::TMCPhotoPSGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCPhotoPSGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::TMCPhotoPSGenerator) );
      instance.SetDelete(&delete_TMCPhotoPSGenerator);
      instance.SetDeleteArray(&deleteArray_TMCPhotoPSGenerator);
      instance.SetDestructor(&destruct_TMCPhotoPSGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCPhotoPSGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCPhotoPSGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCPhotoPSGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMCFoamInt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCFoamInt::Class_Name()
{
   return "TMCFoamInt";
}

//______________________________________________________________________________
const char *TMCFoamInt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamInt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCFoamInt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamInt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCFoamInt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamInt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCFoamInt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamInt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCDgpInt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCDgpInt::Class_Name()
{
   return "TMCDgpInt";
}

//______________________________________________________________________________
const char *TMCDgpInt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCDgpInt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCDgpInt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCDgpInt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCDgpInt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCDgpInt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCDgpInt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCDgpInt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCParticle::Class_Name()
{
   return "TMCParticle";
}

//______________________________________________________________________________
const char *TMCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCResonance::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCResonance::Class_Name()
{
   return "TMCResonance";
}

//______________________________________________________________________________
const char *TMCResonance::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCResonance*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCResonance::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCResonance*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCResonance::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCResonance*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCResonance::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCResonance*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCFoamParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCFoamParticle::Class_Name()
{
   return "TMCFoamParticle";
}

//______________________________________________________________________________
const char *TMCFoamParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCFoamParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCFoamParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCFoamParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCdS5MDMParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCdS5MDMParticle::Class_Name()
{
   return "TMCdS5MDMParticle";
}

//______________________________________________________________________________
const char *TMCdS5MDMParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCdS5MDMParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCdS5MDMParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCdS5MDMParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCdS5MDMParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCdS5MDMParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCdS5MDMParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCdS5MDMParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCGenerator::Class_Name()
{
   return "TMCGenerator";
}

//______________________________________________________________________________
const char *TMCGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCPhotoPSInt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCPhotoPSInt::Class_Name()
{
   return "TMCPhotoPSInt";
}

//______________________________________________________________________________
const char *TMCPhotoPSInt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCPhotoPSInt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCPhotoPSInt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCPhotoPSInt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCPhotoPSInt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCPhotoPSInt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCPhotoPSInt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCPhotoPSInt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCdS5MDMInt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCdS5MDMInt::Class_Name()
{
   return "TMCdS5MDMInt";
}

//______________________________________________________________________________
const char *TMCdS5MDMInt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCdS5MDMInt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCdS5MDMInt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCdS5MDMInt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCdS5MDMInt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCdS5MDMInt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCdS5MDMInt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCdS5MDMInt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCFoamGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCFoamGenerator::Class_Name()
{
   return "TMCFoamGenerator";
}

//______________________________________________________________________________
const char *TMCFoamGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCFoamGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCFoamGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCFoamGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCFoamGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCPhotoPSGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCPhotoPSGenerator::Class_Name()
{
   return "TMCPhotoPSGenerator";
}

//______________________________________________________________________________
const char *TMCPhotoPSGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCPhotoPSGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCPhotoPSGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCPhotoPSGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCPhotoPSGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCPhotoPSGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCPhotoPSGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCPhotoPSGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TMCFoamInt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCFoamInt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCFoamInt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCFoamInt::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCFoamInt(void *p) {
      delete (static_cast<::TMCFoamInt*>(p));
   }
   static void deleteArray_TMCFoamInt(void *p) {
      delete [] (static_cast<::TMCFoamInt*>(p));
   }
   static void destruct_TMCFoamInt(void *p) {
      typedef ::TMCFoamInt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCFoamInt

//______________________________________________________________________________
void TMCDgpInt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCDgpInt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCDgpInt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCDgpInt::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCDgpInt(void *p) {
      delete (static_cast<::TMCDgpInt*>(p));
   }
   static void deleteArray_TMCDgpInt(void *p) {
      delete [] (static_cast<::TMCDgpInt*>(p));
   }
   static void destruct_TMCDgpInt(void *p) {
      typedef ::TMCDgpInt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCDgpInt

//______________________________________________________________________________
void TMCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCParticle(void *p) {
      delete (static_cast<::TMCParticle*>(p));
   }
   static void deleteArray_TMCParticle(void *p) {
      delete [] (static_cast<::TMCParticle*>(p));
   }
   static void destruct_TMCParticle(void *p) {
      typedef ::TMCParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCParticle

//______________________________________________________________________________
void TMCResonance::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCResonance.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCResonance::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCResonance::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCResonance(void *p) {
      delete (static_cast<::TMCResonance*>(p));
   }
   static void deleteArray_TMCResonance(void *p) {
      delete [] (static_cast<::TMCResonance*>(p));
   }
   static void destruct_TMCResonance(void *p) {
      typedef ::TMCResonance current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCResonance

//______________________________________________________________________________
void TMCFoamParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCFoamParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCFoamParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCFoamParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCFoamParticle(void *p) {
      delete (static_cast<::TMCFoamParticle*>(p));
   }
   static void deleteArray_TMCFoamParticle(void *p) {
      delete [] (static_cast<::TMCFoamParticle*>(p));
   }
   static void destruct_TMCFoamParticle(void *p) {
      typedef ::TMCFoamParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCFoamParticle

//______________________________________________________________________________
void TMCdS5MDMParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCdS5MDMParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCdS5MDMParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCdS5MDMParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCdS5MDMParticle(void *p) {
      delete (static_cast<::TMCdS5MDMParticle*>(p));
   }
   static void deleteArray_TMCdS5MDMParticle(void *p) {
      delete [] (static_cast<::TMCdS5MDMParticle*>(p));
   }
   static void destruct_TMCdS5MDMParticle(void *p) {
      typedef ::TMCdS5MDMParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCdS5MDMParticle

//______________________________________________________________________________
void TMCGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCGenerator(void *p) {
      delete (static_cast<::TMCGenerator*>(p));
   }
   static void deleteArray_TMCGenerator(void *p) {
      delete [] (static_cast<::TMCGenerator*>(p));
   }
   static void destruct_TMCGenerator(void *p) {
      typedef ::TMCGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCGenerator

//______________________________________________________________________________
void TMCPhotoPSInt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCPhotoPSInt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCPhotoPSInt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCPhotoPSInt::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCPhotoPSInt(void *p) {
      delete (static_cast<::TMCPhotoPSInt*>(p));
   }
   static void deleteArray_TMCPhotoPSInt(void *p) {
      delete [] (static_cast<::TMCPhotoPSInt*>(p));
   }
   static void destruct_TMCPhotoPSInt(void *p) {
      typedef ::TMCPhotoPSInt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCPhotoPSInt

//______________________________________________________________________________
void TMCdS5MDMInt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCdS5MDMInt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCdS5MDMInt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCdS5MDMInt::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCdS5MDMInt(void *p) {
      delete (static_cast<::TMCdS5MDMInt*>(p));
   }
   static void deleteArray_TMCdS5MDMInt(void *p) {
      delete [] (static_cast<::TMCdS5MDMInt*>(p));
   }
   static void destruct_TMCdS5MDMInt(void *p) {
      typedef ::TMCdS5MDMInt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCdS5MDMInt

//______________________________________________________________________________
void TMCFoamGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCFoamGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCFoamGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCFoamGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCFoamGenerator(void *p) {
      delete (static_cast<::TMCFoamGenerator*>(p));
   }
   static void deleteArray_TMCFoamGenerator(void *p) {
      delete [] (static_cast<::TMCFoamGenerator*>(p));
   }
   static void destruct_TMCFoamGenerator(void *p) {
      typedef ::TMCFoamGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCFoamGenerator

//______________________________________________________________________________
void TMCPhotoPSGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCPhotoPSGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCPhotoPSGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCPhotoPSGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMCPhotoPSGenerator(void *p) {
      delete (static_cast<::TMCPhotoPSGenerator*>(p));
   }
   static void deleteArray_TMCPhotoPSGenerator(void *p) {
      delete [] (static_cast<::TMCPhotoPSGenerator*>(p));
   }
   static void destruct_TMCPhotoPSGenerator(void *p) {
      typedef ::TMCPhotoPSGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCPhotoPSGenerator

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_AcquMCDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_AcquMCDict) = RecordReadRules_AcquMCDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_AcquMCDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_AcquMCDict_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCDgpInt.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamInt.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamParticle.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCGenerator.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCParticle.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCPhotoPSGenerator.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCPhotoPSInt.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCResonance.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCdS5MDMInt.h",
"/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCdS5MDMParticle.h",
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
#line 1 "AcquMCDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TMCFoamInt.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCDgpInt.h")))  TMCFoamInt;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCDgpInt.h")))  TMCDgpInt;
class __attribute__((annotate("$clingAutoload$TMCParticle.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h")))  TMCParticle;
class __attribute__((annotate("$clingAutoload$TMCResonance.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h")))  TMCResonance;
class __attribute__((annotate("$clingAutoload$TMCFoamParticle.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h")))  TMCFoamParticle;
class __attribute__((annotate("$clingAutoload$TMCdS5MDMParticle.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h")))  TMCdS5MDMParticle;
class __attribute__((annotate("$clingAutoload$TMCGenerator.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h")))  TMCGenerator;
class __attribute__((annotate("$clingAutoload$TMCPhotoPSInt.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h")))  TMCPhotoPSInt;
class __attribute__((annotate("$clingAutoload$TMCdS5MDMInt.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h")))  TMCdS5MDMInt;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h")))  TMCFoamGenerator;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCPhotoPSGenerator.h")))  TMCPhotoPSGenerator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "AcquMCDict dictionary payload"

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
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCDgpInt.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamGenerator.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamInt.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCFoamParticle.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCGenerator.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCParticle.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCPhotoPSGenerator.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCPhotoPSInt.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCResonance.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCdS5MDMInt.h"
#include "/home/dave/opt/AR.CATS/acqu_core/AcquMC/src/TMCdS5MDMParticle.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TMCDgpInt", payloadCode, "@",
"TMCFoamGenerator", payloadCode, "@",
"TMCFoamInt", payloadCode, "@",
"TMCFoamParticle", payloadCode, "@",
"TMCGenerator", payloadCode, "@",
"TMCParticle", payloadCode, "@",
"TMCPhotoPSGenerator", payloadCode, "@",
"TMCPhotoPSInt", payloadCode, "@",
"TMCResonance", payloadCode, "@",
"TMCdS5MDMInt", payloadCode, "@",
"TMCdS5MDMParticle", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("AcquMCDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_AcquMCDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_AcquMCDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_AcquMCDict() {
  TriggerDictionaryInitialization_AcquMCDict_Impl();
}
