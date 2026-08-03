#if defined(__pp_op_16__) && defined(__pp_op_15__)

#undef __pp_op_lt_16_15__
#undef __pp_op_eq_16_15__
#undef __pp_op_gt_16_15__
#undef __pp_op_lt_15_16__
#undef __pp_op_eq_15_16__
#undef __pp_op_gt_15_16__

#if (__pp_op_16__()) < (__pp_op_15__())
#define __pp_op_lt_16_15__() 1
#define __pp_op_eq_16_15__() 0
#define __pp_op_gt_16_15__() 0
#define __pp_op_lt_15_16__() 0
#define __pp_op_eq_15_16__() 0
#define __pp_op_gt_15_16__() 1
#elif (__pp_op_16__()) == (__pp_op_15__())
#define __pp_op_lt_16_15__() 0
#define __pp_op_eq_16_15__() 1
#define __pp_op_gt_16_15__() 0
#define __pp_op_lt_15_16__() 0
#define __pp_op_eq_15_16__() 1
#define __pp_op_gt_15_16__() 0
#elif (__pp_op_16__()) > (__pp_op_15__())
#define __pp_op_lt_16_15__() 0
#define __pp_op_eq_16_15__() 0
#define __pp_op_gt_16_15__() 1
#define __pp_op_lt_15_16__() 1
#define __pp_op_eq_15_16__() 0
#define __pp_op_gt_15_16__() 0
#endif

#else

#error "cmp 'pp_op' 16 and 15 failed. '__pp_op_16__()' or '__pp_op_15__()' not defined"

#endif
