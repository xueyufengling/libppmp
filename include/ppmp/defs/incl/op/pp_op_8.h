#if defined(__pp_expr__)

#if (__pp_expr__()) == 0

#define __pp_op_8_0__() 0
#define __pp_op_8_1__()
#define __pp_op_8_2__()
#define __pp_op_8_3__()
#define __pp_op_8_4__()
#define __pp_op_8_5__()
#define __pp_op_8_6__()
#define __pp_op_8_7__()
#define __pp_op_8_8__()
#define __pp_op_8_9__()
#define __pp_op_8_10__()
#define __pp_op_8_11__()
#define __pp_op_8_12__()
#define __pp_op_8_13__()
#define __pp_op_8_14__()
#define __pp_op_8_15__()
#define __pp_op_8_16__()
#define __pp_op_8_17__()
#define __pp_op_8_18__()
#define __pp_op_8_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(8, 0)
#include __store_pp_op_digit__(8, 1)
#include __store_pp_op_digit__(8, 2)
#include __store_pp_op_digit__(8, 3)
#include __store_pp_op_digit__(8, 4)
#include __store_pp_op_digit__(8, 5)
#include __store_pp_op_digit__(8, 6)
#include __store_pp_op_digit__(8, 7)
#include __store_pp_op_digit__(8, 8)
#include __store_pp_op_digit__(8, 9)
#include __store_pp_op_digit__(8, 10)
#include __store_pp_op_digit__(8, 11)
#include __store_pp_op_digit__(8, 12)
#include __store_pp_op_digit__(8, 13)
#include __store_pp_op_digit__(8, 14)
#include __store_pp_op_digit__(8, 15)
#include __store_pp_op_digit__(8, 16)
#include __store_pp_op_digit__(8, 17)
#include __store_pp_op_digit__(8, 18)

#endif

#undef __pp_op_8__
#define __pp_op_8__() __cat__(19, __pp_op_8_18__(), __pp_op_8_17__(), __pp_op_8_16__(), __pp_op_8_15__(), __pp_op_8_14__(), __pp_op_8_13__(), __pp_op_8_12__(), __pp_op_8_11__(), __pp_op_8_10__(), __pp_op_8_9__(), __pp_op_8_8__(), __pp_op_8_7__(), __pp_op_8_6__(), __pp_op_8_5__(), __pp_op_8_4__(), __pp_op_8_3__(), __pp_op_8_2__(), __pp_op_8_1__(), __pp_op_8_0__())

#include "pp_expr_auto_undef.h"

#else

#error "store 'pp_op' 8 failed. expr '__pp_expr__()' not defined"

#endif
