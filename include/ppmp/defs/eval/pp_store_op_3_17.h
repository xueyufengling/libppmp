#if defined(__pp_expr__)

#undef __pp_op_3_17__

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

#if ((__pp_expr__()) / 100000000000000000) % 10 == 0
#if ((__pp_expr__()) / 100000000000000000) >= 10
#define __pp_op_3_17__() 0
#else
#define __pp_op_3_17__()
#endif
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 1
#define __pp_op_3_17__() 1
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 2
#define __pp_op_3_17__() 2
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 3
#define __pp_op_3_17__() 3
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 4
#define __pp_op_3_17__() 4
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 5
#define __pp_op_3_17__() 5
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 6
#define __pp_op_3_17__() 6
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 7
#define __pp_op_3_17__() 7
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 8
#define __pp_op_3_17__() 8
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 9
#define __pp_op_3_17__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 17 in op 3 failed. expr '__pp_expr__' not defined"

#endif
