#ifndef _PPMP_ARITH
#define _PPMP_ARITH

#include "token.h"

#include "defs/inc.h"
#include "defs/dec.h"

/**
 * @brief 自增运算，n表示负数
 */
#define __inc__(x) __cat__(2, __inc__, x)()

/**
 * @brief 自减运算，n表示负数
 */
#define __dec__(x) __cat__(2, __dec__, x)()

/**
 * @brief 取第n位数字
 */
#define __digit_at__(n) <ppmp/defs/eval/__cat__(2, __digit_at_val__, n).h>
// 最大只支持

#define __eval_max_digit__() 19

#define __pp_eval_expr__() 987
#define __pp_eval_expr_auto_undef__() 987

// __digit_at_val__0.h

#if defined(__pp_eval_expr__)

#if __pp_eval_expr__() % 10 == 0
#define __digit_at_val__0() 0
#elif __pp_eval_expr__() % 10 == 1
#define __digit_at_val__0() 1
#elif __pp_eval_expr__() % 10 == 2
#define __digit_at_val__0() 2
#elif __pp_eval_expr__() % 10 == 3
#define __digit_at_val__0() 3
#elif __pp_eval_expr__() % 10 == 4
#define __digit_at_val__0() 4
#elif __pp_eval_expr__() % 10 == 5
#define __digit_at_val__0() 5
#elif __pp_eval_expr__() % 10 == 6
#define __digit_at_val__0() 6
#elif __pp_eval_expr__() % 10 == 7
#define __digit_at_val__0() 7
#elif __pp_eval_expr__() % 10 == 8
#define __digit_at_val__0() 8
#elif __pp_eval_expr__() % 10 == 9
#define __digit_at_val__0() 9
#endif

#include <ppmp/eval/intl/expr_auto_undef.h>

#endif

#endif//_PPMP_ARITH
