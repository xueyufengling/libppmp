#if defined(__pp_op_9__) && defined(__pp_op_1__)

#undef __pp_op_lt_9_1__
#undef __pp_op_eq_9_1__
#undef __pp_op_gt_9_1__
#undef __pp_op_lt_1_9__
#undef __pp_op_eq_1_9__
#undef __pp_op_gt_1_9__

#if (__pp_op_9__()) < (__pp_op_1__())
#define __pp_op_lt_9_1__() 1
#define __pp_op_eq_9_1__() 0
#define __pp_op_gt_9_1__() 0
#define __pp_op_lt_1_9__() 0
#define __pp_op_eq_1_9__() 0
#define __pp_op_gt_1_9__() 1
#elif (__pp_op_9__()) == (__pp_op_1__())
#define __pp_op_lt_9_1__() 0
#define __pp_op_eq_9_1__() 1
#define __pp_op_gt_9_1__() 0
#define __pp_op_lt_1_9__() 0
#define __pp_op_eq_1_9__() 1
#define __pp_op_gt_1_9__() 0
#elif (__pp_op_9__()) > (__pp_op_1__())
#define __pp_op_lt_9_1__() 0
#define __pp_op_eq_9_1__() 0
#define __pp_op_gt_9_1__() 1
#define __pp_op_lt_1_9__() 1
#define __pp_op_eq_1_9__() 0
#define __pp_op_gt_1_9__() 0
#endif

#else

#error "cmp op 9 and op 1 failed. '__pp_op_9__' or '__pp_op_1__' not defined"

#endif
