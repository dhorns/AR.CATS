// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIdavedIoptdIARdOCATSdIbuilddIToolsdIOSCARdImaindIsrcdIG__OSCAR
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
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2BaseDetParticle.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2DetParticle.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2Detector.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2PSA.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2RecMeson2g.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2RecParticle.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2Trigger.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/MC/include/TOMCParticle.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/main/include/TOGlobals.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOASCIIReader.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOArray2D.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOKinCut.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOLoader.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TONumberReader.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOSUtils.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace TOGlobals {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TOGlobals_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TOGlobals", 0 /*version*/, "TOGlobals.h", 21,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TOGlobals_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TOGlobals_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace TOLoader {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TOLoader_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TOLoader", 0 /*version*/, "TOLoader.h", 30,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TOLoader_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TOLoader_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace TOSUtils {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TOSUtils_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TOSUtils", 0 /*version*/, "TOSUtils.h", 23,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TOSUtils_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TOSUtils_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_TOA2Detector(void *p = nullptr);
   static void *newArray_TOA2Detector(Long_t size, void *p);
   static void delete_TOA2Detector(void *p);
   static void deleteArray_TOA2Detector(void *p);
   static void destruct_TOA2Detector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOA2Detector*)
   {
      ::TOA2Detector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOA2Detector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOA2Detector", ::TOA2Detector::Class_Version(), "TOA2Detector.h", 36,
                  typeid(::TOA2Detector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOA2Detector::Dictionary, isa_proxy, 4,
                  sizeof(::TOA2Detector) );
      instance.SetNew(&new_TOA2Detector);
      instance.SetNewArray(&newArray_TOA2Detector);
      instance.SetDelete(&delete_TOA2Detector);
      instance.SetDeleteArray(&deleteArray_TOA2Detector);
      instance.SetDestructor(&destruct_TOA2Detector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOA2Detector*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOA2Detector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOA2Detector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOA2BaseDetParticle(void *p = nullptr);
   static void *newArray_TOA2BaseDetParticle(Long_t size, void *p);
   static void delete_TOA2BaseDetParticle(void *p);
   static void deleteArray_TOA2BaseDetParticle(void *p);
   static void destruct_TOA2BaseDetParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOA2BaseDetParticle*)
   {
      ::TOA2BaseDetParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOA2BaseDetParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOA2BaseDetParticle", ::TOA2BaseDetParticle::Class_Version(), "TOA2BaseDetParticle.h", 25,
                  typeid(::TOA2BaseDetParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOA2BaseDetParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TOA2BaseDetParticle) );
      instance.SetNew(&new_TOA2BaseDetParticle);
      instance.SetNewArray(&newArray_TOA2BaseDetParticle);
      instance.SetDelete(&delete_TOA2BaseDetParticle);
      instance.SetDeleteArray(&deleteArray_TOA2BaseDetParticle);
      instance.SetDestructor(&destruct_TOA2BaseDetParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOA2BaseDetParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOA2BaseDetParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOA2BaseDetParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOA2DetParticle(void *p = nullptr);
   static void *newArray_TOA2DetParticle(Long_t size, void *p);
   static void delete_TOA2DetParticle(void *p);
   static void deleteArray_TOA2DetParticle(void *p);
   static void destruct_TOA2DetParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOA2DetParticle*)
   {
      ::TOA2DetParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOA2DetParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOA2DetParticle", ::TOA2DetParticle::Class_Version(), "TOA2DetParticle.h", 19,
                  typeid(::TOA2DetParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOA2DetParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TOA2DetParticle) );
      instance.SetNew(&new_TOA2DetParticle);
      instance.SetNewArray(&newArray_TOA2DetParticle);
      instance.SetDelete(&delete_TOA2DetParticle);
      instance.SetDeleteArray(&deleteArray_TOA2DetParticle);
      instance.SetDestructor(&destruct_TOA2DetParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOA2DetParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOA2DetParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOA2DetParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOA2PSA(void *p = nullptr);
   static void *newArray_TOA2PSA(Long_t size, void *p);
   static void delete_TOA2PSA(void *p);
   static void deleteArray_TOA2PSA(void *p);
   static void destruct_TOA2PSA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOA2PSA*)
   {
      ::TOA2PSA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOA2PSA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOA2PSA", ::TOA2PSA::Class_Version(), "TOA2PSA.h", 22,
                  typeid(::TOA2PSA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOA2PSA::Dictionary, isa_proxy, 4,
                  sizeof(::TOA2PSA) );
      instance.SetNew(&new_TOA2PSA);
      instance.SetNewArray(&newArray_TOA2PSA);
      instance.SetDelete(&delete_TOA2PSA);
      instance.SetDeleteArray(&deleteArray_TOA2PSA);
      instance.SetDestructor(&destruct_TOA2PSA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOA2PSA*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOA2PSA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOA2PSA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOA2RecParticle(void *p = nullptr);
   static void *newArray_TOA2RecParticle(Long_t size, void *p);
   static void delete_TOA2RecParticle(void *p);
   static void deleteArray_TOA2RecParticle(void *p);
   static void destruct_TOA2RecParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOA2RecParticle*)
   {
      ::TOA2RecParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOA2RecParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOA2RecParticle", ::TOA2RecParticle::Class_Version(), "TOA2RecParticle.h", 25,
                  typeid(::TOA2RecParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOA2RecParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TOA2RecParticle) );
      instance.SetNew(&new_TOA2RecParticle);
      instance.SetNewArray(&newArray_TOA2RecParticle);
      instance.SetDelete(&delete_TOA2RecParticle);
      instance.SetDeleteArray(&deleteArray_TOA2RecParticle);
      instance.SetDestructor(&destruct_TOA2RecParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOA2RecParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOA2RecParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOA2RecParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOA2RecMeson2g(void *p = nullptr);
   static void *newArray_TOA2RecMeson2g(Long_t size, void *p);
   static void delete_TOA2RecMeson2g(void *p);
   static void deleteArray_TOA2RecMeson2g(void *p);
   static void destruct_TOA2RecMeson2g(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOA2RecMeson2g*)
   {
      ::TOA2RecMeson2g *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOA2RecMeson2g >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOA2RecMeson2g", ::TOA2RecMeson2g::Class_Version(), "TOA2RecMeson2g.h", 20,
                  typeid(::TOA2RecMeson2g), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOA2RecMeson2g::Dictionary, isa_proxy, 4,
                  sizeof(::TOA2RecMeson2g) );
      instance.SetNew(&new_TOA2RecMeson2g);
      instance.SetNewArray(&newArray_TOA2RecMeson2g);
      instance.SetDelete(&delete_TOA2RecMeson2g);
      instance.SetDeleteArray(&deleteArray_TOA2RecMeson2g);
      instance.SetDestructor(&destruct_TOA2RecMeson2g);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOA2RecMeson2g*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOA2RecMeson2g*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOA2RecMeson2g*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOA2Trigger(void *p = nullptr);
   static void *newArray_TOA2Trigger(Long_t size, void *p);
   static void delete_TOA2Trigger(void *p);
   static void deleteArray_TOA2Trigger(void *p);
   static void destruct_TOA2Trigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOA2Trigger*)
   {
      ::TOA2Trigger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOA2Trigger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOA2Trigger", ::TOA2Trigger::Class_Version(), "TOA2Trigger.h", 46,
                  typeid(::TOA2Trigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOA2Trigger::Dictionary, isa_proxy, 4,
                  sizeof(::TOA2Trigger) );
      instance.SetNew(&new_TOA2Trigger);
      instance.SetNewArray(&newArray_TOA2Trigger);
      instance.SetDelete(&delete_TOA2Trigger);
      instance.SetDeleteArray(&deleteArray_TOA2Trigger);
      instance.SetDestructor(&destruct_TOA2Trigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOA2Trigger*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOA2Trigger*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOA2Trigger*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOMCParticle(void *p = nullptr);
   static void *newArray_TOMCParticle(Long_t size, void *p);
   static void delete_TOMCParticle(void *p);
   static void deleteArray_TOMCParticle(void *p);
   static void destruct_TOMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOMCParticle*)
   {
      ::TOMCParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOMCParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOMCParticle", ::TOMCParticle::Class_Version(), "TOMCParticle.h", 24,
                  typeid(::TOMCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOMCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TOMCParticle) );
      instance.SetNew(&new_TOMCParticle);
      instance.SetNewArray(&newArray_TOMCParticle);
      instance.SetDelete(&delete_TOMCParticle);
      instance.SetDeleteArray(&deleteArray_TOMCParticle);
      instance.SetDestructor(&destruct_TOMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOMCParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOMCParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOMCParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TOASCIIReader(void *p);
   static void deleteArray_TOASCIIReader(void *p);
   static void destruct_TOASCIIReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOASCIIReader*)
   {
      ::TOASCIIReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOASCIIReader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOASCIIReader", ::TOASCIIReader::Class_Version(), "TOASCIIReader.h", 22,
                  typeid(::TOASCIIReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOASCIIReader::Dictionary, isa_proxy, 4,
                  sizeof(::TOASCIIReader) );
      instance.SetDelete(&delete_TOASCIIReader);
      instance.SetDeleteArray(&deleteArray_TOASCIIReader);
      instance.SetDestructor(&destruct_TOASCIIReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOASCIIReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOASCIIReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOASCIIReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOArray2D(void *p = nullptr);
   static void *newArray_TOArray2D(Long_t size, void *p);
   static void delete_TOArray2D(void *p);
   static void deleteArray_TOArray2D(void *p);
   static void destruct_TOArray2D(void *p);
   static void streamer_TOArray2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOArray2D*)
   {
      ::TOArray2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOArray2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOArray2D", ::TOArray2D::Class_Version(), "TOArray2D.h", 20,
                  typeid(::TOArray2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOArray2D::Dictionary, isa_proxy, 17,
                  sizeof(::TOArray2D) );
      instance.SetNew(&new_TOArray2D);
      instance.SetNewArray(&newArray_TOArray2D);
      instance.SetDelete(&delete_TOArray2D);
      instance.SetDeleteArray(&deleteArray_TOArray2D);
      instance.SetDestructor(&destruct_TOArray2D);
      instance.SetStreamerFunc(&streamer_TOArray2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOArray2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOArray2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOArray2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOKinCut(void *p = nullptr);
   static void *newArray_TOKinCut(Long_t size, void *p);
   static void delete_TOKinCut(void *p);
   static void deleteArray_TOKinCut(void *p);
   static void destruct_TOKinCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOKinCut*)
   {
      ::TOKinCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOKinCut >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TOKinCut", ::TOKinCut::Class_Version(), "TOKinCut.h", 31,
                  typeid(::TOKinCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOKinCut::Dictionary, isa_proxy, 4,
                  sizeof(::TOKinCut) );
      instance.SetNew(&new_TOKinCut);
      instance.SetNewArray(&newArray_TOKinCut);
      instance.SetDelete(&delete_TOKinCut);
      instance.SetDeleteArray(&deleteArray_TOKinCut);
      instance.SetDestructor(&destruct_TOKinCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOKinCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::TOKinCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TOKinCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TONumberReader(void *p = nullptr);
   static void *newArray_TONumberReader(Long_t size, void *p);
   static void delete_TONumberReader(void *p);
   static void deleteArray_TONumberReader(void *p);
   static void destruct_TONumberReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TONumberReader*)
   {
      ::TONumberReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TONumberReader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TONumberReader", ::TONumberReader::Class_Version(), "TONumberReader.h", 22,
                  typeid(::TONumberReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TONumberReader::Dictionary, isa_proxy, 4,
                  sizeof(::TONumberReader) );
      instance.SetNew(&new_TONumberReader);
      instance.SetNewArray(&newArray_TONumberReader);
      instance.SetDelete(&delete_TONumberReader);
      instance.SetDeleteArray(&deleteArray_TONumberReader);
      instance.SetDestructor(&destruct_TONumberReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TONumberReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::TONumberReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TONumberReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TOA2Detector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOA2Detector::Class_Name()
{
   return "TOA2Detector";
}

//______________________________________________________________________________
const char *TOA2Detector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2Detector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOA2Detector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2Detector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOA2Detector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2Detector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOA2Detector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2Detector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOA2BaseDetParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOA2BaseDetParticle::Class_Name()
{
   return "TOA2BaseDetParticle";
}

//______________________________________________________________________________
const char *TOA2BaseDetParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2BaseDetParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOA2BaseDetParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2BaseDetParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOA2BaseDetParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2BaseDetParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOA2BaseDetParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2BaseDetParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOA2DetParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOA2DetParticle::Class_Name()
{
   return "TOA2DetParticle";
}

//______________________________________________________________________________
const char *TOA2DetParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2DetParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOA2DetParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2DetParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOA2DetParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2DetParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOA2DetParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2DetParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOA2PSA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOA2PSA::Class_Name()
{
   return "TOA2PSA";
}

//______________________________________________________________________________
const char *TOA2PSA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2PSA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOA2PSA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2PSA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOA2PSA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2PSA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOA2PSA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2PSA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOA2RecParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOA2RecParticle::Class_Name()
{
   return "TOA2RecParticle";
}

//______________________________________________________________________________
const char *TOA2RecParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2RecParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOA2RecParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2RecParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOA2RecParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2RecParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOA2RecParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2RecParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOA2RecMeson2g::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOA2RecMeson2g::Class_Name()
{
   return "TOA2RecMeson2g";
}

//______________________________________________________________________________
const char *TOA2RecMeson2g::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2RecMeson2g*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOA2RecMeson2g::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2RecMeson2g*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOA2RecMeson2g::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2RecMeson2g*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOA2RecMeson2g::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2RecMeson2g*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOA2Trigger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOA2Trigger::Class_Name()
{
   return "TOA2Trigger";
}

//______________________________________________________________________________
const char *TOA2Trigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2Trigger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOA2Trigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOA2Trigger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOA2Trigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2Trigger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOA2Trigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOA2Trigger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOMCParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOMCParticle::Class_Name()
{
   return "TOMCParticle";
}

//______________________________________________________________________________
const char *TOMCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOMCParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOMCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOMCParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOMCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOMCParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOMCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOMCParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOASCIIReader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOASCIIReader::Class_Name()
{
   return "TOASCIIReader";
}

//______________________________________________________________________________
const char *TOASCIIReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOASCIIReader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOASCIIReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOASCIIReader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOASCIIReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOASCIIReader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOASCIIReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOASCIIReader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOArray2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOArray2D::Class_Name()
{
   return "TOArray2D";
}

//______________________________________________________________________________
const char *TOArray2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOArray2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOArray2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOArray2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOArray2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOArray2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOArray2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOArray2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOKinCut::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOKinCut::Class_Name()
{
   return "TOKinCut";
}

//______________________________________________________________________________
const char *TOKinCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOKinCut*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOKinCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOKinCut*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOKinCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOKinCut*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOKinCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOKinCut*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TONumberReader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TONumberReader::Class_Name()
{
   return "TONumberReader";
}

//______________________________________________________________________________
const char *TONumberReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TONumberReader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TONumberReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TONumberReader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TONumberReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TONumberReader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TONumberReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TONumberReader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TOA2Detector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOA2Detector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOA2Detector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOA2Detector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOA2Detector(void *p) {
      return  p ? new(p) ::TOA2Detector : new ::TOA2Detector;
   }
   static void *newArray_TOA2Detector(Long_t nElements, void *p) {
      return p ? new(p) ::TOA2Detector[nElements] : new ::TOA2Detector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOA2Detector(void *p) {
      delete (static_cast<::TOA2Detector*>(p));
   }
   static void deleteArray_TOA2Detector(void *p) {
      delete [] (static_cast<::TOA2Detector*>(p));
   }
   static void destruct_TOA2Detector(void *p) {
      typedef ::TOA2Detector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOA2Detector

//______________________________________________________________________________
void TOA2BaseDetParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOA2BaseDetParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOA2BaseDetParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOA2BaseDetParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOA2BaseDetParticle(void *p) {
      return  p ? new(p) ::TOA2BaseDetParticle : new ::TOA2BaseDetParticle;
   }
   static void *newArray_TOA2BaseDetParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TOA2BaseDetParticle[nElements] : new ::TOA2BaseDetParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOA2BaseDetParticle(void *p) {
      delete (static_cast<::TOA2BaseDetParticle*>(p));
   }
   static void deleteArray_TOA2BaseDetParticle(void *p) {
      delete [] (static_cast<::TOA2BaseDetParticle*>(p));
   }
   static void destruct_TOA2BaseDetParticle(void *p) {
      typedef ::TOA2BaseDetParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOA2BaseDetParticle

//______________________________________________________________________________
void TOA2DetParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOA2DetParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOA2DetParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOA2DetParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOA2DetParticle(void *p) {
      return  p ? new(p) ::TOA2DetParticle : new ::TOA2DetParticle;
   }
   static void *newArray_TOA2DetParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TOA2DetParticle[nElements] : new ::TOA2DetParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOA2DetParticle(void *p) {
      delete (static_cast<::TOA2DetParticle*>(p));
   }
   static void deleteArray_TOA2DetParticle(void *p) {
      delete [] (static_cast<::TOA2DetParticle*>(p));
   }
   static void destruct_TOA2DetParticle(void *p) {
      typedef ::TOA2DetParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOA2DetParticle

//______________________________________________________________________________
void TOA2PSA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOA2PSA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOA2PSA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOA2PSA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOA2PSA(void *p) {
      return  p ? new(p) ::TOA2PSA : new ::TOA2PSA;
   }
   static void *newArray_TOA2PSA(Long_t nElements, void *p) {
      return p ? new(p) ::TOA2PSA[nElements] : new ::TOA2PSA[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOA2PSA(void *p) {
      delete (static_cast<::TOA2PSA*>(p));
   }
   static void deleteArray_TOA2PSA(void *p) {
      delete [] (static_cast<::TOA2PSA*>(p));
   }
   static void destruct_TOA2PSA(void *p) {
      typedef ::TOA2PSA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOA2PSA

//______________________________________________________________________________
void TOA2RecParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOA2RecParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOA2RecParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOA2RecParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOA2RecParticle(void *p) {
      return  p ? new(p) ::TOA2RecParticle : new ::TOA2RecParticle;
   }
   static void *newArray_TOA2RecParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TOA2RecParticle[nElements] : new ::TOA2RecParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOA2RecParticle(void *p) {
      delete (static_cast<::TOA2RecParticle*>(p));
   }
   static void deleteArray_TOA2RecParticle(void *p) {
      delete [] (static_cast<::TOA2RecParticle*>(p));
   }
   static void destruct_TOA2RecParticle(void *p) {
      typedef ::TOA2RecParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOA2RecParticle

//______________________________________________________________________________
void TOA2RecMeson2g::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOA2RecMeson2g.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOA2RecMeson2g::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOA2RecMeson2g::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOA2RecMeson2g(void *p) {
      return  p ? new(p) ::TOA2RecMeson2g : new ::TOA2RecMeson2g;
   }
   static void *newArray_TOA2RecMeson2g(Long_t nElements, void *p) {
      return p ? new(p) ::TOA2RecMeson2g[nElements] : new ::TOA2RecMeson2g[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOA2RecMeson2g(void *p) {
      delete (static_cast<::TOA2RecMeson2g*>(p));
   }
   static void deleteArray_TOA2RecMeson2g(void *p) {
      delete [] (static_cast<::TOA2RecMeson2g*>(p));
   }
   static void destruct_TOA2RecMeson2g(void *p) {
      typedef ::TOA2RecMeson2g current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOA2RecMeson2g

//______________________________________________________________________________
void TOA2Trigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOA2Trigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOA2Trigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOA2Trigger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOA2Trigger(void *p) {
      return  p ? new(p) ::TOA2Trigger : new ::TOA2Trigger;
   }
   static void *newArray_TOA2Trigger(Long_t nElements, void *p) {
      return p ? new(p) ::TOA2Trigger[nElements] : new ::TOA2Trigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOA2Trigger(void *p) {
      delete (static_cast<::TOA2Trigger*>(p));
   }
   static void deleteArray_TOA2Trigger(void *p) {
      delete [] (static_cast<::TOA2Trigger*>(p));
   }
   static void destruct_TOA2Trigger(void *p) {
      typedef ::TOA2Trigger current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOA2Trigger

//______________________________________________________________________________
void TOMCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOMCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOMCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOMCParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOMCParticle(void *p) {
      return  p ? new(p) ::TOMCParticle : new ::TOMCParticle;
   }
   static void *newArray_TOMCParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TOMCParticle[nElements] : new ::TOMCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOMCParticle(void *p) {
      delete (static_cast<::TOMCParticle*>(p));
   }
   static void deleteArray_TOMCParticle(void *p) {
      delete [] (static_cast<::TOMCParticle*>(p));
   }
   static void destruct_TOMCParticle(void *p) {
      typedef ::TOMCParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOMCParticle

//______________________________________________________________________________
void TOASCIIReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOASCIIReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOASCIIReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOASCIIReader::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TOASCIIReader(void *p) {
      delete (static_cast<::TOASCIIReader*>(p));
   }
   static void deleteArray_TOASCIIReader(void *p) {
      delete [] (static_cast<::TOASCIIReader*>(p));
   }
   static void destruct_TOASCIIReader(void *p) {
      typedef ::TOASCIIReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOASCIIReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOArray2D(void *p) {
      return  p ? new(p) ::TOArray2D : new ::TOArray2D;
   }
   static void *newArray_TOArray2D(Long_t nElements, void *p) {
      return p ? new(p) ::TOArray2D[nElements] : new ::TOArray2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOArray2D(void *p) {
      delete (static_cast<::TOArray2D*>(p));
   }
   static void deleteArray_TOArray2D(void *p) {
      delete [] (static_cast<::TOArray2D*>(p));
   }
   static void destruct_TOArray2D(void *p) {
      typedef ::TOArray2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TOArray2D(TBuffer &buf, void *obj) {
      ((::TOArray2D*)obj)->::TOArray2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::TOArray2D

//______________________________________________________________________________
void TOKinCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOKinCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOKinCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOKinCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOKinCut(void *p) {
      return  p ? new(p) ::TOKinCut : new ::TOKinCut;
   }
   static void *newArray_TOKinCut(Long_t nElements, void *p) {
      return p ? new(p) ::TOKinCut[nElements] : new ::TOKinCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOKinCut(void *p) {
      delete (static_cast<::TOKinCut*>(p));
   }
   static void deleteArray_TOKinCut(void *p) {
      delete [] (static_cast<::TOKinCut*>(p));
   }
   static void destruct_TOKinCut(void *p) {
      typedef ::TOKinCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TOKinCut

//______________________________________________________________________________
void TONumberReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class TONumberReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TONumberReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(TONumberReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TONumberReader(void *p) {
      return  p ? new(p) ::TONumberReader : new ::TONumberReader;
   }
   static void *newArray_TONumberReader(Long_t nElements, void *p) {
      return p ? new(p) ::TONumberReader[nElements] : new ::TONumberReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_TONumberReader(void *p) {
      delete (static_cast<::TONumberReader*>(p));
   }
   static void deleteArray_TONumberReader(void *p) {
      delete [] (static_cast<::TONumberReader*>(p));
   }
   static void destruct_TONumberReader(void *p) {
      typedef ::TONumberReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TONumberReader

namespace {
  void TriggerDictionaryInitialization_G__OSCAR_Impl() {
    static const char* headers[] = {
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2BaseDetParticle.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2DetParticle.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2Detector.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2PSA.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2RecMeson2g.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2RecParticle.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2Trigger.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/MC/include/TOMCParticle.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/main/include/TOGlobals.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOASCIIReader.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOArray2D.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOKinCut.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOLoader.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TONumberReader.h",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOSUtils.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root_v6.28.06_cxx14/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/MC/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/main/include",
"/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include",
"/opt/root_v6.28.06_cxx14/include/",
"/home/dave/opt/AR.CATS/build/Tools/OSCAR/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__OSCAR dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TOA2Detector.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2BaseDetParticle.h")))  TOA2Detector;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2BaseDetParticle.h")))  TOA2BaseDetParticle;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2DetParticle.h")))  TOA2DetParticle;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2PSA.h")))  TOA2PSA;
class __attribute__((annotate("$clingAutoload$TOA2RecParticle.h")))  __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2RecMeson2g.h")))  TOA2RecParticle;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2RecMeson2g.h")))  TOA2RecMeson2g;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2Trigger.h")))  TOA2Trigger;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/MC/include/TOMCParticle.h")))  TOMCParticle;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOASCIIReader.h")))  TOASCIIReader;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOArray2D.h")))  TOArray2D;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOKinCut.h")))  TOKinCut;
class __attribute__((annotate("$clingAutoload$/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TONumberReader.h")))  TONumberReader;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__OSCAR dictionary payload"

#ifndef _FORTIFY_SOURCE
  #define _FORTIFY_SOURCE 2
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2BaseDetParticle.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2DetParticle.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2Detector.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2PSA.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2RecMeson2g.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2RecParticle.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/A2/include/TOA2Trigger.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/MC/include/TOMCParticle.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/main/include/TOGlobals.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOASCIIReader.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOArray2D.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOKinCut.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOLoader.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TONumberReader.h"
#include "/home/dave/opt/AR.CATS/Tools/OSCAR/utils/include/TOSUtils.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EA2BeamHelBit", payloadCode, "@",
"EA2Detector", payloadCode, "@",
"EA2TAPSType", payloadCode, "@",
"EA2TrigBitL1", payloadCode, "@",
"EA2TrigBitL2", payloadCode, "@",
"EOKinCut", payloadCode, "@",
"TOA2BaseDetParticle", payloadCode, "@",
"TOA2DetParticle", payloadCode, "@",
"TOA2Detector", payloadCode, "@",
"TOA2PSA", payloadCode, "@",
"TOA2RecMeson2g", payloadCode, "@",
"TOA2RecParticle", payloadCode, "@",
"TOA2Trigger", payloadCode, "@",
"TOASCIIReader", payloadCode, "@",
"TOArray2D", payloadCode, "@",
"TOKinCut", payloadCode, "@",
"TOMCParticle", payloadCode, "@",
"TONumberReader", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__OSCAR",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__OSCAR_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__OSCAR_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__OSCAR() {
  TriggerDictionaryInitialization_G__OSCAR_Impl();
}
