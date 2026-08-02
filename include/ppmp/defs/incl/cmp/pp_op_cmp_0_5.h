#if defined(__pp_op_0__) && defined(__pp_op_5__)

#undef __pp_op_lt_0_5__
#undef __pp_op_eq_0_5__
#undef __pp_op_gt_0_5__
#undef __pp_op_lt_5_0__
#undef __pp_op_eq_5_0__
#undef __pp_op_gt_5_0__

#if (__pp_op_0__()) < (__pp_op_5__())
#define __pp_op_lt_0_5__() 1
#define __pp_op_eq_0_5__() 0
#define __pp_op_gt_0_5__() 0
#define __pp_op_lt_5_0__() 0
#define __pp_op_eq_5_0__() 0
#define __pp_op_gt_5_0__() 1
#elif (__pp_op_0__()) == (__pp_op_5__())
#define __pp_op_lt_0_5__() 0
#define __pp_op_eq_0_5__() 1
#define __pp_op_gt_0_5__() 0
#define __pp_op_lt_5_0__() 0
#define __pp_op_eq_5_0__() 1
#define __pp_op_gt_5_0__() 0
#elif (__pp_op_0__()) > (__pp_op_5__())
#define __pp_op_lt_0_5__() 0
#define __pp_op_eq_0_5__() 0
#define __pp_op_gt_0_5__() 1
#define __pp_op_lt_5_0__() 1
#define __pp_op_eq_5_0__() 0
#define __pp_op_gt_5_0__() 0
#endif

#else

#error "cmp op 0 and op 5 failed. '__pp_op_0__' or '__pp_op_5__' not defined"

#endif
