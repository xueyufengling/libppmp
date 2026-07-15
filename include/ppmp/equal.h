#ifndef _PPMP_EQUAL
#define _PPMP_EQUAL

#include "base.h"

#include "defs/num_equal.h"

/**
 * @brief 判断是否定义了#define __equal_def__token(x) x 宏，未定义则留下__equal_def__token(())，没有被小括号包围故__in_matched_parenthesis__()宏将其判定为0；如果已经定义，则只留下括号()，判定为1
 */
#define __equal_defined__(token) __in_matched_parenthesis__(__cat__(2, __equal_def__, token)(()))

/**
 * @brief 判断两个符号是否不相同。需要对两个符号m、n分别定义
 * 		  #define __equal_def__m(x) x
 * 		  #define __equal_def__n(x) x
 * 		  如果不定义，则比较结果始终是1
 * @detail 在__equal_defined__(token1/token2)均成立的情况下，如果两者相等，即__equal_def__token(__equal_def__token)(())由于宏被涂蓝标记后不会继续展开，最终留下__equal_def__token(())，如果不相同则最终留下括号()
 */
#define __not_equal__(token1, token2)\
		__if_else_intl__(__and_intl__(__equal_defined__(token1), __equal_defined__(token2)))\
		(\
			__in_matched_parenthesis__(__cat__(2, __equal_def__, token1)(__cat__(2, __equal_def__, token2))(())),\
			1\
		)

/**
 * @brief 判断两个token是否相同。如果if_else两个分支都存在，应当优先使用__not_equal__()，比起__equal__()可以少一次展开。
 */
#define __equal__(token1, token2) __not_intl__(__not_equal__(token1, token2))

#define __equal_def__(x) x
#define __equal_def__NULL(x) x
#define __equal_def__null(x) x
//C++保留字
#define __equal_def__asm(x) x
#define __equal_def__do(x) x
#define __equal_def__if(x) x
#define __equal_def__return(x) x
#define __equal_def__typedef(x) x
#define __equal_def__auto(x) x
#define __equal_def__double(x) x
#define __equal_def__inline(x) x
#define __equal_def__short(x) x
#define __equal_def__typeid(x) x
#define __equal_def__bool(x) x
#define __equal_def__dynamic_cast(x) x
#define __equal_def__int(x) x
#define __equal_def__signed(x) x
#define __equal_def__typename(x) x
#define __equal_def__break(x) x
#define __equal_def__else(x) x
#define __equal_def__long(x) x
#define __equal_def__sizeof(x) x
#define __equal_def__union(x) x
#define __equal_def__case(x) x
#define __equal_def__enum(x) x
#define __equal_def__mutable(x) x
#define __equal_def__static(x) x
#define __equal_def__unsigned(x) x
#define __equal_def__catch(x) x
#define __equal_def__explicit(x) x
#define __equal_def__namespace(x) x
#define __equal_def__static_cast(x) x
#define __equal_def__using(x) x
#define __equal_def__char(x) x
#define __equal_def__export(x) x
#define __equal_def__new(x) x
#define __equal_def__struct(x) x
#define __equal_def__virtual(x) x
#define __equal_def__class(x) x
#define __equal_def__extern(x) x
#define __equal_def__operator(x) x
#define __equal_def__switch(x) x
#define __equal_def__void(x) x
#define __equal_def__const(x) x
#define __equal_def__false(x) x
#define __equal_def__private(x) x
#define __equal_def__template(x) x
#define __equal_def__volatile(x) x
#define __equal_def__const_cast(x) x
#define __equal_def__float(x) x
#define __equal_def__protected(x) x
#define __equal_def__this(x) x
#define __equal_def__wchar_t(x) x
#define __equal_def__continue(x) x
#define __equal_def__for(x) x
#define __equal_def__public(x) x
#define __equal_def__throw(x) x
#define __equal_def__while(x) x
#define __equal_def__default(x) x
#define __equal_def__friend(x) x
#define __equal_def__register(x) x
#define __equal_def__true(x) x
#define __equal_def__delete(x) x
#define __equal_def__goto(x) x
#define __equal_def__reinterpret_cast(x) x
#define __equal_def__try(x) x
#define __equal_def__alignas(x) x
#define __equal_def__alignof(x) x
#define __equal_def__char16_t(x) x
#define __equal_def__char32_t(x) x
#define __equal_def__constexpr(x) x
#define __equal_def__decltype(x) x
#define __equal_def__noexcept(x) x
#define __equal_def__nullptr(x) x
#define __equal_def__static_assert(x) x
#define __equal_def__thread_local(x) x
#define __equal_def____asm__(x) x
#define __equal_def____volatile__(x) x
//预处理器指令
#define __equal_def__define(x) x
#define __equal_def__include(x) x
#define __equal_def__line(x) x
#define __equal_def__undef(x) x
#define __equal_def__error(x) x
#define __equal_def__pragma(x) x
#define __equal_def__defined(x) x
#define __equal_def__ifdef(x) x
#define __equal_def__ifndef(x) x
#define __equal_def__elif(x) x
#define __equal_def__endif(x) x

#endif//_PPMP_EQUAL
