#if defined(__pp_expr__)

#if (__pp_expr__()) == 0

#define __pp_op_2_0__() 0
#define __pp_op_2_1__()
#define __pp_op_2_2__()
#define __pp_op_2_3__()
#define __pp_op_2_4__()
#define __pp_op_2_5__()
#define __pp_op_2_6__()
#define __pp_op_2_7__()
#define __pp_op_2_8__()
#define __pp_op_2_9__()
#define __pp_op_2_10__()
#define __pp_op_2_11__()
#define __pp_op_2_12__()
#define __pp_op_2_13__()
#define __pp_op_2_14__()
#define __pp_op_2_15__()
#define __pp_op_2_16__()
#define __pp_op_2_17__()
#define __pp_op_2_18__()
#define __pp_op_2_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(2, 0)
#include __store_pp_op_digit__(2, 1)
#include __store_pp_op_digit__(2, 2)
#include __store_pp_op_digit__(2, 3)
#include __store_pp_op_digit__(2, 4)
#include __store_pp_op_digit__(2, 5)
#include __store_pp_op_digit__(2, 6)
#include __store_pp_op_digit__(2, 7)
#include __store_pp_op_digit__(2, 8)
#include __store_pp_op_digit__(2, 9)
#include __store_pp_op_digit__(2, 10)
#include __store_pp_op_digit__(2, 11)
#include __store_pp_op_digit__(2, 12)
#include __store_pp_op_digit__(2, 13)
#include __store_pp_op_digit__(2, 14)
#include __store_pp_op_digit__(2, 15)
#include __store_pp_op_digit__(2, 16)
#include __store_pp_op_digit__(2, 17)
#include __store_pp_op_digit__(2, 18)

#endif

#undef __pp_op_2__
#define __pp_op_2__() __cat__(19, __pp_op_2_18__(), __pp_op_2_17__(), __pp_op_2_16__(), __pp_op_2_15__(), __pp_op_2_14__(), __pp_op_2_13__(), __pp_op_2_12__(), __pp_op_2_11__(), __pp_op_2_10__(), __pp_op_2_9__(), __pp_op_2_8__(), __pp_op_2_7__(), __pp_op_2_6__(), __pp_op_2_5__(), __pp_op_2_4__(), __pp_op_2_3__(), __pp_op_2_2__(), __pp_op_2_1__(), __pp_op_2_0__())

#include "pp_expr_auto_undef.h"

#else

#error "store 'pp_op' 2 failed. expr '__pp_expr__()' not defined"

#endif
