#ifndef _PPMP_CALL
#define _PPMP_CALL

#include "defs/call_exp.h"

#include "intl/cat.h"

/**
 * @brief 展开一次参数并调用。如果参数宏生成了参数列表，则列表的各元素将按位传入
 * 		  用法：__call_exp__(n)(macro_name, ...)
 * 		  其中expand_id同循环的expand_id一样
 */
#define __call_exp__(expand_id) __cat_2__(__call_exp__, expand_id)

#endif//_PPMP_CALL
