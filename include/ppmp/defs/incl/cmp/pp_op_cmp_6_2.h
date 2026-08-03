#if defined(__pp_op_6__) && defined(__pp_op_2__)

#undef __pp_op_lt_6_2__
#undef __pp_op_eq_6_2__
#undef __pp_op_gt_6_2__
#undef __pp_op_lt_2_6__
#undef __pp_op_eq_2_6__
#undef __pp_op_gt_2_6__

#if (__pp_op_6__()) < (__pp_op_2__())
#define __pp_op_lt_6_2__() 1
#define __pp_op_eq_6_2__() 0
#define __pp_op_gt_6_2__() 0
#define __pp_op_lt_2_6__() 0
#define __pp_op_eq_2_6__() 0
#define __pp_op_gt_2_6__() 1
#elif (__pp_op_6__()) == (__pp_op_2__())
#define __pp_op_lt_6_2__() 0
#define __pp_op_eq_6_2__() 1
#define __pp_op_gt_6_2__() 0
#define __pp_op_lt_2_6__() 0
#define __pp_op_eq_2_6__() 1
#define __pp_op_gt_2_6__() 0
#elif (__pp_op_6__()) > (__pp_op_2__())
#define __pp_op_lt_6_2__() 0
#define __pp_op_eq_6_2__() 0
#define __pp_op_gt_6_2__() 1
#define __pp_op_lt_2_6__() 1
#define __pp_op_eq_2_6__() 0
#define __pp_op_gt_2_6__() 0
#endif

#else

#error "cmp 'pp_op' 6 and 2 failed. '__pp_op_6__()' or '__pp_op_2__()' not defined"

#endif
