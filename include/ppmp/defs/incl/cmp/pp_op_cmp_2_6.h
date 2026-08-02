#if defined(__pp_op_2__) && defined(__pp_op_6__)

#undef __pp_op_lt_2_6__
#undef __pp_op_eq_2_6__
#undef __pp_op_gt_2_6__
#undef __pp_op_lt_6_2__
#undef __pp_op_eq_6_2__
#undef __pp_op_gt_6_2__

#if (__pp_op_2__()) < (__pp_op_6__())
#define __pp_op_lt_2_6__() 1
#define __pp_op_eq_2_6__() 0
#define __pp_op_gt_2_6__() 0
#define __pp_op_lt_6_2__() 0
#define __pp_op_eq_6_2__() 0
#define __pp_op_gt_6_2__() 1
#elif (__pp_op_2__()) == (__pp_op_6__())
#define __pp_op_lt_2_6__() 0
#define __pp_op_eq_2_6__() 1
#define __pp_op_gt_2_6__() 0
#define __pp_op_lt_6_2__() 0
#define __pp_op_eq_6_2__() 1
#define __pp_op_gt_6_2__() 0
#elif (__pp_op_2__()) > (__pp_op_6__())
#define __pp_op_lt_2_6__() 0
#define __pp_op_eq_2_6__() 0
#define __pp_op_gt_2_6__() 1
#define __pp_op_lt_6_2__() 1
#define __pp_op_eq_6_2__() 0
#define __pp_op_gt_6_2__() 0
#endif

#else

#error "cmp op 2 and op 6 failed. '__pp_op_2__' or '__pp_op_6__' not defined"

#endif
