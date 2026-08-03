#ifndef _PPMP_DEFS_INCL_FOR_STOREPPFORI
#define _PPMP_DEFS_INCL_FOR_STOREPPFORI

#include <ppmp/token.h>

#define __pp_for_i_digit_max_num__(...) 19
#define __pp_for_i_digit_max_idx__(...) 18
#define __pp_for_i_max_num__(...) 16
#define __pp_for_i_max_idx__(...) 15

#define __store_pp_for_i_digit__(st, n) <__cat__(5,ppmp/defs/incl/for/pp_for_i, _, st, _, n).h>
#define __pp_for_i_digit__(st, n) __cat__(5, __pp_for_i_, st, _, n, __)()
#define __store_pp_for_i__(st) <__cat__(3,ppmp/defs/incl/for/pp_for_i, _, st).h>
#define __pp_for_i__(st) __cat__(3, __pp_for_i_, st, __)()

#define __pp_expr_for_i_support_auto_undef__() 1
#define __pp_expr_for_i_check_auto_undef__() 0

#endif