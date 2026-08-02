#if defined(__pp_op_10__) && defined(__pp_op_0__)

#undef __pp_op_lt_10_0__
#undef __pp_op_eq_10_0__
#undef __pp_op_gt_10_0__
#undef __pp_op_lt_0_10__
#undef __pp_op_eq_0_10__
#undef __pp_op_gt_0_10__

#if (__pp_op_10__()) < (__pp_op_0__())
#define __pp_op_lt_10_0__() 1
#define __pp_op_eq_10_0__() 0
#define __pp_op_gt_10_0__() 0
#define __pp_op_lt_0_10__() 0
#define __pp_op_eq_0_10__() 0
#define __pp_op_gt_0_10__() 1
#elif (__pp_op_10__()) == (__pp_op_0__())
#define __pp_op_lt_10_0__() 0
#define __pp_op_eq_10_0__() 1
#define __pp_op_gt_10_0__() 0
#define __pp_op_lt_0_10__() 0
#define __pp_op_eq_0_10__() 1
#define __pp_op_gt_0_10__() 0
#elif (__pp_op_10__()) > (__pp_op_0__())
#define __pp_op_lt_10_0__() 0
#define __pp_op_eq_10_0__() 0
#define __pp_op_gt_10_0__() 1
#define __pp_op_lt_0_10__() 1
#define __pp_op_eq_0_10__() 0
#define __pp_op_gt_0_10__() 0
#endif

#else

#error "cmp op 10 and op 0 failed. '__pp_op_10__' or '__pp_op_0__' not defined"

#endif
