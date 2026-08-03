#if defined(__pp_op_10__) && defined(__pp_op_1__)

#undef __pp_op_lt_10_1__
#undef __pp_op_eq_10_1__
#undef __pp_op_gt_10_1__
#undef __pp_op_lt_1_10__
#undef __pp_op_eq_1_10__
#undef __pp_op_gt_1_10__

#if (__pp_op_10__()) < (__pp_op_1__())
#define __pp_op_lt_10_1__() 1
#define __pp_op_eq_10_1__() 0
#define __pp_op_gt_10_1__() 0
#define __pp_op_lt_1_10__() 0
#define __pp_op_eq_1_10__() 0
#define __pp_op_gt_1_10__() 1
#elif (__pp_op_10__()) == (__pp_op_1__())
#define __pp_op_lt_10_1__() 0
#define __pp_op_eq_10_1__() 1
#define __pp_op_gt_10_1__() 0
#define __pp_op_lt_1_10__() 0
#define __pp_op_eq_1_10__() 1
#define __pp_op_gt_1_10__() 0
#elif (__pp_op_10__()) > (__pp_op_1__())
#define __pp_op_lt_10_1__() 0
#define __pp_op_eq_10_1__() 0
#define __pp_op_gt_10_1__() 1
#define __pp_op_lt_1_10__() 1
#define __pp_op_eq_1_10__() 0
#define __pp_op_gt_1_10__() 0
#endif

#else

#error "cmp 'pp_op' 10 and 1 failed. '__pp_op_10__()' or '__pp_op_1__()' not defined"

#endif
