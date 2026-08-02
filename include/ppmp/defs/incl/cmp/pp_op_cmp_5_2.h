#if defined(__pp_op_5__) && defined(__pp_op_2__)

#undef __pp_op_lt_5_2__
#undef __pp_op_eq_5_2__
#undef __pp_op_gt_5_2__
#undef __pp_op_lt_2_5__
#undef __pp_op_eq_2_5__
#undef __pp_op_gt_2_5__

#if (__pp_op_5__()) < (__pp_op_2__())
#define __pp_op_lt_5_2__() 1
#define __pp_op_eq_5_2__() 0
#define __pp_op_gt_5_2__() 0
#define __pp_op_lt_2_5__() 0
#define __pp_op_eq_2_5__() 0
#define __pp_op_gt_2_5__() 1
#elif (__pp_op_5__()) == (__pp_op_2__())
#define __pp_op_lt_5_2__() 0
#define __pp_op_eq_5_2__() 1
#define __pp_op_gt_5_2__() 0
#define __pp_op_lt_2_5__() 0
#define __pp_op_eq_2_5__() 1
#define __pp_op_gt_2_5__() 0
#elif (__pp_op_5__()) > (__pp_op_2__())
#define __pp_op_lt_5_2__() 0
#define __pp_op_eq_5_2__() 0
#define __pp_op_gt_5_2__() 1
#define __pp_op_lt_2_5__() 1
#define __pp_op_eq_2_5__() 0
#define __pp_op_gt_2_5__() 0
#endif

#else

#error "cmp op 5 and op 2 failed. '__pp_op_5__' or '__pp_op_2__' not defined"

#endif
