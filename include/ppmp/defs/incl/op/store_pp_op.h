#ifndef _PPMP_DEFS_INCL_OP_STOREPPOP
#define _PPMP_DEFS_INCL_OP_STOREPPOP

#include <ppmp/token.h>

#define __pp_op_digit_max_num__(...) 20
#define __pp_op_digit_max_idx__(...) 19
#define __pp_op_max_num__(...) 17
#define __pp_op_max_idx__(...) 16

#define __store_pp_op_digit__(st, n) <__cat__(5,ppmp/defs/incl/op/pp_op, _, st, _, n).h>
#define __pp_op_digit__(st, n) __cat__(5, __pp_op_, st, _, n, __)()
#define __store_pp_op__(st) <__cat__(3,ppmp/defs/incl/op/pp_op, _, st).h>
#define __pp_op__(st) __cat__(3, __pp_op_, st, __)()

#endif