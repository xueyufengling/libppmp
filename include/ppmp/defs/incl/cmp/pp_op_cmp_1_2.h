#if defined(__pp_op_1__) && defined(__pp_op_2__)

#undef __pp_op_lt_1_2__
#undef __pp_op_eq_1_2__
#undef __pp_op_gt_1_2__
#undef __pp_op_lt_2_1__
#undef __pp_op_eq_2_1__
#undef __pp_op_gt_2_1__

#if (__pp_op_1__()) < (__pp_op_2__())
#define __pp_op_lt_1_2__() 1
#define __pp_op_eq_1_2__() 0
#define __pp_op_gt_1_2__() 0
#define __pp_op_lt_2_1__() 0
#define __pp_op_eq_2_1__() 0
#define __pp_op_gt_2_1__() 1
#elif (__pp_op_1__()) == (__pp_op_2__())
#define __pp_op_lt_1_2__() 0
#define __pp_op_eq_1_2__() 1
#define __pp_op_gt_1_2__() 0
#define __pp_op_lt_2_1__() 0
#define __pp_op_eq_2_1__() 1
#define __pp_op_gt_2_1__() 0
#elif (__pp_op_1__()) > (__pp_op_2__())
#define __pp_op_lt_1_2__() 0
#define __pp_op_eq_1_2__() 0
#define __pp_op_gt_1_2__() 1
#define __pp_op_lt_2_1__() 1
#define __pp_op_eq_2_1__() 0
#define __pp_op_gt_2_1__() 0
#endif

#else

#error "cmp 'pp_op' 1 and 2 failed. '__pp_op_1__()' or '__pp_op_2__()' not defined"

#endif
