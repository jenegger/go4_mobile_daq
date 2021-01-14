// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__CalifaGo4

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
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

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "CalifaParam.h"
#include "WrapperProc.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_CalifaParam(void *p = 0);
   static void *newArray_CalifaParam(Long_t size, void *p);
   static void delete_CalifaParam(void *p);
   static void deleteArray_CalifaParam(void *p);
   static void destruct_CalifaParam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CalifaParam*)
   {
      ::CalifaParam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CalifaParam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CalifaParam", ::CalifaParam::Class_Version(), "CalifaParam.h", 25,
                  typeid(::CalifaParam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CalifaParam::Dictionary, isa_proxy, 4,
                  sizeof(::CalifaParam) );
      instance.SetNew(&new_CalifaParam);
      instance.SetNewArray(&newArray_CalifaParam);
      instance.SetDelete(&delete_CalifaParam);
      instance.SetDeleteArray(&deleteArray_CalifaParam);
      instance.SetDestructor(&destruct_CalifaParam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CalifaParam*)
   {
      return GenerateInitInstanceLocal((::CalifaParam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CalifaParam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_WrapperProc(void *p);
   static void deleteArray_WrapperProc(void *p);
   static void destruct_WrapperProc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WrapperProc*)
   {
      ::WrapperProc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WrapperProc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WrapperProc", ::WrapperProc::Class_Version(), "WrapperProc.h", 27,
                  typeid(::WrapperProc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WrapperProc::Dictionary, isa_proxy, 4,
                  sizeof(::WrapperProc) );
      instance.SetDelete(&delete_WrapperProc);
      instance.SetDeleteArray(&deleteArray_WrapperProc);
      instance.SetDestructor(&destruct_WrapperProc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WrapperProc*)
   {
      return GenerateInitInstanceLocal((::WrapperProc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::WrapperProc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CalifaParam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CalifaParam::Class_Name()
{
   return "CalifaParam";
}

//______________________________________________________________________________
const char *CalifaParam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CalifaParam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CalifaParam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CalifaParam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CalifaParam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CalifaParam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CalifaParam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CalifaParam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WrapperProc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WrapperProc::Class_Name()
{
   return "WrapperProc";
}

//______________________________________________________________________________
const char *WrapperProc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WrapperProc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WrapperProc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WrapperProc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WrapperProc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WrapperProc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WrapperProc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WrapperProc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CalifaParam::Streamer(TBuffer &R__b)
{
   // Stream an object of class CalifaParam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CalifaParam::Class(),this);
   } else {
      R__b.WriteClassBuffer(CalifaParam::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CalifaParam(void *p) {
      return  p ? new(p) ::CalifaParam : new ::CalifaParam;
   }
   static void *newArray_CalifaParam(Long_t nElements, void *p) {
      return p ? new(p) ::CalifaParam[nElements] : new ::CalifaParam[nElements];
   }
   // Wrapper around operator delete
   static void delete_CalifaParam(void *p) {
      delete ((::CalifaParam*)p);
   }
   static void deleteArray_CalifaParam(void *p) {
      delete [] ((::CalifaParam*)p);
   }
   static void destruct_CalifaParam(void *p) {
      typedef ::CalifaParam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CalifaParam

//______________________________________________________________________________
void WrapperProc::Streamer(TBuffer &R__b)
{
   // Stream an object of class WrapperProc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WrapperProc::Class(),this);
   } else {
      R__b.WriteClassBuffer(WrapperProc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_WrapperProc(void *p) {
      delete ((::WrapperProc*)p);
   }
   static void deleteArray_WrapperProc(void *p) {
      delete [] ((::WrapperProc*)p);
   }
   static void destruct_WrapperProc(void *p) {
      typedef ::WrapperProc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WrapperProc

namespace {
  void TriggerDictionaryInitialization_libGo4UserAnalysis_Impl() {
    static const char* headers[] = {
"CalifaParam.h",
"WrapperProc.h",
0
    };
    static const char* includePaths[] = {
"/u/land/fake_cvmfs/9.13/go4-6.0.0/include",
"/u/land/fake_cvmfs/9.13/go4-6.0.0",
"/u/land/fake_cvmfs/9.13/FairSoft/deps/include/root6",
"/u/land/go4_tobias_test/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGo4UserAnalysis dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$CalifaParam.h")))  CalifaParam;
class __attribute__((annotate("$clingAutoload$WrapperProc.h")))  WrapperProc;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGo4UserAnalysis dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef Linux
  #define Linux 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "CalifaParam.h"
#include "WrapperProc.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CalifaParam", payloadCode, "@",
"WrapperProc", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGo4UserAnalysis",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGo4UserAnalysis_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGo4UserAnalysis_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGo4UserAnalysis() {
  TriggerDictionaryInitialization_libGo4UserAnalysis_Impl();
}
