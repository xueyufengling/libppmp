#if defined(__pp_op_5__) && defined(__pp_op_15__)

#undef __pp_op_lt_5_15__
#undef __pp_op_eq_5_15__
#undef __pp_op_gt_5_15__
#undef __pp_op_lt_15_5__
#undef __pp_op_eq_15_5__
#undef __pp_op_gt_15_5__

#if (__pp_op_5__()) < (__pp_op_15__())
#define __pp_op_lt_5_15__() 1
#define __pp_op_eq_5_15__() 0
#define __pp_op_gt_5_15__() 0
#define __pp_op_lt_15_5__() 0
#define __pp_op_eq_15_5__() 0
#define __pp_op_gt_15_5__() 1
#elif (__pp_op_5__()) == (__pp_op_15__())
#define __pp_op_lt_5_15__() 0
#define __pp_op_eq_5_15__() 1
#define __pp_op_gt_5_15__() 0
#define __pp_op_lt_15_5__() 0
#define __pp_op_eq_15_5__() 1
#define __pp_op_gt_15_5__() 0
#elif (__pp_op_5__()) > (__pp_op_15__())
#define __pp_op_lt_5_15__() 0
#define __pp_op_eq_5_15__() 0
#define __pp_op_gt_5_15__() 1
#define __pp_op_lt_15_5__() 1
#define __pp_op_eq_15_5__() 0
#define __pp_op_gt_15_5__() 0
#endif

#else

#error "cmp op 5 and op 15 failed. '__pp_op_5__' or '__pp_op_15__' not defined"

#endif
