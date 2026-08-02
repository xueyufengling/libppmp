#if defined(__pp_op_7__) && defined(__pp_op_0__)

#undef __pp_op_lt_7_0__
#undef __pp_op_eq_7_0__
#undef __pp_op_gt_7_0__
#undef __pp_op_lt_0_7__
#undef __pp_op_eq_0_7__
#undef __pp_op_gt_0_7__

#if (__pp_op_7__()) < (__pp_op_0__())
#define __pp_op_lt_7_0__() 1
#define __pp_op_eq_7_0__() 0
#define __pp_op_gt_7_0__() 0
#define __pp_op_lt_0_7__() 0
#define __pp_op_eq_0_7__() 0
#define __pp_op_gt_0_7__() 1
#elif (__pp_op_7__()) == (__pp_op_0__())
#define __pp_op_lt_7_0__() 0
#define __pp_op_eq_7_0__() 1
#define __pp_op_gt_7_0__() 0
#define __pp_op_lt_0_7__() 0
#define __pp_op_eq_0_7__() 1
#define __pp_op_gt_0_7__() 0
#elif (__pp_op_7__()) > (__pp_op_0__())
#define __pp_op_lt_7_0__() 0
#define __pp_op_eq_7_0__() 0
#define __pp_op_gt_7_0__() 1
#define __pp_op_lt_0_7__() 1
#define __pp_op_eq_0_7__() 0
#define __pp_op_gt_0_7__() 0
#endif

#else

#error "cmp op 7 and op 0 failed. '__pp_op_7__' or '__pp_op_0__' not defined"

#endif
