#if defined(__pp_op_10__) && defined(__pp_op_16__)

#undef __pp_op_lt_10_16__
#undef __pp_op_eq_10_16__
#undef __pp_op_gt_10_16__
#undef __pp_op_lt_16_10__
#undef __pp_op_eq_16_10__
#undef __pp_op_gt_16_10__

#if (__pp_op_10__()) < (__pp_op_16__())
#define __pp_op_lt_10_16__() 1
#define __pp_op_eq_10_16__() 0
#define __pp_op_gt_10_16__() 0
#define __pp_op_lt_16_10__() 0
#define __pp_op_eq_16_10__() 0
#define __pp_op_gt_16_10__() 1
#elif (__pp_op_10__()) == (__pp_op_16__())
#define __pp_op_lt_10_16__() 0
#define __pp_op_eq_10_16__() 1
#define __pp_op_gt_10_16__() 0
#define __pp_op_lt_16_10__() 0
#define __pp_op_eq_16_10__() 1
#define __pp_op_gt_16_10__() 0
#elif (__pp_op_10__()) > (__pp_op_16__())
#define __pp_op_lt_10_16__() 0
#define __pp_op_eq_10_16__() 0
#define __pp_op_gt_10_16__() 1
#define __pp_op_lt_16_10__() 1
#define __pp_op_eq_16_10__() 0
#define __pp_op_gt_16_10__() 0
#endif

#else

#error "cmp op 10 and op 16 failed. '__pp_op_10__' or '__pp_op_16__' not defined"

#endif
