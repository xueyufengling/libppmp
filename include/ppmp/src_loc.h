#ifndef _PPMP_SRCLOC
#define _PPMP_SRCLOC

#include "cc.h"

/**
 * 使用宏获取当前源文件信息
 */
#define __func_name__() (__FUNCTION__)
#define __file_name__() (__FILE__)
#define __line__() (__LINE__)

#if defined(__cc_gcc_compat__)
#define __func_sig__() (__PRETTY_FUNCTION__)
#elif defined(__cc_msvc_compat__)
#define __func_sig__() (__FUNCSIG__)
#endif

#endif//_PPMP_SRCLOC
