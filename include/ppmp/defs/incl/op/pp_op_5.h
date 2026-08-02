#if defined(__pp_expr__)

#undef __pp_op_5__

#if (__pp_expr__()) == 0

#define __pp_op_5_0__() 0
#define __pp_op_5_1__()
#define __pp_op_5_2__()
#define __pp_op_5_3__()
#define __pp_op_5_4__()
#define __pp_op_5_5__()
#define __pp_op_5_6__()
#define __pp_op_5_7__()
#define __pp_op_5_8__()
#define __pp_op_5_9__()
#define __pp_op_5_10__()
#define __pp_op_5_11__()
#define __pp_op_5_12__()
#define __pp_op_5_13__()
#define __pp_op_5_14__()
#define __pp_op_5_15__()
#define __pp_op_5_16__()
#define __pp_op_5_17__()
#define __pp_op_5_18__()
#define __pp_op_5_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(5, 0)
#include __store_pp_op_digit__(5, 1)
#include __store_pp_op_digit__(5, 2)
#include __store_pp_op_digit__(5, 3)
#include __store_pp_op_digit__(5, 4)
#include __store_pp_op_digit__(5, 5)
#include __store_pp_op_digit__(5, 6)
#include __store_pp_op_digit__(5, 7)
#include __store_pp_op_digit__(5, 8)
#include __store_pp_op_digit__(5, 9)
#include __store_pp_op_digit__(5, 10)
#include __store_pp_op_digit__(5, 11)
#include __store_pp_op_digit__(5, 12)
#include __store_pp_op_digit__(5, 13)
#include __store_pp_op_digit__(5, 14)
#include __store_pp_op_digit__(5, 15)
#include __store_pp_op_digit__(5, 16)
#include __store_pp_op_digit__(5, 17)
#include __store_pp_op_digit__(5, 18)

#endif

#define __pp_op_5__() __cat__(19, __pp_op_5_18__(), __pp_op_5_17__(), __pp_op_5_16__(), __pp_op_5_15__(), __pp_op_5_14__(), __pp_op_5_13__(), __pp_op_5_12__(), __pp_op_5_11__(), __pp_op_5_10__(), __pp_op_5_9__(), __pp_op_5_8__(), __pp_op_5_7__(), __pp_op_5_6__(), __pp_op_5_5__(), __pp_op_5_4__(), __pp_op_5_3__(), __pp_op_5_2__(), __pp_op_5_1__(), __pp_op_5_0__())

#include <ppmp/defs/incl/op/pp_expr_auto_undef.h>

#else

#error "store 'pp_op' 5 failed. expr '__pp_expr__' not defined"

#endif
