#ifndef _PPMP_INCL_PPOP
#define _PPMP_INCL_PPOP

/**
 * @brief 利用#include导入头文件中的#if预处理指令对表达式求值并储存，储存值仅在所在的编译单元有效。
 * 		  #if指令计算的结果是静态地重新定义的，与原本的__pp_expr__()宏无关，因此即便原表达式宏改变，结果也不会丢失
 */

/**
 * __store_pp_op_digit__(op, n)
 * @brief 取第n位数字，若是0且高位没有非0有效数字，则宏定义为空；若高位还有非0有效数字，则定义为0.如果表达式等于0，则只有各位定义为0，高位全部定义为空
 * 		  在拼接文件路径时，4与digit_at_之间不能有空格，否则空格也会被视作为路径，导致找不到文件。使用
 * 		  #include __pp_store_op_digit__(op, n)
 */

/**
 * __pp_op_digit__(op, n)
 * @brief 第n位数字的计算结果值
 */

/**
 * __store_pp_op__(op)
 * @brief 储存值到操作数，使用
 * 		  #include __pp_store_op__(op)
 * 		  为op赋值表达式。
 */

/**
 * __pp_op__(op)
 * @brief 储存在op中的数值。
 */
#include "../defs/incl/op/store_pp_op.h"

#endif//_PPMP_INCL_PPOP
