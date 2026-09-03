#ifndef _PPMP_VAMACRO
#define _PPMP_VAMACRO

#include "intl/cat.h"

#include "list.h"

/**
 * @brief 重载的名称，为原名称+参数个数
 * 		  定义重载参数宏的示例，重载宏的名称需要与__va_macro__()保持一致
 * 		  例如定义一个名为example_macro的宏，并实现其0、1、2个参数的实现，可以写为
 * 		  #define example_macro(...) __va_macro__(example_macro, __VA_ARGS__)(__VA_ARGS__)
 * 		  #define example_macro0() ...
 * 		  #define example_macro1(x) ...
 * 		  #define example_macro2(x, y) ...
 */
#define __va_macro__(macro_name, ...) __cat_2__(macro_name, __sizeof__(__VA_ARGS__))

#define __call_va_macro__(macro_name, ...) __va_macro__(macro_name, __VA_ARGS__)(__VA_ARGS__)

#endif//_PPMP_VAMACRO
