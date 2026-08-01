#if defined(__pp_expr__)

#undef __pp_op_10__

#include "../../eval/pp_op.h"

#include __pp_store_op_digit__(10, 0)
#include __pp_store_op_digit__(10, 1)
#include __pp_store_op_digit__(10, 2)
#include __pp_store_op_digit__(10, 3)
#include __pp_store_op_digit__(10, 4)
#include __pp_store_op_digit__(10, 5)
#include __pp_store_op_digit__(10, 6)
#include __pp_store_op_digit__(10, 7)
#include __pp_store_op_digit__(10, 8)
#include __pp_store_op_digit__(10, 9)
#include __pp_store_op_digit__(10, 10)
#include __pp_store_op_digit__(10, 11)
#include __pp_store_op_digit__(10, 12)
#include __pp_store_op_digit__(10, 13)
#include __pp_store_op_digit__(10, 14)
#include __pp_store_op_digit__(10, 15)
#include __pp_store_op_digit__(10, 16)
#include __pp_store_op_digit__(10, 17)
#include __pp_store_op_digit__(10, 18)

#define __pp_op_10__() __cat__(19, __pp_op_10_18__(),__pp_op_10_17__(),__pp_op_10_16__(),__pp_op_10_15__(),__pp_op_10_14__(),__pp_op_10_13__(),__pp_op_10_12__(),__pp_op_10_11__(),__pp_op_10_10__(),__pp_op_10_9__(),__pp_op_10_8__(),__pp_op_10_7__(),__pp_op_10_6__(),__pp_op_10_5__(),__pp_op_10_4__(),__pp_op_10_3__(),__pp_op_10_2__(),__pp_op_10_1__(),__pp_op_10_0__())

#else

#error "store op 10 failed. expr '__pp_expr__' not defined"

#endif
