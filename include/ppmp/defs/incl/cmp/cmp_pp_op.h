#ifndef _PPMP_DEFS_INCL_CMP_CMPPPOP
#define _PPMP_DEFS_INCL_CMP_CMPPPOP

#include <ppmp/token.h>

#define __cmp_pp_op__(st1, st2) <__cat__(5,ppmp/defs/incl/cmp/pp_op, _cmp_, st1, _, st2).h>
#define __pp_op_lt__(st1, st2) __cat__(5, __pp_op_lt_, st1, _, st2, __)()
#define __pp_op_eq__(st1, st2) __cat__(5, __pp_op_eq_, st1, _, st2, __)()
#define __pp_op_gt__(st1, st2) __cat__(5, __pp_op_gt_, st1, _, st2, __)()

#endif