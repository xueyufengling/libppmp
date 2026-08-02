#if defined(__pp_op_15__) && defined(__pp_op_16__)

#undef __pp_op_lt_15_16__
#undef __pp_op_eq_15_16__
#undef __pp_op_gt_15_16__
#undef __pp_op_lt_16_15__
#undef __pp_op_eq_16_15__
#undef __pp_op_gt_16_15__

#if (__pp_op_15__()) < (__pp_op_16__())
#define __pp_op_lt_15_16__() 1
#define __pp_op_eq_15_16__() 0
#define __pp_op_gt_15_16__() 0
#define __pp_op_lt_16_15__() 0
#define __pp_op_eq_16_15__() 0
#define __pp_op_gt_16_15__() 1
#elif (__pp_op_15__()) == (__pp_op_16__())
#define __pp_op_lt_15_16__() 0
#define __pp_op_eq_15_16__() 1
#define __pp_op_gt_15_16__() 0
#define __pp_op_lt_16_15__() 0
#define __pp_op_eq_16_15__() 1
#define __pp_op_gt_16_15__() 0
#elif (__pp_op_15__()) > (__pp_op_16__())
#define __pp_op_lt_15_16__() 0
#define __pp_op_eq_15_16__() 0
#define __pp_op_gt_15_16__() 1
#define __pp_op_lt_16_15__() 1
#define __pp_op_eq_16_15__() 0
#define __pp_op_gt_16_15__() 0
#endif

#else

#error "cmp op 15 and op 16 failed. '__pp_op_15__' or '__pp_op_16__' not defined"

#endif
