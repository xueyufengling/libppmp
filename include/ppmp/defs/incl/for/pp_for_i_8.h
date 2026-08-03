#if defined(__pp_expr_for_i__)

#if (__pp_expr_for_i__()) == 0

#define __pp_for_i_8_0__() 0
#define __pp_for_i_8_1__()
#define __pp_for_i_8_2__()
#define __pp_for_i_8_3__()
#define __pp_for_i_8_4__()
#define __pp_for_i_8_5__()
#define __pp_for_i_8_6__()
#define __pp_for_i_8_7__()
#define __pp_for_i_8_8__()
#define __pp_for_i_8_9__()
#define __pp_for_i_8_10__()
#define __pp_for_i_8_11__()
#define __pp_for_i_8_12__()
#define __pp_for_i_8_13__()
#define __pp_for_i_8_14__()
#define __pp_for_i_8_15__()
#define __pp_for_i_8_16__()
#define __pp_for_i_8_17__()
#define __pp_for_i_8_18__()
#define __pp_for_i_8_19__()

#else

#include <ppmp/defs/incl/for/store_pp_for_i.h>

#include __store_pp_for_i_digit__(8, 0)
#include __store_pp_for_i_digit__(8, 1)
#include __store_pp_for_i_digit__(8, 2)
#include __store_pp_for_i_digit__(8, 3)
#include __store_pp_for_i_digit__(8, 4)
#include __store_pp_for_i_digit__(8, 5)
#include __store_pp_for_i_digit__(8, 6)
#include __store_pp_for_i_digit__(8, 7)
#include __store_pp_for_i_digit__(8, 8)
#include __store_pp_for_i_digit__(8, 9)
#include __store_pp_for_i_digit__(8, 10)
#include __store_pp_for_i_digit__(8, 11)
#include __store_pp_for_i_digit__(8, 12)
#include __store_pp_for_i_digit__(8, 13)
#include __store_pp_for_i_digit__(8, 14)
#include __store_pp_for_i_digit__(8, 15)
#include __store_pp_for_i_digit__(8, 16)
#include __store_pp_for_i_digit__(8, 17)
#include __store_pp_for_i_digit__(8, 18)

#endif

#undef __pp_for_i_8__
#define __pp_for_i_8__() __cat__(19, __pp_for_i_8_18__(), __pp_for_i_8_17__(), __pp_for_i_8_16__(), __pp_for_i_8_15__(), __pp_for_i_8_14__(), __pp_for_i_8_13__(), __pp_for_i_8_12__(), __pp_for_i_8_11__(), __pp_for_i_8_10__(), __pp_for_i_8_9__(), __pp_for_i_8_8__(), __pp_for_i_8_7__(), __pp_for_i_8_6__(), __pp_for_i_8_5__(), __pp_for_i_8_4__(), __pp_for_i_8_3__(), __pp_for_i_8_2__(), __pp_for_i_8_1__(), __pp_for_i_8_0__())

#undef __pp_expr_for_i__

#else

#error "store 'pp_for_i' 8 failed. expr '__pp_expr_for_i__()' not defined"

#endif
