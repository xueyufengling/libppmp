#if defined(__pp_op_11__) && defined(__pp_op_9__)

#undef __pp_op_lt_11_9__
#undef __pp_op_eq_11_9__
#undef __pp_op_gt_11_9__
#undef __pp_op_lt_9_11__
#undef __pp_op_eq_9_11__
#undef __pp_op_gt_9_11__

#if (__pp_op_11__()) < (__pp_op_9__())
#define __pp_op_lt_11_9__() 1
#define __pp_op_eq_11_9__() 0
#define __pp_op_gt_11_9__() 0
#define __pp_op_lt_9_11__() 0
#define __pp_op_eq_9_11__() 0
#define __pp_op_gt_9_11__() 1
#elif (__pp_op_11__()) == (__pp_op_9__())
#define __pp_op_lt_11_9__() 0
#define __pp_op_eq_11_9__() 1
#define __pp_op_gt_11_9__() 0
#define __pp_op_lt_9_11__() 0
#define __pp_op_eq_9_11__() 1
#define __pp_op_gt_9_11__() 0
#elif (__pp_op_11__()) > (__pp_op_9__())
#define __pp_op_lt_11_9__() 0
#define __pp_op_eq_11_9__() 0
#define __pp_op_gt_11_9__() 1
#define __pp_op_lt_9_11__() 1
#define __pp_op_eq_9_11__() 0
#define __pp_op_gt_9_11__() 0
#endif

#else

#error "cmp 'pp_op' 11 and 9 failed. '__pp_op_11__()' or '__pp_op_9__()' not defined"

#endif
