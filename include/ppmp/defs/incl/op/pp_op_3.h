#if defined(__pp_expr__)

#undef __pp_op_3__

#if (__pp_expr__()) == 0

#define __pp_op_3_0__() 0
#define __pp_op_3_1__()
#define __pp_op_3_2__()
#define __pp_op_3_3__()
#define __pp_op_3_4__()
#define __pp_op_3_5__()
#define __pp_op_3_6__()
#define __pp_op_3_7__()
#define __pp_op_3_8__()
#define __pp_op_3_9__()
#define __pp_op_3_10__()
#define __pp_op_3_11__()
#define __pp_op_3_12__()
#define __pp_op_3_13__()
#define __pp_op_3_14__()
#define __pp_op_3_15__()
#define __pp_op_3_16__()
#define __pp_op_3_17__()
#define __pp_op_3_18__()
#define __pp_op_3_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(3, 0)
#include __store_pp_op_digit__(3, 1)
#include __store_pp_op_digit__(3, 2)
#include __store_pp_op_digit__(3, 3)
#include __store_pp_op_digit__(3, 4)
#include __store_pp_op_digit__(3, 5)
#include __store_pp_op_digit__(3, 6)
#include __store_pp_op_digit__(3, 7)
#include __store_pp_op_digit__(3, 8)
#include __store_pp_op_digit__(3, 9)
#include __store_pp_op_digit__(3, 10)
#include __store_pp_op_digit__(3, 11)
#include __store_pp_op_digit__(3, 12)
#include __store_pp_op_digit__(3, 13)
#include __store_pp_op_digit__(3, 14)
#include __store_pp_op_digit__(3, 15)
#include __store_pp_op_digit__(3, 16)
#include __store_pp_op_digit__(3, 17)
#include __store_pp_op_digit__(3, 18)

#endif

#define __pp_op_3__() __cat__(19, __pp_op_3_18__(), __pp_op_3_17__(), __pp_op_3_16__(), __pp_op_3_15__(), __pp_op_3_14__(), __pp_op_3_13__(), __pp_op_3_12__(), __pp_op_3_11__(), __pp_op_3_10__(), __pp_op_3_9__(), __pp_op_3_8__(), __pp_op_3_7__(), __pp_op_3_6__(), __pp_op_3_5__(), __pp_op_3_4__(), __pp_op_3_3__(), __pp_op_3_2__(), __pp_op_3_1__(), __pp_op_3_0__())

#include <ppmp/defs/incl/op/pp_expr_auto_undef.h>

#else

#error "store 'pp_op' 3 failed. expr '__pp_expr__' not defined"

#endif
