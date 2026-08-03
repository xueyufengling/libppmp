#if defined(__pp_op_13__) && defined(__pp_op_10__)

#undef __pp_op_lt_13_10__
#undef __pp_op_eq_13_10__
#undef __pp_op_gt_13_10__
#undef __pp_op_lt_10_13__
#undef __pp_op_eq_10_13__
#undef __pp_op_gt_10_13__

#if (__pp_op_13__()) < (__pp_op_10__())
#define __pp_op_lt_13_10__() 1
#define __pp_op_eq_13_10__() 0
#define __pp_op_gt_13_10__() 0
#define __pp_op_lt_10_13__() 0
#define __pp_op_eq_10_13__() 0
#define __pp_op_gt_10_13__() 1
#elif (__pp_op_13__()) == (__pp_op_10__())
#define __pp_op_lt_13_10__() 0
#define __pp_op_eq_13_10__() 1
#define __pp_op_gt_13_10__() 0
#define __pp_op_lt_10_13__() 0
#define __pp_op_eq_10_13__() 1
#define __pp_op_gt_10_13__() 0
#elif (__pp_op_13__()) > (__pp_op_10__())
#define __pp_op_lt_13_10__() 0
#define __pp_op_eq_13_10__() 0
#define __pp_op_gt_13_10__() 1
#define __pp_op_lt_10_13__() 1
#define __pp_op_eq_10_13__() 0
#define __pp_op_gt_10_13__() 0
#endif

#else

#error "cmp 'pp_op' 13 and 10 failed. '__pp_op_13__()' or '__pp_op_10__()' not defined"

#endif
