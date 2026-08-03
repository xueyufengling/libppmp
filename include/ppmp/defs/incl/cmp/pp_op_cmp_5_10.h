#if defined(__pp_op_5__) && defined(__pp_op_10__)

#undef __pp_op_lt_5_10__
#undef __pp_op_eq_5_10__
#undef __pp_op_gt_5_10__
#undef __pp_op_lt_10_5__
#undef __pp_op_eq_10_5__
#undef __pp_op_gt_10_5__

#if (__pp_op_5__()) < (__pp_op_10__())
#define __pp_op_lt_5_10__() 1
#define __pp_op_eq_5_10__() 0
#define __pp_op_gt_5_10__() 0
#define __pp_op_lt_10_5__() 0
#define __pp_op_eq_10_5__() 0
#define __pp_op_gt_10_5__() 1
#elif (__pp_op_5__()) == (__pp_op_10__())
#define __pp_op_lt_5_10__() 0
#define __pp_op_eq_5_10__() 1
#define __pp_op_gt_5_10__() 0
#define __pp_op_lt_10_5__() 0
#define __pp_op_eq_10_5__() 1
#define __pp_op_gt_10_5__() 0
#elif (__pp_op_5__()) > (__pp_op_10__())
#define __pp_op_lt_5_10__() 0
#define __pp_op_eq_5_10__() 0
#define __pp_op_gt_5_10__() 1
#define __pp_op_lt_10_5__() 1
#define __pp_op_eq_10_5__() 0
#define __pp_op_gt_10_5__() 0
#endif

#else

#error "cmp 'pp_op' 5 and 10 failed. '__pp_op_5__()' or '__pp_op_10__()' not defined"

#endif
