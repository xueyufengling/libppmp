#if defined(__pp_op_4__) && defined(__pp_op_9__)

#undef __pp_op_lt_4_9__
#undef __pp_op_eq_4_9__
#undef __pp_op_gt_4_9__
#undef __pp_op_lt_9_4__
#undef __pp_op_eq_9_4__
#undef __pp_op_gt_9_4__

#if (__pp_op_4__()) < (__pp_op_9__())
#define __pp_op_lt_4_9__() 1
#define __pp_op_eq_4_9__() 0
#define __pp_op_gt_4_9__() 0
#define __pp_op_lt_9_4__() 0
#define __pp_op_eq_9_4__() 0
#define __pp_op_gt_9_4__() 1
#elif (__pp_op_4__()) == (__pp_op_9__())
#define __pp_op_lt_4_9__() 0
#define __pp_op_eq_4_9__() 1
#define __pp_op_gt_4_9__() 0
#define __pp_op_lt_9_4__() 0
#define __pp_op_eq_9_4__() 1
#define __pp_op_gt_9_4__() 0
#elif (__pp_op_4__()) > (__pp_op_9__())
#define __pp_op_lt_4_9__() 0
#define __pp_op_eq_4_9__() 0
#define __pp_op_gt_4_9__() 1
#define __pp_op_lt_9_4__() 1
#define __pp_op_eq_9_4__() 0
#define __pp_op_gt_9_4__() 0
#endif

#else

#error "cmp op 4 and op 9 failed. '__pp_op_4__' or '__pp_op_9__' not defined"

#endif
