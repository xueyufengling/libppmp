#if defined(__pp_expr__)

#if (__pp_expr__()) == 0

#define __pp_op_12_0__() 0
#define __pp_op_12_1__()
#define __pp_op_12_2__()
#define __pp_op_12_3__()
#define __pp_op_12_4__()
#define __pp_op_12_5__()
#define __pp_op_12_6__()
#define __pp_op_12_7__()
#define __pp_op_12_8__()
#define __pp_op_12_9__()
#define __pp_op_12_10__()
#define __pp_op_12_11__()
#define __pp_op_12_12__()
#define __pp_op_12_13__()
#define __pp_op_12_14__()
#define __pp_op_12_15__()
#define __pp_op_12_16__()
#define __pp_op_12_17__()
#define __pp_op_12_18__()
#define __pp_op_12_19__()

#else

#include <ppmp/defs/incl/op/store_pp_op.h>

#include __store_pp_op_digit__(12, 0)
#include __store_pp_op_digit__(12, 1)
#include __store_pp_op_digit__(12, 2)
#include __store_pp_op_digit__(12, 3)
#include __store_pp_op_digit__(12, 4)
#include __store_pp_op_digit__(12, 5)
#include __store_pp_op_digit__(12, 6)
#include __store_pp_op_digit__(12, 7)
#include __store_pp_op_digit__(12, 8)
#include __store_pp_op_digit__(12, 9)
#include __store_pp_op_digit__(12, 10)
#include __store_pp_op_digit__(12, 11)
#include __store_pp_op_digit__(12, 12)
#include __store_pp_op_digit__(12, 13)
#include __store_pp_op_digit__(12, 14)
#include __store_pp_op_digit__(12, 15)
#include __store_pp_op_digit__(12, 16)
#include __store_pp_op_digit__(12, 17)
#include __store_pp_op_digit__(12, 18)

#endif

#undef __pp_op_12__
#define __pp_op_12__() __cat__(19, __pp_op_12_18__(), __pp_op_12_17__(), __pp_op_12_16__(), __pp_op_12_15__(), __pp_op_12_14__(), __pp_op_12_13__(), __pp_op_12_12__(), __pp_op_12_11__(), __pp_op_12_10__(), __pp_op_12_9__(), __pp_op_12_8__(), __pp_op_12_7__(), __pp_op_12_6__(), __pp_op_12_5__(), __pp_op_12_4__(), __pp_op_12_3__(), __pp_op_12_2__(), __pp_op_12_1__(), __pp_op_12_0__())

#include "pp_expr_auto_undef.h"

#else

#error "store 'pp_op' 12 failed. expr '__pp_expr__()' not defined"

#endif
