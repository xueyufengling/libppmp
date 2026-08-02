#if defined(__pp_op_0__) && defined(__pp_op_10__)

#undef __pp_op_lt_0_10__
#undef __pp_op_eq_0_10__
#undef __pp_op_gt_0_10__
#undef __pp_op_lt_10_0__
#undef __pp_op_eq_10_0__
#undef __pp_op_gt_10_0__

#if (__pp_op_0__()) < (__pp_op_10__())
#define __pp_op_lt_0_10__() 1
#define __pp_op_eq_0_10__() 0
#define __pp_op_gt_0_10__() 0
#define __pp_op_lt_10_0__() 0
#define __pp_op_eq_10_0__() 0
#define __pp_op_gt_10_0__() 1
#elif (__pp_op_0__()) == (__pp_op_10__())
#define __pp_op_lt_0_10__() 0
#define __pp_op_eq_0_10__() 1
#define __pp_op_gt_0_10__() 0
#define __pp_op_lt_10_0__() 0
#define __pp_op_eq_10_0__() 1
#define __pp_op_gt_10_0__() 0
#elif (__pp_op_0__()) > (__pp_op_10__())
#define __pp_op_lt_0_10__() 0
#define __pp_op_eq_0_10__() 0
#define __pp_op_gt_0_10__() 1
#define __pp_op_lt_10_0__() 1
#define __pp_op_eq_10_0__() 0
#define __pp_op_gt_10_0__() 0
#endif

#else

#error "cmp op 0 and op 10 failed. '__pp_op_0__' or '__pp_op_10__' not defined"

#endif
