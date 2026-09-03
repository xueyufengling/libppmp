#ifndef _PPMP_PRAGMA
#define _PPMP_PRAGMA

#include "cc.h"
#include "str.h"

/**
 * @brief 生成 #pragma ...
 */
#define __pragma__(...) _Pragma(__str__(__VA_ARGS__))

/**
 * @brief 提示编译期展开循环
 */
#if defined(__cc_gcc_compat__)
#define __pragma_unroll__(n) __pragma__(GCC unroll n)
#else
// 不支持手动控制循环展开
#define __pragma_unroll__(n)
#endif

/**
 * @brief 循环内无数据依赖，提示编译器使用向量化指令、流水线进行优化
 */
#if defined(__cc_gcc_compat__)
#define __pragma_ivdep__() __pragma__(GCC ivdep)
#else
// 不支持手动控制循环展开
#define __pragma_ivdep__()
#endif

/**
 * @brief 阻止循环向量化
 */
#if defined(__cc_gcc_compat__)
#define __pragma_novector__() __pragma__(GCC novector)
#else
#define __pragma_novector__()
#endif

/**
 * @brief 结构体对齐字节数
 */
#define __pragma_pack__(...) __pragma__(pack(__VA_ARGS__))

#endif//_PPMP_PRAGMA
