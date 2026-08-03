#if defined(__pp_op_1__) && defined(__pp_op_4__)

#undef __pp_op_lt_1_4__
#undef __pp_op_eq_1_4__
#undef __pp_op_gt_1_4__
#undef __pp_op_lt_4_1__
#undef __pp_op_eq_4_1__
#undef __pp_op_gt_4_1__

#if (__pp_op_1__()) < (__pp_op_4__())
#define __pp_op_lt_1_4__() 1
#define __pp_op_eq_1_4__() 0
#define __pp_op_gt_1_4__() 0
#define __pp_op_lt_4_1__() 0
#define __pp_op_eq_4_1__() 0
#define __pp_op_gt_4_1__() 1
#elif (__pp_op_1__()) == (__pp_op_4__())
#define __pp_op_lt_1_4__() 0
#define __pp_op_eq_1_4__() 1
#define __pp_op_gt_1_4__() 0
#define __pp_op_lt_4_1__() 0
#define __pp_op_eq_4_1__() 1
#define __pp_op_gt_4_1__() 0
#elif (__pp_op_1__()) > (__pp_op_4__())
#define __pp_op_lt_1_4__() 0
#define __pp_op_eq_1_4__() 0
#define __pp_op_gt_1_4__() 1
#define __pp_op_lt_4_1__() 1
#define __pp_op_eq_4_1__() 0
#define __pp_op_gt_4_1__() 0
#endif

#else

#error "cmp 'pp_op' 1 and 4 failed. '__pp_op_1__()' or '__pp_op_4__()' not defined"

#endif
