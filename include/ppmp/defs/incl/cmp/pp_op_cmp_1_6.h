#if defined(__pp_op_1__) && defined(__pp_op_6__)

#undef __pp_op_lt_1_6__
#undef __pp_op_eq_1_6__
#undef __pp_op_gt_1_6__
#undef __pp_op_lt_6_1__
#undef __pp_op_eq_6_1__
#undef __pp_op_gt_6_1__

#if (__pp_op_1__()) < (__pp_op_6__())
#define __pp_op_lt_1_6__() 1
#define __pp_op_eq_1_6__() 0
#define __pp_op_gt_1_6__() 0
#define __pp_op_lt_6_1__() 0
#define __pp_op_eq_6_1__() 0
#define __pp_op_gt_6_1__() 1
#elif (__pp_op_1__()) == (__pp_op_6__())
#define __pp_op_lt_1_6__() 0
#define __pp_op_eq_1_6__() 1
#define __pp_op_gt_1_6__() 0
#define __pp_op_lt_6_1__() 0
#define __pp_op_eq_6_1__() 1
#define __pp_op_gt_6_1__() 0
#elif (__pp_op_1__()) > (__pp_op_6__())
#define __pp_op_lt_1_6__() 0
#define __pp_op_eq_1_6__() 0
#define __pp_op_gt_1_6__() 1
#define __pp_op_lt_6_1__() 1
#define __pp_op_eq_6_1__() 0
#define __pp_op_gt_6_1__() 0
#endif

#else

#error "cmp 'pp_op' 1 and 6 failed. '__pp_op_1__()' or '__pp_op_6__()' not defined"

#endif
