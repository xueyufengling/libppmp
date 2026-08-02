#if defined(__pp_op_16__) && defined(__pp_op_14__)

#undef __pp_op_lt_16_14__
#undef __pp_op_eq_16_14__
#undef __pp_op_gt_16_14__
#undef __pp_op_lt_14_16__
#undef __pp_op_eq_14_16__
#undef __pp_op_gt_14_16__

#if (__pp_op_16__()) < (__pp_op_14__())
#define __pp_op_lt_16_14__() 1
#define __pp_op_eq_16_14__() 0
#define __pp_op_gt_16_14__() 0
#define __pp_op_lt_14_16__() 0
#define __pp_op_eq_14_16__() 0
#define __pp_op_gt_14_16__() 1
#elif (__pp_op_16__()) == (__pp_op_14__())
#define __pp_op_lt_16_14__() 0
#define __pp_op_eq_16_14__() 1
#define __pp_op_gt_16_14__() 0
#define __pp_op_lt_14_16__() 0
#define __pp_op_eq_14_16__() 1
#define __pp_op_gt_14_16__() 0
#elif (__pp_op_16__()) > (__pp_op_14__())
#define __pp_op_lt_16_14__() 0
#define __pp_op_eq_16_14__() 0
#define __pp_op_gt_16_14__() 1
#define __pp_op_lt_14_16__() 1
#define __pp_op_eq_14_16__() 0
#define __pp_op_gt_14_16__() 0
#endif

#else

#error "cmp op 16 and op 14 failed. '__pp_op_16__' or '__pp_op_14__' not defined"

#endif
