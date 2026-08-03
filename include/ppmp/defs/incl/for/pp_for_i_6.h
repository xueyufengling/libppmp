#if defined(__pp_expr_for_i__)

#if (__pp_expr_for_i__()) == 0

#define __pp_for_i_6_0__() 0
#define __pp_for_i_6_1__()
#define __pp_for_i_6_2__()
#define __pp_for_i_6_3__()
#define __pp_for_i_6_4__()
#define __pp_for_i_6_5__()
#define __pp_for_i_6_6__()
#define __pp_for_i_6_7__()
#define __pp_for_i_6_8__()
#define __pp_for_i_6_9__()
#define __pp_for_i_6_10__()
#define __pp_for_i_6_11__()
#define __pp_for_i_6_12__()
#define __pp_for_i_6_13__()
#define __pp_for_i_6_14__()
#define __pp_for_i_6_15__()
#define __pp_for_i_6_16__()
#define __pp_for_i_6_17__()
#define __pp_for_i_6_18__()
#define __pp_for_i_6_19__()

#else

#include <ppmp/defs/incl/for/store_pp_for_i.h>

#include __store_pp_for_i_digit__(6, 0)
#include __store_pp_for_i_digit__(6, 1)
#include __store_pp_for_i_digit__(6, 2)
#include __store_pp_for_i_digit__(6, 3)
#include __store_pp_for_i_digit__(6, 4)
#include __store_pp_for_i_digit__(6, 5)
#include __store_pp_for_i_digit__(6, 6)
#include __store_pp_for_i_digit__(6, 7)
#include __store_pp_for_i_digit__(6, 8)
#include __store_pp_for_i_digit__(6, 9)
#include __store_pp_for_i_digit__(6, 10)
#include __store_pp_for_i_digit__(6, 11)
#include __store_pp_for_i_digit__(6, 12)
#include __store_pp_for_i_digit__(6, 13)
#include __store_pp_for_i_digit__(6, 14)
#include __store_pp_for_i_digit__(6, 15)
#include __store_pp_for_i_digit__(6, 16)
#include __store_pp_for_i_digit__(6, 17)
#include __store_pp_for_i_digit__(6, 18)

#endif

#undef __pp_for_i_6__
#define __pp_for_i_6__() __cat__(19, __pp_for_i_6_18__(), __pp_for_i_6_17__(), __pp_for_i_6_16__(), __pp_for_i_6_15__(), __pp_for_i_6_14__(), __pp_for_i_6_13__(), __pp_for_i_6_12__(), __pp_for_i_6_11__(), __pp_for_i_6_10__(), __pp_for_i_6_9__(), __pp_for_i_6_8__(), __pp_for_i_6_7__(), __pp_for_i_6_6__(), __pp_for_i_6_5__(), __pp_for_i_6_4__(), __pp_for_i_6_3__(), __pp_for_i_6_2__(), __pp_for_i_6_1__(), __pp_for_i_6_0__())

#undef __pp_expr_for_i__

#else

#error "store 'pp_for_i' 6 failed. expr '__pp_expr_for_i__()' not defined"

#endif
