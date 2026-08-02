#if defined(__pp_expr__)

#undef __pp_op_15__

#if (__pp_expr__()) == 0

#define __pp_op_15_0__() 0
#define __pp_op_15_1__()
#define __pp_op_15_2__()
#define __pp_op_15_3__()
#define __pp_op_15_4__()
#define __pp_op_15_5__()
#define __pp_op_15_6__()
#define __pp_op_15_7__()
#define __pp_op_15_8__()
#define __pp_op_15_9__()
#define __pp_op_15_10__()
#define __pp_op_15_11__()
#define __pp_op_15_12__()
#define __pp_op_15_13__()
#define __pp_op_15_14__()
#define __pp_op_15_15__()
#define __pp_op_15_16__()
#define __pp_op_15_17__()
#define __pp_op_15_18__()
#define __pp_op_15_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(15, 0)
#include __store_pp_op_digit__(15, 1)
#include __store_pp_op_digit__(15, 2)
#include __store_pp_op_digit__(15, 3)
#include __store_pp_op_digit__(15, 4)
#include __store_pp_op_digit__(15, 5)
#include __store_pp_op_digit__(15, 6)
#include __store_pp_op_digit__(15, 7)
#include __store_pp_op_digit__(15, 8)
#include __store_pp_op_digit__(15, 9)
#include __store_pp_op_digit__(15, 10)
#include __store_pp_op_digit__(15, 11)
#include __store_pp_op_digit__(15, 12)
#include __store_pp_op_digit__(15, 13)
#include __store_pp_op_digit__(15, 14)
#include __store_pp_op_digit__(15, 15)
#include __store_pp_op_digit__(15, 16)
#include __store_pp_op_digit__(15, 17)
#include __store_pp_op_digit__(15, 18)

#endif

#define __pp_op_15__() __cat__(19, __pp_op_15_18__(), __pp_op_15_17__(), __pp_op_15_16__(), __pp_op_15_15__(), __pp_op_15_14__(), __pp_op_15_13__(), __pp_op_15_12__(), __pp_op_15_11__(), __pp_op_15_10__(), __pp_op_15_9__(), __pp_op_15_8__(), __pp_op_15_7__(), __pp_op_15_6__(), __pp_op_15_5__(), __pp_op_15_4__(), __pp_op_15_3__(), __pp_op_15_2__(), __pp_op_15_1__(), __pp_op_15_0__())

#include <ppmp/defs/incl/op/pp_expr_auto_undef.h>

#else

#error "store 'pp_op' 15 failed. expr '__pp_expr__' not defined"

#endif
