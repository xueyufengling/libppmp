#ifndef _PPMP_GCCDEF
#define _PPMP_GCCDEF

#include "cc.h"
#include "base.h"
#include "list_op_step.h"
#include "loop.h"

// 统一使用GCC拓展语法，注意变量、函数名不能与本文件定义的宏名重合
// 编译时的编译器必须与cc.h宏获取到的完全一致，否则非预期的宏替换会引发语法错误。

#if defined(__cc_gcc_compatible__)

#define __gccdef_active__() 1

#elif defined(__cc_msvc_compatible__)

#define __gccdef_active__() 1

#if !defined(__msvc_attribute_expand_id__)
#define __msvc_attribute_expand_id__() 0
#endif

#define __asm__  __asm
#define __restrict__ __restrict
#define __thread __declspec(thread)

// 不能写在__declspec()中的属性，需要写成独立关键字
#define __msvc_attribute_keyword_always_inline(...) __forceinline
#define __msvc_attribute_keyword_stdcall(...) __stdcall
#define __msvc_attribute_keyword_cdecl(...) __cdecl
#define __msvc_attribute_keyword_fastcall(...) __fastcall
#define __msvc_attribute_keyword_vectorcall(...) __vectorcall
#define __msvc_attribute_keyword_thiscall(...) __thiscall
#define __msvc_attribute_keyword_dllexport(...)
#define __msvc_attribute_keyword_dllimport(...)
#define __msvc_attribute_keyword_deprecated(...)
#define __msvc_attribute_keyword_aligned(n)
#define __msvc_attribute_keyword_section(sec)
#define __msvc_attribute_keyword_naked(...)
#define __msvc_attribute_keyword_noinline(...)
#define __msvc_attribute_keyword_noreturn(...)

#define __msvc_attribute_keyword_op_intl__(...)\
	__cat_front__(2, __msvc_attribute_keyword_, __VA_ARGS__)(__list_rest__(1)(__VA_ARGS__))

#define __msvc_attribute_keyword_op__(i, begin_idx, end_idx, const_params, attr)\
	__msvc_attribute_keyword_op_intl__(__try_unpack__(attr))

#define __msvc_attribute_keyword__(...)\
	__for_each__(__msvc_attribute_expand_id__())(__msvc_attribute_keyword_op__, , __VA_ARGS__)

// 可以写在__declspec()中的属性
#define aligned(n) (aligned, n)
#define section(sec) (section, sec)

#define __msvc_attribute_declspec_always_inline(...)
#define __msvc_attribute_declspec_stdcall(...)
#define __msvc_attribute_declspec_cdecl(...)
#define __msvc_attribute_declspec_fastcall(...)
#define __msvc_attribute_declspec_vectorcall(...)
#define __msvc_attribute_declspec_thiscall(...)
#define __msvc_attribute_declspec_dllexport(...) dllexport
#define __msvc_attribute_declspec_dllimport(...) dllimport
#define __msvc_attribute_declspec_deprecated(...) deprecated
#define __msvc_attribute_declspec_aligned(n) align(n)
#define __msvc_attribute_declspec_section(sec) code_seg(sec)
#define __msvc_attribute_declspec_naked(...) naked
#define __msvc_attribute_declspec_noinline(...) noinline
#define __msvc_attribute_declspec_noreturn(...) noreturn

#define __msvc_attribute_declspec_op_intl__(...)\
	__back_va_opt_comma__(__cat_front__(2, __msvc_attribute_declspec_, __VA_ARGS__)(__list_rest__(1)(__VA_ARGS__)))

#define __msvc_attribute_declspec_op__(i, begin_idx, end_idx, const_params, attr)\
	__msvc_attribute_declspec_op_intl__(__try_unpack__(attr))

#define __msvc_attribute_declspec__(...)\
	__declspec(__strip_trailing_1_comma__(__for_each__(__msvc_attribute_expand_id__())(__msvc_attribute_declspec_op__, , __VA_ARGS__)))

#define __msvc_attribute_intl__(...)\
	__msvc_attribute_keyword__(__VA_ARGS__) __msvc_attribute_declspec__(__VA_ARGS__)

/**
 * @brief GCC编译器拓展属性。
 * 		  若在MSVC中也是写在__declspec()中的属性，则全部统一写在__declspec()内；对于MSVC中的独立关键字，则依次拆分写在前面。
 */
#define __attribute__(attrs)\
	__msvc_attribute_intl__(__unpack__(attrs))

// built-in函数

/**
 * @brief 手动条件保证，承诺程序执行到此处时条件表达式一定为true，并且编译器将基于“本声明的条件表达式不为false，不需要为false情形生成正确逻辑的机器码”的假设对后续代码进行true情形的激进优化。实际不生成机器码，仅仅是编译期标记（生成IR）。
 * 		  有多种优化策略基于此保证，其中部分优化必须保证编译器能看到条件表达式的完整定义（同一编译单元或开启Link Time Optimization），从而可得到表达式推导出的（寄存器等）状态（并且已知表达式值为true）以及上下文状态，进行整体优化。
 * 		  若实际执行时条件为false，执行流一旦越过了此标记，那后续的执行流完全是UB（舍弃了false情形的逻辑正确性，全力优化true情形）。
 */
#define __builtin_assume(...) __assume(__VA_ARGS__)

/**
 * @brief 承诺当前函数内运行到此声明处时，之后的代码流永远不会到达（即死代码，相当于函数在此声明之前就已经终结），从而允许编译器对死分支外的代码静态地激进优化。
 * 		  实际上正是__builtin_assume(0)，不论条件是否为真，编译器都将激进优化，而实际上0==true永远为false，执行流一旦越过此标记则是UB。
 * @detail 例如以下示例
 * void func(int* p)
 * {
 *     // p可能是NULL，也可能不是
 *     if (p == NULL)
 *     {
 *         handle_error();
 *        __builtin_unreachable(); //如果真的p==NULL，那么此行标记之后的程序进入UB，因此handle_error()函数不应该返回到本函数内。
 *     }
 *     // 因为__builtin_unreachable()的承诺，编译器认为如果程序能运行到这里，说明p一定不是NULL，从而可以激进优化代码。
 *     *p = 10;
 * }
 */
#define __builtin_unreachable() __builtin_assume(0)

/**
 * @brief 获取从当前栈帧算起的第i栈帧返回地址，i必须是立即数（数字字面量）。
 * 		  由于MSVC不支持跨栈帧回溯，参数必须是0.
 */
#define __builtin_return_address(i)\
	__if_intl__(__not_equal__(i, 0))\
	(\
		static_assert(false, "unwind return address builtin-function at " __str__(i) " is not supported in msvc"),\
		_ReturnAddress()\
	)

/**
 * @brief 获取从当前栈帧算起的第i栈帧函数头地址，i必须是立即数（数字字面量）。
 * 		  由于MSVC不支持跨栈帧回溯，参数必须是0.
 */
#define __builtin_frame_address(i)\
	__if_intl__(__not_equal__(i, 0))\
	(\
		static_assert(false, "unwind frame address builtin-function at " __str__(i) " is not supported in msvc"),\
		_AddressOfReturnAddress()\
	)

#else

#define __gccdef_active__() 0

#endif

#endif//_PPMP_GCCDEF
