#if defined(__pp_expr__)

#undef __pp_op_7__

#if (__pp_expr__()) == 0

#define __pp_op_7_0__() 0
#define __pp_op_7_1__()
#define __pp_op_7_2__()
#define __pp_op_7_3__()
#define __pp_op_7_4__()
#define __pp_op_7_5__()
#define __pp_op_7_6__()
#define __pp_op_7_7__()
#define __pp_op_7_8__()
#define __pp_op_7_9__()
#define __pp_op_7_10__()
#define __pp_op_7_11__()
#define __pp_op_7_12__()
#define __pp_op_7_13__()
#define __pp_op_7_14__()
#define __pp_op_7_15__()
#define __pp_op_7_16__()
#define __pp_op_7_17__()
#define __pp_op_7_18__()
#define __pp_op_7_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(7, 0)
#include __store_pp_op_digit__(7, 1)
#include __store_pp_op_digit__(7, 2)
#include __store_pp_op_digit__(7, 3)
#include __store_pp_op_digit__(7, 4)
#include __store_pp_op_digit__(7, 5)
#include __store_pp_op_digit__(7, 6)
#include __store_pp_op_digit__(7, 7)
#include __store_pp_op_digit__(7, 8)
#include __store_pp_op_digit__(7, 9)
#include __store_pp_op_digit__(7, 10)
#include __store_pp_op_digit__(7, 11)
#include __store_pp_op_digit__(7, 12)
#include __store_pp_op_digit__(7, 13)
#include __store_pp_op_digit__(7, 14)
#include __store_pp_op_digit__(7, 15)
#include __store_pp_op_digit__(7, 16)
#include __store_pp_op_digit__(7, 17)
#include __store_pp_op_digit__(7, 18)

#endif

#define __pp_op_7__() __cat__(19, __pp_op_7_18__(), __pp_op_7_17__(), __pp_op_7_16__(), __pp_op_7_15__(), __pp_op_7_14__(), __pp_op_7_13__(), __pp_op_7_12__(), __pp_op_7_11__(), __pp_op_7_10__(), __pp_op_7_9__(), __pp_op_7_8__(), __pp_op_7_7__(), __pp_op_7_6__(), __pp_op_7_5__(), __pp_op_7_4__(), __pp_op_7_3__(), __pp_op_7_2__(), __pp_op_7_1__(), __pp_op_7_0__())

#include <ppmp/defs/incl/op/pp_expr_auto_undef.h>

#else

#error "store 'pp_op' 7 failed. expr '__pp_expr__' not defined"

#endif
