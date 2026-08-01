#if defined(__pp_expr__)

#undef __pp_op_1__

#include "../../eval/pp_op.h"

#include __pp_store_op_digit__(1, 0)
#include __pp_store_op_digit__(1, 1)
#include __pp_store_op_digit__(1, 2)
#include __pp_store_op_digit__(1, 3)
#include __pp_store_op_digit__(1, 4)
#include __pp_store_op_digit__(1, 5)
#include __pp_store_op_digit__(1, 6)
#include __pp_store_op_digit__(1, 7)
#include __pp_store_op_digit__(1, 8)
#include __pp_store_op_digit__(1, 9)
#include __pp_store_op_digit__(1, 10)
#include __pp_store_op_digit__(1, 11)
#include __pp_store_op_digit__(1, 12)
#include __pp_store_op_digit__(1, 13)
#include __pp_store_op_digit__(1, 14)
#include __pp_store_op_digit__(1, 15)
#include __pp_store_op_digit__(1, 16)
#include __pp_store_op_digit__(1, 17)
#include __pp_store_op_digit__(1, 18)

#define __pp_op_1__() __pp_op_1_18__()##__pp_op_1_17__()##__pp_op_1_16__()##__pp_op_1_15__()##__pp_op_1_14__()##__pp_op_1_13__()##__pp_op_1_12__()##__pp_op_1_11__()##__pp_op_1_10__()##__pp_op_1_9__()##__pp_op_1_8__()##__pp_op_1_7__()##__pp_op_1_6__()##__pp_op_1_5__()##__pp_op_1_4__()##__pp_op_1_3__()##__pp_op_1_2__()##__pp_op_1_1__()##__pp_op_1_0__()

#else

#error "store op 1 failed. expr '__pp_expr__' not defined"

#endif
