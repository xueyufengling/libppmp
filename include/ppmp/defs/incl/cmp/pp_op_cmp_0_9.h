#if defined(__pp_op_0__) && defined(__pp_op_9__)

#undef __pp_op_lt_0_9__
#undef __pp_op_eq_0_9__
#undef __pp_op_gt_0_9__
#undef __pp_op_lt_9_0__
#undef __pp_op_eq_9_0__
#undef __pp_op_gt_9_0__

#if (__pp_op_0__()) < (__pp_op_9__())
#define __pp_op_lt_0_9__() 1
#define __pp_op_eq_0_9__() 0
#define __pp_op_gt_0_9__() 0
#define __pp_op_lt_9_0__() 0
#define __pp_op_eq_9_0__() 0
#define __pp_op_gt_9_0__() 1
#elif (__pp_op_0__()) == (__pp_op_9__())
#define __pp_op_lt_0_9__() 0
#define __pp_op_eq_0_9__() 1
#define __pp_op_gt_0_9__() 0
#define __pp_op_lt_9_0__() 0
#define __pp_op_eq_9_0__() 1
#define __pp_op_gt_9_0__() 0
#elif (__pp_op_0__()) > (__pp_op_9__())
#define __pp_op_lt_0_9__() 0
#define __pp_op_eq_0_9__() 0
#define __pp_op_gt_0_9__() 1
#define __pp_op_lt_9_0__() 1
#define __pp_op_eq_9_0__() 0
#define __pp_op_gt_9_0__() 0
#endif

#else

#error "cmp 'pp_op' 0 and 9 failed. '__pp_op_0__()' or '__pp_op_9__()' not defined"

#endif
