#if defined(__pp_op_0__) && defined(__pp_op_2__)

#undef __pp_op_lt_0_2__
#undef __pp_op_eq_0_2__
#undef __pp_op_gt_0_2__
#undef __pp_op_lt_2_0__
#undef __pp_op_eq_2_0__
#undef __pp_op_gt_2_0__

#if (__pp_op_0__()) < (__pp_op_2__())
#define __pp_op_lt_0_2__() 1
#define __pp_op_eq_0_2__() 0
#define __pp_op_gt_0_2__() 0
#define __pp_op_lt_2_0__() 0
#define __pp_op_eq_2_0__() 0
#define __pp_op_gt_2_0__() 1
#elif (__pp_op_0__()) == (__pp_op_2__())
#define __pp_op_lt_0_2__() 0
#define __pp_op_eq_0_2__() 1
#define __pp_op_gt_0_2__() 0
#define __pp_op_lt_2_0__() 0
#define __pp_op_eq_2_0__() 1
#define __pp_op_gt_2_0__() 0
#elif (__pp_op_0__()) > (__pp_op_2__())
#define __pp_op_lt_0_2__() 0
#define __pp_op_eq_0_2__() 0
#define __pp_op_gt_0_2__() 1
#define __pp_op_lt_2_0__() 1
#define __pp_op_eq_2_0__() 0
#define __pp_op_gt_2_0__() 0
#endif

#else

#error "cmp op 0 and op 2 failed. '__pp_op_0__' or '__pp_op_2__' not defined"

#endif
