#if defined(__pp_op_1__) && defined(__pp_op_16__)

#undef __pp_op_lt_1_16__
#undef __pp_op_eq_1_16__
#undef __pp_op_gt_1_16__
#undef __pp_op_lt_16_1__
#undef __pp_op_eq_16_1__
#undef __pp_op_gt_16_1__

#if (__pp_op_1__()) < (__pp_op_16__())
#define __pp_op_lt_1_16__() 1
#define __pp_op_eq_1_16__() 0
#define __pp_op_gt_1_16__() 0
#define __pp_op_lt_16_1__() 0
#define __pp_op_eq_16_1__() 0
#define __pp_op_gt_16_1__() 1
#elif (__pp_op_1__()) == (__pp_op_16__())
#define __pp_op_lt_1_16__() 0
#define __pp_op_eq_1_16__() 1
#define __pp_op_gt_1_16__() 0
#define __pp_op_lt_16_1__() 0
#define __pp_op_eq_16_1__() 1
#define __pp_op_gt_16_1__() 0
#elif (__pp_op_1__()) > (__pp_op_16__())
#define __pp_op_lt_1_16__() 0
#define __pp_op_eq_1_16__() 0
#define __pp_op_gt_1_16__() 1
#define __pp_op_lt_16_1__() 1
#define __pp_op_eq_16_1__() 0
#define __pp_op_gt_16_1__() 0
#endif

#else

#error "cmp 'pp_op' 1 and 16 failed. '__pp_op_1__()' or '__pp_op_16__()' not defined"

#endif
