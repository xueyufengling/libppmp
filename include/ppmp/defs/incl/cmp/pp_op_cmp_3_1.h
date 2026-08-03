#if defined(__pp_op_3__) && defined(__pp_op_1__)

#undef __pp_op_lt_3_1__
#undef __pp_op_eq_3_1__
#undef __pp_op_gt_3_1__
#undef __pp_op_lt_1_3__
#undef __pp_op_eq_1_3__
#undef __pp_op_gt_1_3__

#if (__pp_op_3__()) < (__pp_op_1__())
#define __pp_op_lt_3_1__() 1
#define __pp_op_eq_3_1__() 0
#define __pp_op_gt_3_1__() 0
#define __pp_op_lt_1_3__() 0
#define __pp_op_eq_1_3__() 0
#define __pp_op_gt_1_3__() 1
#elif (__pp_op_3__()) == (__pp_op_1__())
#define __pp_op_lt_3_1__() 0
#define __pp_op_eq_3_1__() 1
#define __pp_op_gt_3_1__() 0
#define __pp_op_lt_1_3__() 0
#define __pp_op_eq_1_3__() 1
#define __pp_op_gt_1_3__() 0
#elif (__pp_op_3__()) > (__pp_op_1__())
#define __pp_op_lt_3_1__() 0
#define __pp_op_eq_3_1__() 0
#define __pp_op_gt_3_1__() 1
#define __pp_op_lt_1_3__() 1
#define __pp_op_eq_1_3__() 0
#define __pp_op_gt_1_3__() 0
#endif

#else

#error "cmp 'pp_op' 3 and 1 failed. '__pp_op_3__()' or '__pp_op_1__()' not defined"

#endif
