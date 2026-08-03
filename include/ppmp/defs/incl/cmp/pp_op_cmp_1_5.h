#if defined(__pp_op_1__) && defined(__pp_op_5__)

#undef __pp_op_lt_1_5__
#undef __pp_op_eq_1_5__
#undef __pp_op_gt_1_5__
#undef __pp_op_lt_5_1__
#undef __pp_op_eq_5_1__
#undef __pp_op_gt_5_1__

#if (__pp_op_1__()) < (__pp_op_5__())
#define __pp_op_lt_1_5__() 1
#define __pp_op_eq_1_5__() 0
#define __pp_op_gt_1_5__() 0
#define __pp_op_lt_5_1__() 0
#define __pp_op_eq_5_1__() 0
#define __pp_op_gt_5_1__() 1
#elif (__pp_op_1__()) == (__pp_op_5__())
#define __pp_op_lt_1_5__() 0
#define __pp_op_eq_1_5__() 1
#define __pp_op_gt_1_5__() 0
#define __pp_op_lt_5_1__() 0
#define __pp_op_eq_5_1__() 1
#define __pp_op_gt_5_1__() 0
#elif (__pp_op_1__()) > (__pp_op_5__())
#define __pp_op_lt_1_5__() 0
#define __pp_op_eq_1_5__() 0
#define __pp_op_gt_1_5__() 1
#define __pp_op_lt_5_1__() 1
#define __pp_op_eq_5_1__() 0
#define __pp_op_gt_5_1__() 0
#endif

#else

#error "cmp 'pp_op' 1 and 5 failed. '__pp_op_1__()' or '__pp_op_5__()' not defined"

#endif
