#if defined(__pp_op_16__) && defined(__pp_op_13__)

#undef __pp_op_lt_16_13__
#undef __pp_op_eq_16_13__
#undef __pp_op_gt_16_13__
#undef __pp_op_lt_13_16__
#undef __pp_op_eq_13_16__
#undef __pp_op_gt_13_16__

#if (__pp_op_16__()) < (__pp_op_13__())
#define __pp_op_lt_16_13__() 1
#define __pp_op_eq_16_13__() 0
#define __pp_op_gt_16_13__() 0
#define __pp_op_lt_13_16__() 0
#define __pp_op_eq_13_16__() 0
#define __pp_op_gt_13_16__() 1
#elif (__pp_op_16__()) == (__pp_op_13__())
#define __pp_op_lt_16_13__() 0
#define __pp_op_eq_16_13__() 1
#define __pp_op_gt_16_13__() 0
#define __pp_op_lt_13_16__() 0
#define __pp_op_eq_13_16__() 1
#define __pp_op_gt_13_16__() 0
#elif (__pp_op_16__()) > (__pp_op_13__())
#define __pp_op_lt_16_13__() 0
#define __pp_op_eq_16_13__() 0
#define __pp_op_gt_16_13__() 1
#define __pp_op_lt_13_16__() 1
#define __pp_op_eq_13_16__() 0
#define __pp_op_gt_13_16__() 0
#endif

#else

#error "cmp 'pp_op' 16 and 13 failed. '__pp_op_16__()' or '__pp_op_13__()' not defined"

#endif
