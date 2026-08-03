#if defined(__pp_op_2__) && defined(__pp_op_9__)

#undef __pp_op_lt_2_9__
#undef __pp_op_eq_2_9__
#undef __pp_op_gt_2_9__
#undef __pp_op_lt_9_2__
#undef __pp_op_eq_9_2__
#undef __pp_op_gt_9_2__

#if (__pp_op_2__()) < (__pp_op_9__())
#define __pp_op_lt_2_9__() 1
#define __pp_op_eq_2_9__() 0
#define __pp_op_gt_2_9__() 0
#define __pp_op_lt_9_2__() 0
#define __pp_op_eq_9_2__() 0
#define __pp_op_gt_9_2__() 1
#elif (__pp_op_2__()) == (__pp_op_9__())
#define __pp_op_lt_2_9__() 0
#define __pp_op_eq_2_9__() 1
#define __pp_op_gt_2_9__() 0
#define __pp_op_lt_9_2__() 0
#define __pp_op_eq_9_2__() 1
#define __pp_op_gt_9_2__() 0
#elif (__pp_op_2__()) > (__pp_op_9__())
#define __pp_op_lt_2_9__() 0
#define __pp_op_eq_2_9__() 0
#define __pp_op_gt_2_9__() 1
#define __pp_op_lt_9_2__() 1
#define __pp_op_eq_9_2__() 0
#define __pp_op_gt_9_2__() 0
#endif

#else

#error "cmp 'pp_op' 2 and 9 failed. '__pp_op_2__()' or '__pp_op_9__()' not defined"

#endif
