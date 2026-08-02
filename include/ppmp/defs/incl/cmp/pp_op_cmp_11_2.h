#if defined(__pp_op_11__) && defined(__pp_op_2__)

#undef __pp_op_lt_11_2__
#undef __pp_op_eq_11_2__
#undef __pp_op_gt_11_2__
#undef __pp_op_lt_2_11__
#undef __pp_op_eq_2_11__
#undef __pp_op_gt_2_11__

#if (__pp_op_11__()) < (__pp_op_2__())
#define __pp_op_lt_11_2__() 1
#define __pp_op_eq_11_2__() 0
#define __pp_op_gt_11_2__() 0
#define __pp_op_lt_2_11__() 0
#define __pp_op_eq_2_11__() 0
#define __pp_op_gt_2_11__() 1
#elif (__pp_op_11__()) == (__pp_op_2__())
#define __pp_op_lt_11_2__() 0
#define __pp_op_eq_11_2__() 1
#define __pp_op_gt_11_2__() 0
#define __pp_op_lt_2_11__() 0
#define __pp_op_eq_2_11__() 1
#define __pp_op_gt_2_11__() 0
#elif (__pp_op_11__()) > (__pp_op_2__())
#define __pp_op_lt_11_2__() 0
#define __pp_op_eq_11_2__() 0
#define __pp_op_gt_11_2__() 1
#define __pp_op_lt_2_11__() 1
#define __pp_op_eq_2_11__() 0
#define __pp_op_gt_2_11__() 0
#endif

#else

#error "cmp op 11 and op 2 failed. '__pp_op_11__' or '__pp_op_2__' not defined"

#endif
