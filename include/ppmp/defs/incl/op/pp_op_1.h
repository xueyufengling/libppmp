#if defined(__pp_expr__)

#if (__pp_expr__()) == 0

#define __pp_op_1_0__() 0
#define __pp_op_1_1__()
#define __pp_op_1_2__()
#define __pp_op_1_3__()
#define __pp_op_1_4__()
#define __pp_op_1_5__()
#define __pp_op_1_6__()
#define __pp_op_1_7__()
#define __pp_op_1_8__()
#define __pp_op_1_9__()
#define __pp_op_1_10__()
#define __pp_op_1_11__()
#define __pp_op_1_12__()
#define __pp_op_1_13__()
#define __pp_op_1_14__()
#define __pp_op_1_15__()
#define __pp_op_1_16__()
#define __pp_op_1_17__()
#define __pp_op_1_18__()
#define __pp_op_1_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(1, 0)
#include __store_pp_op_digit__(1, 1)
#include __store_pp_op_digit__(1, 2)
#include __store_pp_op_digit__(1, 3)
#include __store_pp_op_digit__(1, 4)
#include __store_pp_op_digit__(1, 5)
#include __store_pp_op_digit__(1, 6)
#include __store_pp_op_digit__(1, 7)
#include __store_pp_op_digit__(1, 8)
#include __store_pp_op_digit__(1, 9)
#include __store_pp_op_digit__(1, 10)
#include __store_pp_op_digit__(1, 11)
#include __store_pp_op_digit__(1, 12)
#include __store_pp_op_digit__(1, 13)
#include __store_pp_op_digit__(1, 14)
#include __store_pp_op_digit__(1, 15)
#include __store_pp_op_digit__(1, 16)
#include __store_pp_op_digit__(1, 17)
#include __store_pp_op_digit__(1, 18)

#endif

#undef __pp_op_1__
#define __pp_op_1__() __cat__(19, __pp_op_1_18__(), __pp_op_1_17__(), __pp_op_1_16__(), __pp_op_1_15__(), __pp_op_1_14__(), __pp_op_1_13__(), __pp_op_1_12__(), __pp_op_1_11__(), __pp_op_1_10__(), __pp_op_1_9__(), __pp_op_1_8__(), __pp_op_1_7__(), __pp_op_1_6__(), __pp_op_1_5__(), __pp_op_1_4__(), __pp_op_1_3__(), __pp_op_1_2__(), __pp_op_1_1__(), __pp_op_1_0__())

#include "pp_expr_auto_undef.h"

#else

#error "store 'pp_op' 1 failed. expr '__pp_expr__()' not defined"

#endif
