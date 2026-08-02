#if defined(__pp_op_11__) && defined(__pp_op_0__)

#undef __pp_op_lt_11_0__
#undef __pp_op_eq_11_0__
#undef __pp_op_gt_11_0__
#undef __pp_op_lt_0_11__
#undef __pp_op_eq_0_11__
#undef __pp_op_gt_0_11__

#if (__pp_op_11__()) < (__pp_op_0__())
#define __pp_op_lt_11_0__() 1
#define __pp_op_eq_11_0__() 0
#define __pp_op_gt_11_0__() 0
#define __pp_op_lt_0_11__() 0
#define __pp_op_eq_0_11__() 0
#define __pp_op_gt_0_11__() 1
#elif (__pp_op_11__()) == (__pp_op_0__())
#define __pp_op_lt_11_0__() 0
#define __pp_op_eq_11_0__() 1
#define __pp_op_gt_11_0__() 0
#define __pp_op_lt_0_11__() 0
#define __pp_op_eq_0_11__() 1
#define __pp_op_gt_0_11__() 0
#elif (__pp_op_11__()) > (__pp_op_0__())
#define __pp_op_lt_11_0__() 0
#define __pp_op_eq_11_0__() 0
#define __pp_op_gt_11_0__() 1
#define __pp_op_lt_0_11__() 1
#define __pp_op_eq_0_11__() 0
#define __pp_op_gt_0_11__() 0
#endif

#else

#error "cmp op 11 and op 0 failed. '__pp_op_11__' or '__pp_op_0__' not defined"

#endif
