#if defined(__pp_op_8__) && defined(__pp_op_10__)

#undef __pp_op_lt_8_10__
#undef __pp_op_eq_8_10__
#undef __pp_op_gt_8_10__
#undef __pp_op_lt_10_8__
#undef __pp_op_eq_10_8__
#undef __pp_op_gt_10_8__

#if (__pp_op_8__()) < (__pp_op_10__())
#define __pp_op_lt_8_10__() 1
#define __pp_op_eq_8_10__() 0
#define __pp_op_gt_8_10__() 0
#define __pp_op_lt_10_8__() 0
#define __pp_op_eq_10_8__() 0
#define __pp_op_gt_10_8__() 1
#elif (__pp_op_8__()) == (__pp_op_10__())
#define __pp_op_lt_8_10__() 0
#define __pp_op_eq_8_10__() 1
#define __pp_op_gt_8_10__() 0
#define __pp_op_lt_10_8__() 0
#define __pp_op_eq_10_8__() 1
#define __pp_op_gt_10_8__() 0
#elif (__pp_op_8__()) > (__pp_op_10__())
#define __pp_op_lt_8_10__() 0
#define __pp_op_eq_8_10__() 0
#define __pp_op_gt_8_10__() 1
#define __pp_op_lt_10_8__() 1
#define __pp_op_eq_10_8__() 0
#define __pp_op_gt_10_8__() 0
#endif

#else

#error "cmp 'pp_op' 8 and 10 failed. '__pp_op_8__()' or '__pp_op_10__()' not defined"

#endif
