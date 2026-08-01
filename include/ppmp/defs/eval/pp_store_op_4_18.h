#if defined(__pp_expr__)

#undef __pp_op_4_18__

#if (__pp_expr__()) == 0

#define __pp_op_4_0__() 0
#define __pp_op_4_1__()
#define __pp_op_4_2__()
#define __pp_op_4_3__()
#define __pp_op_4_4__()
#define __pp_op_4_5__()
#define __pp_op_4_6__()
#define __pp_op_4_7__()
#define __pp_op_4_8__()
#define __pp_op_4_9__()
#define __pp_op_4_10__()
#define __pp_op_4_11__()
#define __pp_op_4_12__()
#define __pp_op_4_13__()
#define __pp_op_4_14__()
#define __pp_op_4_15__()
#define __pp_op_4_16__()
#define __pp_op_4_17__()
#define __pp_op_4_18__()
#define __pp_op_4_19__()

#else

#if ((__pp_expr__()) / 1000000000000000000) % 10 == 0
#if ((__pp_expr__()) / 1000000000000000000) >= 10
#define __pp_op_4_18__() 0
#else
#define __pp_op_4_18__()
#endif
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 1
#define __pp_op_4_18__() 1
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 2
#define __pp_op_4_18__() 2
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 3
#define __pp_op_4_18__() 3
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 4
#define __pp_op_4_18__() 4
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 5
#define __pp_op_4_18__() 5
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 6
#define __pp_op_4_18__() 6
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 7
#define __pp_op_4_18__() 7
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 8
#define __pp_op_4_18__() 8
#elif ((__pp_expr__()) / 1000000000000000000) % 10 == 9
#define __pp_op_4_18__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 18 in op 4 failed. expr '__pp_expr__' not defined"

#endif
