#if defined(__pp_op_1__) && defined(__pp_op_13__)

#undef __pp_op_lt_1_13__
#undef __pp_op_eq_1_13__
#undef __pp_op_gt_1_13__
#undef __pp_op_lt_13_1__
#undef __pp_op_eq_13_1__
#undef __pp_op_gt_13_1__

#if (__pp_op_1__()) < (__pp_op_13__())
#define __pp_op_lt_1_13__() 1
#define __pp_op_eq_1_13__() 0
#define __pp_op_gt_1_13__() 0
#define __pp_op_lt_13_1__() 0
#define __pp_op_eq_13_1__() 0
#define __pp_op_gt_13_1__() 1
#elif (__pp_op_1__()) == (__pp_op_13__())
#define __pp_op_lt_1_13__() 0
#define __pp_op_eq_1_13__() 1
#define __pp_op_gt_1_13__() 0
#define __pp_op_lt_13_1__() 0
#define __pp_op_eq_13_1__() 1
#define __pp_op_gt_13_1__() 0
#elif (__pp_op_1__()) > (__pp_op_13__())
#define __pp_op_lt_1_13__() 0
#define __pp_op_eq_1_13__() 0
#define __pp_op_gt_1_13__() 1
#define __pp_op_lt_13_1__() 1
#define __pp_op_eq_13_1__() 0
#define __pp_op_gt_13_1__() 0
#endif

#else

#error "cmp 'pp_op' 1 and 13 failed. '__pp_op_1__()' or '__pp_op_13__()' not defined"

#endif
