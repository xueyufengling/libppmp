#if defined(__pp_op_16__) && defined(__pp_op_2__)

#undef __pp_op_lt_16_2__
#undef __pp_op_eq_16_2__
#undef __pp_op_gt_16_2__
#undef __pp_op_lt_2_16__
#undef __pp_op_eq_2_16__
#undef __pp_op_gt_2_16__

#if (__pp_op_16__()) < (__pp_op_2__())
#define __pp_op_lt_16_2__() 1
#define __pp_op_eq_16_2__() 0
#define __pp_op_gt_16_2__() 0
#define __pp_op_lt_2_16__() 0
#define __pp_op_eq_2_16__() 0
#define __pp_op_gt_2_16__() 1
#elif (__pp_op_16__()) == (__pp_op_2__())
#define __pp_op_lt_16_2__() 0
#define __pp_op_eq_16_2__() 1
#define __pp_op_gt_16_2__() 0
#define __pp_op_lt_2_16__() 0
#define __pp_op_eq_2_16__() 1
#define __pp_op_gt_2_16__() 0
#elif (__pp_op_16__()) > (__pp_op_2__())
#define __pp_op_lt_16_2__() 0
#define __pp_op_eq_16_2__() 0
#define __pp_op_gt_16_2__() 1
#define __pp_op_lt_2_16__() 1
#define __pp_op_eq_2_16__() 0
#define __pp_op_gt_2_16__() 0
#endif

#else

#error "cmp 'pp_op' 16 and 2 failed. '__pp_op_16__()' or '__pp_op_2__()' not defined"

#endif
