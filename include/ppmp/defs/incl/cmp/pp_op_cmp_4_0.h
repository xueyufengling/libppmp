#if defined(__pp_op_4__) && defined(__pp_op_0__)

#undef __pp_op_lt_4_0__
#undef __pp_op_eq_4_0__
#undef __pp_op_gt_4_0__
#undef __pp_op_lt_0_4__
#undef __pp_op_eq_0_4__
#undef __pp_op_gt_0_4__

#if (__pp_op_4__()) < (__pp_op_0__())
#define __pp_op_lt_4_0__() 1
#define __pp_op_eq_4_0__() 0
#define __pp_op_gt_4_0__() 0
#define __pp_op_lt_0_4__() 0
#define __pp_op_eq_0_4__() 0
#define __pp_op_gt_0_4__() 1
#elif (__pp_op_4__()) == (__pp_op_0__())
#define __pp_op_lt_4_0__() 0
#define __pp_op_eq_4_0__() 1
#define __pp_op_gt_4_0__() 0
#define __pp_op_lt_0_4__() 0
#define __pp_op_eq_0_4__() 1
#define __pp_op_gt_0_4__() 0
#elif (__pp_op_4__()) > (__pp_op_0__())
#define __pp_op_lt_4_0__() 0
#define __pp_op_eq_4_0__() 0
#define __pp_op_gt_4_0__() 1
#define __pp_op_lt_0_4__() 1
#define __pp_op_eq_0_4__() 0
#define __pp_op_gt_0_4__() 0
#endif

#else

#error "cmp op 4 and op 0 failed. '__pp_op_4__' or '__pp_op_0__' not defined"

#endif
