#if defined(__pp_op_3__) && defined(__pp_op_0__)

#undef __pp_op_lt_3_0__
#undef __pp_op_eq_3_0__
#undef __pp_op_gt_3_0__
#undef __pp_op_lt_0_3__
#undef __pp_op_eq_0_3__
#undef __pp_op_gt_0_3__

#if (__pp_op_3__()) < (__pp_op_0__())
#define __pp_op_lt_3_0__() 1
#define __pp_op_eq_3_0__() 0
#define __pp_op_gt_3_0__() 0
#define __pp_op_lt_0_3__() 0
#define __pp_op_eq_0_3__() 0
#define __pp_op_gt_0_3__() 1
#elif (__pp_op_3__()) == (__pp_op_0__())
#define __pp_op_lt_3_0__() 0
#define __pp_op_eq_3_0__() 1
#define __pp_op_gt_3_0__() 0
#define __pp_op_lt_0_3__() 0
#define __pp_op_eq_0_3__() 1
#define __pp_op_gt_0_3__() 0
#elif (__pp_op_3__()) > (__pp_op_0__())
#define __pp_op_lt_3_0__() 0
#define __pp_op_eq_3_0__() 0
#define __pp_op_gt_3_0__() 1
#define __pp_op_lt_0_3__() 1
#define __pp_op_eq_0_3__() 0
#define __pp_op_gt_0_3__() 0
#endif

#else

#error "cmp op 3 and op 0 failed. '__pp_op_3__' or '__pp_op_0__' not defined"

#endif
