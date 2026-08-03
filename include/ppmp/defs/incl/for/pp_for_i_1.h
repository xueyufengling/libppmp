#if defined(__pp_expr_for_i__)

#if (__pp_expr_for_i__()) == 0

#define __pp_for_i_1_0__() 0
#define __pp_for_i_1_1__()
#define __pp_for_i_1_2__()
#define __pp_for_i_1_3__()
#define __pp_for_i_1_4__()
#define __pp_for_i_1_5__()
#define __pp_for_i_1_6__()
#define __pp_for_i_1_7__()
#define __pp_for_i_1_8__()
#define __pp_for_i_1_9__()
#define __pp_for_i_1_10__()
#define __pp_for_i_1_11__()
#define __pp_for_i_1_12__()
#define __pp_for_i_1_13__()
#define __pp_for_i_1_14__()
#define __pp_for_i_1_15__()
#define __pp_for_i_1_16__()
#define __pp_for_i_1_17__()
#define __pp_for_i_1_18__()
#define __pp_for_i_1_19__()

#else

#include <ppmp/defs/incl/for/store_pp_for_i.h>

#include __store_pp_for_i_digit__(1, 0)
#include __store_pp_for_i_digit__(1, 1)
#include __store_pp_for_i_digit__(1, 2)
#include __store_pp_for_i_digit__(1, 3)
#include __store_pp_for_i_digit__(1, 4)
#include __store_pp_for_i_digit__(1, 5)
#include __store_pp_for_i_digit__(1, 6)
#include __store_pp_for_i_digit__(1, 7)
#include __store_pp_for_i_digit__(1, 8)
#include __store_pp_for_i_digit__(1, 9)
#include __store_pp_for_i_digit__(1, 10)
#include __store_pp_for_i_digit__(1, 11)
#include __store_pp_for_i_digit__(1, 12)
#include __store_pp_for_i_digit__(1, 13)
#include __store_pp_for_i_digit__(1, 14)
#include __store_pp_for_i_digit__(1, 15)
#include __store_pp_for_i_digit__(1, 16)
#include __store_pp_for_i_digit__(1, 17)
#include __store_pp_for_i_digit__(1, 18)

#endif

#undef __pp_for_i_1__
#define __pp_for_i_1__() __cat__(19, __pp_for_i_1_18__(), __pp_for_i_1_17__(), __pp_for_i_1_16__(), __pp_for_i_1_15__(), __pp_for_i_1_14__(), __pp_for_i_1_13__(), __pp_for_i_1_12__(), __pp_for_i_1_11__(), __pp_for_i_1_10__(), __pp_for_i_1_9__(), __pp_for_i_1_8__(), __pp_for_i_1_7__(), __pp_for_i_1_6__(), __pp_for_i_1_5__(), __pp_for_i_1_4__(), __pp_for_i_1_3__(), __pp_for_i_1_2__(), __pp_for_i_1_1__(), __pp_for_i_1_0__())

#undef __pp_expr_for_i__

#else

#error "store 'pp_for_i' 1 failed. expr '__pp_expr_for_i__()' not defined"

#endif
