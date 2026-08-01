#if defined(__pp_expr__)

#undef __pp_op_8_12__

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

#if ((__pp_expr__()) / 1000000000000) % 10 == 0
#if ((__pp_expr__()) / 1000000000000) >= 10
#define __pp_op_8_12__() 0
#else
#define __pp_op_8_12__()
#endif
#elif ((__pp_expr__()) / 1000000000000) % 10 == 1
#define __pp_op_8_12__() 1
#elif ((__pp_expr__()) / 1000000000000) % 10 == 2
#define __pp_op_8_12__() 2
#elif ((__pp_expr__()) / 1000000000000) % 10 == 3
#define __pp_op_8_12__() 3
#elif ((__pp_expr__()) / 1000000000000) % 10 == 4
#define __pp_op_8_12__() 4
#elif ((__pp_expr__()) / 1000000000000) % 10 == 5
#define __pp_op_8_12__() 5
#elif ((__pp_expr__()) / 1000000000000) % 10 == 6
#define __pp_op_8_12__() 6
#elif ((__pp_expr__()) / 1000000000000) % 10 == 7
#define __pp_op_8_12__() 7
#elif ((__pp_expr__()) / 1000000000000) % 10 == 8
#define __pp_op_8_12__() 8
#elif ((__pp_expr__()) / 1000000000000) % 10 == 9
#define __pp_op_8_12__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 12 in op 8 failed. expr '__pp_expr__' not defined"

#endif
