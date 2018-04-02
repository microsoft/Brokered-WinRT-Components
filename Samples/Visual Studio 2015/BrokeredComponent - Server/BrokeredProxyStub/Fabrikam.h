

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for C:\Users\tajimha\AppData\Local\Temp\Fabrikam.idl-fc2cf8e8:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Fabrikam_h__
#define __Fabrikam_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIEventHandler_1_HSTRING_FWD_DEFINED__
#define ____FIEventHandler_1_HSTRING_FWD_DEFINED__
typedef interface __FIEventHandler_1_HSTRING __FIEventHandler_1_HSTRING;

#endif 	/* ____FIEventHandler_1_HSTRING_FWD_DEFINED__ */


#ifndef ____x_Fabrikam_CIFoo_FWD_DEFINED__
#define ____x_Fabrikam_CIFoo_FWD_DEFINED__
typedef interface __x_Fabrikam_CIFoo __x_Fabrikam_CIFoo;

#ifdef __cplusplus
namespace Fabrikam {
    interface IFoo;
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_Fabrikam_CIFoo_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Fabrikam_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif


/* interface __MIDL_itf_Fabrikam_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam2Eidl_0000_0324 */




/* interface __MIDL_itf_Fabrikam2Eidl_0000_0324 */




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0324_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0324_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<String>"; }
};
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define ____FIIterator_1_HSTRING_FWD_DEFINED__
#define __FIIterator_1_HSTRING Windows::Foundation::Collections::__FIIterator_1_HSTRING_t

/* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_HSTRING_USE */


/* interface __MIDL_itf_Fabrikam_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam2Eidl_0000_0325 */




/* interface __MIDL_itf_Fabrikam2Eidl_0000_0325 */




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0325_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0325_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<String>"; }
};
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define ____FIIterable_1_HSTRING_FWD_DEFINED__
#define __FIIterable_1_HSTRING Windows::Foundation::Collections::__FIIterable_1_HSTRING_t

/* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_HSTRING_USE */


/* interface __MIDL_itf_Fabrikam_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam2Eidl_0000_0326 */




/* interface __MIDL_itf_Fabrikam2Eidl_0000_0326 */




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0326_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0326_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<String>"; }
};
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define ____FIVectorView_1_HSTRING_FWD_DEFINED__
#define __FIVectorView_1_HSTRING Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t

/* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_HSTRING_USE */


/* interface __MIDL_itf_Fabrikam_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam2Eidl_0000_0327 */




/* interface __MIDL_itf_Fabrikam2Eidl_0000_0327 */




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0327_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0327_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam_0000_0004 */
/* [local] */ 

#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVector`1<String>"; }
};
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define ____FIVector_1_HSTRING_FWD_DEFINED__
#define __FIVector_1_HSTRING Windows::Foundation::Collections::__FIVector_1_HSTRING_t

/* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVector_1_HSTRING_USE */


/* interface __MIDL_itf_Fabrikam_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam2Eidl_0000_0328 */




/* interface __MIDL_itf_Fabrikam2Eidl_0000_0328 */




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0328_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0328_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam_0000_0005 */
/* [local] */ 

