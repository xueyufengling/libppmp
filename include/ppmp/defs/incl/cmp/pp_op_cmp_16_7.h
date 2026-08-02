#if defined(__pp_op_16__) && defined(__pp_op_7__)

#undef __pp_op_lt_16_7__
#undef __pp_op_eq_16_7__
#undef __pp_op_gt_16_7__
#undef __pp_op_lt_7_16__
#undef __pp_op_eq_7_16__
#undef __pp_op_gt_7_16__

#if (__pp_op_16__()) < (__pp_op_7__())
#define __pp_op_lt_16_7__() 1
#define __pp_op_eq_16_7__() 0
#define __pp_op_gt_16_7__() 0
#define __pp_op_lt_7_16__() 0
#define __pp_op_eq_7_16__() 0
#define __pp_op_gt_7_16__() 1
#elif (__pp_op_16__()) == (__pp_op_7__())
#define __pp_op_lt_16_7__() 0
#define __pp_op_eq_16_7__() 1
#define __pp_op_gt_16_7__() 0
#define __pp_op_lt_7_16__() 0
#define __pp_op_eq_7_16__() 1
#define __pp_op_gt_7_16__() 0
#elif (__pp_op_16__()) > (__pp_op_7__())
#define __pp_op_lt_16_7__() 0
#define __pp_op_eq_16_7__() 0
#define __pp_op_gt_16_7__() 1
#define __pp_op_lt_7_16__() 1
#define __pp_op_eq_7_16__() 0
#define __pp_op_gt_7_16__() 0
#endif

#else

#error "cmp op 16 and op 7 failed. '__pp_op_16__' or '__pp_op_7__' not defined"

#endif
