#if defined(__pp_op_7__) && defined(__pp_op_1__)

#undef __pp_op_lt_7_1__
#undef __pp_op_eq_7_1__
#undef __pp_op_gt_7_1__
#undef __pp_op_lt_1_7__
#undef __pp_op_eq_1_7__
#undef __pp_op_gt_1_7__

#if (__pp_op_7__()) < (__pp_op_1__())
#define __pp_op_lt_7_1__() 1
#define __pp_op_eq_7_1__() 0
#define __pp_op_gt_7_1__() 0
#define __pp_op_lt_1_7__() 0
#define __pp_op_eq_1_7__() 0
#define __pp_op_gt_1_7__() 1
#elif (__pp_op_7__()) == (__pp_op_1__())
#define __pp_op_lt_7_1__() 0
#define __pp_op_eq_7_1__() 1
#define __pp_op_gt_7_1__() 0
#define __pp_op_lt_1_7__() 0
#define __pp_op_eq_1_7__() 1
#define __pp_op_gt_1_7__() 0
#elif (__pp_op_7__()) > (__pp_op_1__())
#define __pp_op_lt_7_1__() 0
#define __pp_op_eq_7_1__() 0
#define __pp_op_gt_7_1__() 1
#define __pp_op_lt_1_7__() 1
#define __pp_op_eq_1_7__() 0
#define __pp_op_gt_1_7__() 0
#endif

#else

#error "cmp 'pp_op' 7 and 1 failed. '__pp_op_7__()' or '__pp_op_1__()' not defined"

#endif
