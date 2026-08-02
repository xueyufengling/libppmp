#if defined(__pp_op_0__) && defined(__pp_op_1__)

#undef __pp_op_lt_0_1__
#undef __pp_op_eq_0_1__
#undef __pp_op_gt_0_1__
#undef __pp_op_lt_1_0__
#undef __pp_op_eq_1_0__
#undef __pp_op_gt_1_0__

#if (__pp_op_0__()) < (__pp_op_1__())
#define __pp_op_lt_0_1__() 1
#define __pp_op_eq_0_1__() 0
#define __pp_op_gt_0_1__() 0
#define __pp_op_lt_1_0__() 0
#define __pp_op_eq_1_0__() 0
#define __pp_op_gt_1_0__() 1
#elif (__pp_op_0__()) == (__pp_op_1__())
#define __pp_op_lt_0_1__() 0
#define __pp_op_eq_0_1__() 1
#define __pp_op_gt_0_1__() 0
#define __pp_op_lt_1_0__() 0
#define __pp_op_eq_1_0__() 1
#define __pp_op_gt_1_0__() 0
#elif (__pp_op_0__()) > (__pp_op_1__())
#define __pp_op_lt_0_1__() 0
#define __pp_op_eq_0_1__() 0
#define __pp_op_gt_0_1__() 1
#define __pp_op_lt_1_0__() 1
#define __pp_op_eq_1_0__() 0
#define __pp_op_gt_1_0__() 0
#endif

#else

#error "cmp op 0 and op 1 failed. '__pp_op_0__' or '__pp_op_1__' not defined"

#endif
