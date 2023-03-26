//
// MATLAB Compiler: 8.5 (R2022b)
// Date: Sun Mar 26 11:22:22 2023
// Arguments:
// "-B""macro_default""-W""cpplib:eigmatrix,all,version=1.0""-T""link:lib""-d""C
// :\Users\admin\Documents\MATLAB\matrix\eigmatrix\for_testing""-v""C:\Users\adm
// in\Documents\MATLAB\matrix\eigmatrix.m"
//

#ifndef eigmatrix_h
#define eigmatrix_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" { // sbcheck:ok:extern_c
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_eigmatrix_C_API 
#define LIB_eigmatrix_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_eigmatrix_C_API 
bool MW_CALL_CONV eigmatrixInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_eigmatrix_C_API 
bool MW_CALL_CONV eigmatrixInitialize(void);

extern LIB_eigmatrix_C_API 
void MW_CALL_CONV eigmatrixTerminate(void);

extern LIB_eigmatrix_C_API 
void MW_CALL_CONV eigmatrixPrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_eigmatrix_C_API 
bool MW_CALL_CONV mlxEigmatrix(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#ifdef __cplusplus
}
#endif


/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__MINGW64__)

#ifdef EXPORTING_eigmatrix
#define PUBLIC_eigmatrix_CPP_API __declspec(dllexport)
#else
#define PUBLIC_eigmatrix_CPP_API __declspec(dllimport)
#endif

#define LIB_eigmatrix_CPP_API PUBLIC_eigmatrix_CPP_API

#else

#if !defined(LIB_eigmatrix_CPP_API)
#if defined(LIB_eigmatrix_C_API)
#define LIB_eigmatrix_CPP_API LIB_eigmatrix_C_API
#else
#define LIB_eigmatrix_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_eigmatrix_CPP_API void MW_CALL_CONV eigmatrix(int nargout, mwArray& e, const mwArray& a1);

/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */
#endif

#endif