#ifndef DEF___FIEventHandler_1_HSTRING_USE
#define DEF___FIEventHandler_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ac4cb24b-bf86-5ab0-bf9d-555e7d89764a"))
IEventHandler<HSTRING> : IEventHandler_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.EventHandler`1<String>"; }
};
typedef IEventHandler<HSTRING> __FIEventHandler_1_HSTRING_t;
#define ____FIEventHandler_1_HSTRING_FWD_DEFINED__
#define __FIEventHandler_1_HSTRING Windows::Foundation::__FIEventHandler_1_HSTRING_t

/* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIEventHandler_1_HSTRING_USE */


/* interface __MIDL_itf_Fabrikam_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam2Eidl_0000_0329 */




/* interface __MIDL_itf_Fabrikam2Eidl_0000_0329 */




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0329_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0329_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam_0000_0006 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_int_USE
#define DEF___FIAsyncOperationCompletedHandler_1_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d60cae9d-88cb-59f1-8576-3fba44796be8"))
IAsyncOperationCompletedHandler<int> : IAsyncOperationCompletedHandler_impl<int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Int32>"; }
};
typedef IAsyncOperationCompletedHandler<int> __FIAsyncOperationCompletedHandler_1_int_t;
#define ____FIAsyncOperationCompletedHandler_1_int_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_int Windows::Foundation::__FIAsyncOperationCompletedHandler_1_int_t

/* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_int_USE */


/* interface __MIDL_itf_Fabrikam_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam2Eidl_0000_0330 */




/* interface __MIDL_itf_Fabrikam2Eidl_0000_0330 */




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0330_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0330_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam_0000_0007 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_int_USE
#define DEF___FIAsyncOperation_1_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("968b9665-06ed-5774-8f53-8edeabd5f7b5"))
IAsyncOperation<int> : IAsyncOperation_impl<int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Int32>"; }
};
typedef IAsyncOperation<int> __FIAsyncOperation_1_int_t;
#define ____FIAsyncOperation_1_int_FWD_DEFINED__
#define __FIAsyncOperation_1_int Windows::Foundation::__FIAsyncOperation_1_int_t

/* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_int_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)


#ifdef __cplusplus
namespace Fabrikam {
class EnterpriseServer;
} /*Fabrikam*/
#endif


/* interface __MIDL_itf_Fabrikam_0000_0007 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam2Eidl_0000_0331 */




/* interface __MIDL_itf_Fabrikam2Eidl_0000_0331 */




extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0331_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam2Eidl_0000_0331_v0_0_s_ifspec;

/* interface __MIDL_itf_Fabrikam_0000_0008 */
/* [local] */ 

#ifndef DEF___FIEventHandler_1_HSTRING
#define DEF___FIEventHandler_1_HSTRING
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Fabrikam_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0008_v0_0_s_ifspec;

#ifndef ____FIEventHandler_1_HSTRING_INTERFACE_DEFINED__
#define ____FIEventHandler_1_HSTRING_INTERFACE_DEFINED__

/* interface __FIEventHandler_1_HSTRING */
/* [unique][uuid][object] */ 



/* interface __FIEventHandler_1_HSTRING */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIEventHandler_1_HSTRING;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ac4cb24b-bf86-5ab0-bf9d-555e7d89764a")
    __FIEventHandler_1_HSTRING : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ IInspectable *sender,
            /* [in] */ HSTRING e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIEventHandler_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIEventHandler_1_HSTRING * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIEventHandler_1_HSTRING * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIEventHandler_1_HSTRING * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __FIEventHandler_1_HSTRING * This,
            /* [in] */ IInspectable *sender,
            /* [in] */ HSTRING e);
        
        END_INTERFACE
    } __FIEventHandler_1_HSTRINGVtbl;

    interface __FIEventHandler_1_HSTRING
    {
        CONST_VTBL struct __FIEventHandler_1_HSTRINGVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIEventHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIEventHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIEventHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIEventHandler_1_HSTRING_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIEventHandler_1_HSTRING_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Fabrikam_0000_0009 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIEventHandler_1_HSTRING */
#if !defined(____x_Fabrikam_CIFoo_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Fabrikam_IFoo[] = L"Fabrikam.IFoo";
#endif /* !defined(____x_Fabrikam_CIFoo_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Fabrikam_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0009_v0_0_s_ifspec;

#ifndef ____x_Fabrikam_CIFoo_INTERFACE_DEFINED__
#define ____x_Fabrikam_CIFoo_INTERFACE_DEFINED__

/* interface __x_Fabrikam_CIFoo */
/* [uuid][object] */ 



/* interface Fabrikam::IFoo */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Fabrikam_CIFoo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace Fabrikam {
        
        MIDL_INTERFACE("96F6F9C8-253D-47F3-8D1E-55F9D5A42A10")
        IFoo : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE TestMethod( 
                /* [in] */ HSTRING input,
                /* [out][retval] */ __FIVector_1_HSTRING **value) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE add_PeriodicEvent( 
                /* [in] */ __FIEventHandler_1_HSTRING *value,
                /* [out][retval] */ EventRegistrationToken *returnValue) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE remove_PeriodicEvent( 
                /* [in] */ EventRegistrationToken value) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE FindElementAsync( 
                /* [in] */ INT32 input,
                /* [out][retval] */ __FIAsyncOperation_1_int **value) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE RetrieveData( 
                /* [out] */ UINT32 *__valueSize,
                /* [out][retval][size_is][size_is] */ HSTRING **value) = 0;
            
        };

        extern const __declspec(selectany) IID & IID_IFoo = __uuidof(IFoo);

        
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_Fabrikam_CIFooVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Fabrikam_CIFoo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Fabrikam_CIFoo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Fabrikam_CIFoo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Fabrikam_CIFoo * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Fabrikam_CIFoo * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Fabrikam_CIFoo * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *TestMethod )( 
            __x_Fabrikam_CIFoo * This,
            /* [in] */ HSTRING input,
            /* [out][retval] */ __FIVector_1_HSTRING **value);
        
        HRESULT ( STDMETHODCALLTYPE *add_PeriodicEvent )( 
            __x_Fabrikam_CIFoo * This,
            /* [in] */ __FIEventHandler_1_HSTRING *value,
            /* [out][retval] */ EventRegistrationToken *returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PeriodicEvent )( 
            __x_Fabrikam_CIFoo * This,
            /* [in] */ EventRegistrationToken value);
        
        HRESULT ( STDMETHODCALLTYPE *FindElementAsync )( 
            __x_Fabrikam_CIFoo * This,
            /* [in] */ INT32 input,
            /* [out][retval] */ __FIAsyncOperation_1_int **value);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveData )( 
            __x_Fabrikam_CIFoo * This,
            /* [out] */ UINT32 *__valueSize,
            /* [out][retval][size_is][size_is] */ HSTRING **value);
        
        END_INTERFACE
    } __x_Fabrikam_CIFooVtbl;

    interface __x_Fabrikam_CIFoo
    {
        CONST_VTBL struct __x_Fabrikam_CIFooVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Fabrikam_CIFoo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Fabrikam_CIFoo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Fabrikam_CIFoo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Fabrikam_CIFoo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Fabrikam_CIFoo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Fabrikam_CIFoo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Fabrikam_CIFoo_TestMethod(This,input,value)	\
    ( (This)->lpVtbl -> TestMethod(This,input,value) ) 

#define __x_Fabrikam_CIFoo_add_PeriodicEvent(This,value,returnValue)	\
    ( (This)->lpVtbl -> add_PeriodicEvent(This,value,returnValue) ) 

#define __x_Fabrikam_CIFoo_remove_PeriodicEvent(This,value)	\
    ( (This)->lpVtbl -> remove_PeriodicEvent(This,value) ) 

#define __x_Fabrikam_CIFoo_FindElementAsync(This,input,value)	\
    ( (This)->lpVtbl -> FindElementAsync(This,input,value) ) 

#define __x_Fabrikam_CIFoo_RetrieveData(This,__valueSize,value)	\
    ( (This)->lpVtbl -> RetrieveData(This,__valueSize,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Fabrikam_CIFoo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Fabrikam_0000_0010 */
/* [local] */ 

#ifndef RUNTIMECLASS_Fabrikam_EnterpriseServer_DEFINED
#define RUNTIMECLASS_Fabrikam_EnterpriseServer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Fabrikam_EnterpriseServer[] = L"Fabrikam.EnterpriseServer";
#endif


/* interface __MIDL_itf_Fabrikam_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fabrikam_0000_0010_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


