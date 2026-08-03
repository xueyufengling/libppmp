#if defined(__pp_op_7__) && defined(__pp_op_16__)

#undef __pp_op_lt_7_16__
#undef __pp_op_eq_7_16__
#undef __pp_op_gt_7_16__
#undef __pp_op_lt_16_7__
#undef __pp_op_eq_16_7__
#undef __pp_op_gt_16_7__

#if (__pp_op_7__()) < (__pp_op_16__())
#define __pp_op_lt_7_16__() 1
#define __pp_op_eq_7_16__() 0
#define __pp_op_gt_7_16__() 0
#define __pp_op_lt_16_7__() 0
#define __pp_op_eq_16_7__() 0
#define __pp_op_gt_16_7__() 1
#elif (__pp_op_7__()) == (__pp_op_16__())
#define __pp_op_lt_7_16__() 0
#define __pp_op_eq_7_16__() 1
#define __pp_op_gt_7_16__() 0
#define __pp_op_lt_16_7__() 0
#define __pp_op_eq_16_7__() 1
#define __pp_op_gt_16_7__() 0
#elif (__pp_op_7__()) > (__pp_op_16__())
#define __pp_op_lt_7_16__() 0
#define __pp_op_eq_7_16__() 0
#define __pp_op_gt_7_16__() 1
#define __pp_op_lt_16_7__() 1
#define __pp_op_eq_16_7__() 0
#define __pp_op_gt_16_7__() 0
#endif

#else

#error "cmp 'pp_op' 7 and 16 failed. '__pp_op_7__()' or '__pp_op_16__()' not defined"

#endif
