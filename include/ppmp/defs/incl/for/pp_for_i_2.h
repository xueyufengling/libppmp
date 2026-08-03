#if defined(__pp_expr_for_i__)

#if (__pp_expr_for_i__()) == 0

#define __pp_for_i_2_0__() 0
#define __pp_for_i_2_1__()
#define __pp_for_i_2_2__()
#define __pp_for_i_2_3__()
#define __pp_for_i_2_4__()
#define __pp_for_i_2_5__()
#define __pp_for_i_2_6__()
#define __pp_for_i_2_7__()
#define __pp_for_i_2_8__()
#define __pp_for_i_2_9__()
#define __pp_for_i_2_10__()
#define __pp_for_i_2_11__()
#define __pp_for_i_2_12__()
#define __pp_for_i_2_13__()
#define __pp_for_i_2_14__()
#define __pp_for_i_2_15__()
#define __pp_for_i_2_16__()
#define __pp_for_i_2_17__()
#define __pp_for_i_2_18__()
#define __pp_for_i_2_19__()

#else

#include <ppmp/defs/incl/for/store_pp_for_i.h>

#include __store_pp_for_i_digit__(2, 0)
#include __store_pp_for_i_digit__(2, 1)
#include __store_pp_for_i_digit__(2, 2)
#include __store_pp_for_i_digit__(2, 3)
#include __store_pp_for_i_digit__(2, 4)
#include __store_pp_for_i_digit__(2, 5)
#include __store_pp_for_i_digit__(2, 6)
#include __store_pp_for_i_digit__(2, 7)
#include __store_pp_for_i_digit__(2, 8)
#include __store_pp_for_i_digit__(2, 9)
#include __store_pp_for_i_digit__(2, 10)
#include __store_pp_for_i_digit__(2, 11)
#include __store_pp_for_i_digit__(2, 12)
#include __store_pp_for_i_digit__(2, 13)
#include __store_pp_for_i_digit__(2, 14)
#include __store_pp_for_i_digit__(2, 15)
#include __store_pp_for_i_digit__(2, 16)
#include __store_pp_for_i_digit__(2, 17)
#include __store_pp_for_i_digit__(2, 18)

#endif

#undef __pp_for_i_2__
#define __pp_for_i_2__() __cat__(19, __pp_for_i_2_18__(), __pp_for_i_2_17__(), __pp_for_i_2_16__(), __pp_for_i_2_15__(), __pp_for_i_2_14__(), __pp_for_i_2_13__(), __pp_for_i_2_12__(), __pp_for_i_2_11__(), __pp_for_i_2_10__(), __pp_for_i_2_9__(), __pp_for_i_2_8__(), __pp_for_i_2_7__(), __pp_for_i_2_6__(), __pp_for_i_2_5__(), __pp_for_i_2_4__(), __pp_for_i_2_3__(), __pp_for_i_2_2__(), __pp_for_i_2_1__(), __pp_for_i_2_0__())

#undef __pp_expr_for_i__

#else

#error "store 'pp_for_i' 2 failed. expr '__pp_expr_for_i__()' not defined"

#endif
