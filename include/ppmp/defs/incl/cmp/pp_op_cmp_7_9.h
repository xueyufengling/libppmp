#if defined(__pp_op_7__) && defined(__pp_op_9__)

#undef __pp_op_lt_7_9__
#undef __pp_op_eq_7_9__
#undef __pp_op_gt_7_9__
#undef __pp_op_lt_9_7__
#undef __pp_op_eq_9_7__
#undef __pp_op_gt_9_7__

#if (__pp_op_7__()) < (__pp_op_9__())
#define __pp_op_lt_7_9__() 1
#define __pp_op_eq_7_9__() 0
#define __pp_op_gt_7_9__() 0
#define __pp_op_lt_9_7__() 0
#define __pp_op_eq_9_7__() 0
#define __pp_op_gt_9_7__() 1
#elif (__pp_op_7__()) == (__pp_op_9__())
#define __pp_op_lt_7_9__() 0
#define __pp_op_eq_7_9__() 1
#define __pp_op_gt_7_9__() 0
#define __pp_op_lt_9_7__() 0
#define __pp_op_eq_9_7__() 1
#define __pp_op_gt_9_7__() 0
#elif (__pp_op_7__()) > (__pp_op_9__())
#define __pp_op_lt_7_9__() 0
#define __pp_op_eq_7_9__() 0
#define __pp_op_gt_7_9__() 1
#define __pp_op_lt_9_7__() 1
#define __pp_op_eq_9_7__() 0
#define __pp_op_gt_9_7__() 0
#endif

#else

#error "cmp op 7 and op 9 failed. '__pp_op_7__' or '__pp_op_9__' not defined"

#endif
