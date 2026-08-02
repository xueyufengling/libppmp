#if defined(__pp_op_0__) && defined(__pp_op_11__)

#undef __pp_op_lt_0_11__
#undef __pp_op_eq_0_11__
#undef __pp_op_gt_0_11__
#undef __pp_op_lt_11_0__
#undef __pp_op_eq_11_0__
#undef __pp_op_gt_11_0__

#if (__pp_op_0__()) < (__pp_op_11__())
#define __pp_op_lt_0_11__() 1
#define __pp_op_eq_0_11__() 0
#define __pp_op_gt_0_11__() 0
#define __pp_op_lt_11_0__() 0
#define __pp_op_eq_11_0__() 0
#define __pp_op_gt_11_0__() 1
#elif (__pp_op_0__()) == (__pp_op_11__())
#define __pp_op_lt_0_11__() 0
#define __pp_op_eq_0_11__() 1
#define __pp_op_gt_0_11__() 0
#define __pp_op_lt_11_0__() 0
#define __pp_op_eq_11_0__() 1
#define __pp_op_gt_11_0__() 0
#elif (__pp_op_0__()) > (__pp_op_11__())
#define __pp_op_lt_0_11__() 0
#define __pp_op_eq_0_11__() 0
#define __pp_op_gt_0_11__() 1
#define __pp_op_lt_11_0__() 1
#define __pp_op_eq_11_0__() 0
#define __pp_op_gt_11_0__() 0
#endif

#else

#error "cmp op 0 and op 11 failed. '__pp_op_0__' or '__pp_op_11__' not defined"

#endif
