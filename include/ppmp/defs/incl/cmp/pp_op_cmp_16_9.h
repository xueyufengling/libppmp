#if defined(__pp_op_16__) && defined(__pp_op_9__)

#undef __pp_op_lt_16_9__
#undef __pp_op_eq_16_9__
#undef __pp_op_gt_16_9__
#undef __pp_op_lt_9_16__
#undef __pp_op_eq_9_16__
#undef __pp_op_gt_9_16__

#if (__pp_op_16__()) < (__pp_op_9__())
#define __pp_op_lt_16_9__() 1
#define __pp_op_eq_16_9__() 0
#define __pp_op_gt_16_9__() 0
#define __pp_op_lt_9_16__() 0
#define __pp_op_eq_9_16__() 0
#define __pp_op_gt_9_16__() 1
#elif (__pp_op_16__()) == (__pp_op_9__())
#define __pp_op_lt_16_9__() 0
#define __pp_op_eq_16_9__() 1
#define __pp_op_gt_16_9__() 0
#define __pp_op_lt_9_16__() 0
#define __pp_op_eq_9_16__() 1
#define __pp_op_gt_9_16__() 0
#elif (__pp_op_16__()) > (__pp_op_9__())
#define __pp_op_lt_16_9__() 0
#define __pp_op_eq_16_9__() 0
#define __pp_op_gt_16_9__() 1
#define __pp_op_lt_9_16__() 1
#define __pp_op_eq_9_16__() 0
#define __pp_op_gt_9_16__() 0
#endif

#else

#error "cmp op 16 and op 9 failed. '__pp_op_16__' or '__pp_op_9__' not defined"

#endif
