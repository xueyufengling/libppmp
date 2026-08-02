#if defined(__pp_expr__)

#undef __pp_op_4__

#if (__pp_expr__()) == 0

#define __pp_op_4_0__() 0
#define __pp_op_4_1__()
#define __pp_op_4_2__()
#define __pp_op_4_3__()
#define __pp_op_4_4__()
#define __pp_op_4_5__()
#define __pp_op_4_6__()
#define __pp_op_4_7__()
#define __pp_op_4_8__()
#define __pp_op_4_9__()
#define __pp_op_4_10__()
#define __pp_op_4_11__()
#define __pp_op_4_12__()
#define __pp_op_4_13__()
#define __pp_op_4_14__()
#define __pp_op_4_15__()
#define __pp_op_4_16__()
#define __pp_op_4_17__()
#define __pp_op_4_18__()
#define __pp_op_4_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(4, 0)
#include __store_pp_op_digit__(4, 1)
#include __store_pp_op_digit__(4, 2)
#include __store_pp_op_digit__(4, 3)
#include __store_pp_op_digit__(4, 4)
#include __store_pp_op_digit__(4, 5)
#include __store_pp_op_digit__(4, 6)
#include __store_pp_op_digit__(4, 7)
#include __store_pp_op_digit__(4, 8)
#include __store_pp_op_digit__(4, 9)
#include __store_pp_op_digit__(4, 10)
#include __store_pp_op_digit__(4, 11)
#include __store_pp_op_digit__(4, 12)
#include __store_pp_op_digit__(4, 13)
#include __store_pp_op_digit__(4, 14)
#include __store_pp_op_digit__(4, 15)
#include __store_pp_op_digit__(4, 16)
#include __store_pp_op_digit__(4, 17)
#include __store_pp_op_digit__(4, 18)

#endif

#define __pp_op_4__() __cat__(19, __pp_op_4_18__(), __pp_op_4_17__(), __pp_op_4_16__(), __pp_op_4_15__(), __pp_op_4_14__(), __pp_op_4_13__(), __pp_op_4_12__(), __pp_op_4_11__(), __pp_op_4_10__(), __pp_op_4_9__(), __pp_op_4_8__(), __pp_op_4_7__(), __pp_op_4_6__(), __pp_op_4_5__(), __pp_op_4_4__(), __pp_op_4_3__(), __pp_op_4_2__(), __pp_op_4_1__(), __pp_op_4_0__())

#include <ppmp/defs/incl/op/pp_expr_auto_undef.h>

#else

#error "store 'pp_op' 4 failed. expr '__pp_expr__' not defined"

#endif
