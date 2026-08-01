#if defined(__pp_expr__)

#undef __pp_op_12_15__

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

#if ((__pp_expr__()) / 1000000000000000) % 10 == 0
#if ((__pp_expr__()) / 1000000000000000) >= 10
#define __pp_op_12_15__() 0
#else
#define __pp_op_12_15__()
#endif
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 1
#define __pp_op_12_15__() 1
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 2
#define __pp_op_12_15__() 2
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 3
#define __pp_op_12_15__() 3
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 4
#define __pp_op_12_15__() 4
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 5
#define __pp_op_12_15__() 5
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 6
#define __pp_op_12_15__() 6
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 7
#define __pp_op_12_15__() 7
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 8
#define __pp_op_12_15__() 8
#elif ((__pp_expr__()) / 1000000000000000) % 10 == 9
#define __pp_op_12_15__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 15 in op 12 failed. expr '__pp_expr__' not defined"

#endif
