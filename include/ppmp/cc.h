#ifndef _PPMP_CC
#define _PPMP_CC

// ***** 编译器类型 *****

#if defined(__INTEL_COMPILER)

#define __cc_icc__ 1
#define __cc_icc_ver__ __INTEL_COMPILER

// ICC会同时定义__INTEL_COMPILER和_MSC_VER或__GNUC__中的一个
#define __cc_compat_mode__ 1

#endif

#if defined(__clang__)

#define __cc_clang__ 1
#define __cc_clang_ver__ __clang__

// Clang(Xcode, Android NDK, LLVM)
// Clang会同时定义__GNUC__和__clang__
#define __cc_compat_mode__ 1

#endif

// MSVC和GCC是事实标准，其它编译器都会为了兼容性模拟其中之一

#if defined(_MSC_VER)

#define __cc_msvc_compat__ 1
#define __cc_msvc_compat_ver__ _MSC_VER

// MSVC(Visual Studio)
#if !defined(__cc_compat_mode__)
#define __cc_msvc__ 1
#define __cc_msvc_ver__ _MSC_VER
#endif

#endif

#if defined(__GNUC__)

#define __cc_gcc_compat__ 1
#define __cc_gcc_compat_ver__ __GNUC__

#if !defined(__cc_compat_mode__)
#define __cc_gcc__ 1
#define __cc_gcc_ver__ __GNUC__
#endif

#endif

// ***** C/C++版本号 *****

#if defined(__STDC__) && (__STDC__ >= 1) && defined(__STDC_VERSION__)
#define __std_c__ __STDC_VERSION__
#else
#define __std_c__ 0
#endif

#if defined(__cplusplus)
#define __std_cxx__ __cplusplus
#else
#define __std_cxx__ 0
#endif

#endif//_PPMP_CC
