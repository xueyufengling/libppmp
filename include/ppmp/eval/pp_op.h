#ifndef _PPMP_EVAL_PPOP
#define _PPMP_EVAL_PPOP

#include "../token.h"
#include "../defs/eval/pp_store_op_info.h"

/**
 * @brief 利用#include导入头文件中的#if预处理指令对表达式求值
 */

/**
 * @brief 取第n位数字，若是0且高位没有非0有效数字，则宏定义为空；若高位还有非0有效数字，则定义为0.如果表达式等于0，则只有各位定义为0，高位全部定义为空
 * 		  在拼接文件路径时，4与digit_at_之间不能有空格，否则空格也会被视作为路径，导致找不到文件。
 */
#define __pp_store_op_digit__(op, n) <ppmp/defs/eval/__cat__(4,pp_store_op_, op, _, n).h>

/**
 * @brief 第n位数字的计算结果值
 */
#define __pp_op_digit__(op, n) __cat__(5, __pp_op_, op, _, n, __)()

/**
 * @brief 使用
 * 		  #include __pp_store_op__(op)
 * 		  为op赋值表达式。
 */
#define __pp_store_op__(op) <ppmp/defs/eval/__cat__(2,pp_store_op_, op).h>

/**
 * @brief 储存在op中的数值。
 */
#define __pp_op__(op) __cat__(3, __pp_op_, op, __)()

#endif//_PPMP_EVAL_PPOP
