#if defined(__pp_op_9__) && defined(__pp_op_13__)

#undef __pp_op_lt_9_13__
#undef __pp_op_eq_9_13__
#undef __pp_op_gt_9_13__
#undef __pp_op_lt_13_9__
#undef __pp_op_eq_13_9__
#undef __pp_op_gt_13_9__

#if (__pp_op_9__()) < (__pp_op_13__())
#define __pp_op_lt_9_13__() 1
#define __pp_op_eq_9_13__() 0
#define __pp_op_gt_9_13__() 0
#define __pp_op_lt_13_9__() 0
#define __pp_op_eq_13_9__() 0
#define __pp_op_gt_13_9__() 1
#elif (__pp_op_9__()) == (__pp_op_13__())
#define __pp_op_lt_9_13__() 0
#define __pp_op_eq_9_13__() 1
#define __pp_op_gt_9_13__() 0
#define __pp_op_lt_13_9__() 0
#define __pp_op_eq_13_9__() 1
#define __pp_op_gt_13_9__() 0
#elif (__pp_op_9__()) > (__pp_op_13__())
#define __pp_op_lt_9_13__() 0
#define __pp_op_eq_9_13__() 0
#define __pp_op_gt_9_13__() 1
#define __pp_op_lt_13_9__() 1
#define __pp_op_eq_13_9__() 0
#define __pp_op_gt_13_9__() 0
#endif

#else

#error "cmp 'pp_op' 9 and 13 failed. '__pp_op_9__()' or '__pp_op_13__()' not defined"

#endif
