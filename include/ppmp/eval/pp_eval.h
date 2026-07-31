#ifndef _PPMP_EVAL_PPEVAL
#define _PPMP_EVAL_PPEVAL

#include "../token.h"

/**
 * @brief 利用#include导入头文件中的#if预处理指令对表达式求值
 */
#define __pp_eval__(n) <ppmp/eval/intl/__cat__(2, __pp_eval_i__, n).h>

#endif//_PPMP_EVAL_PPEVAL
