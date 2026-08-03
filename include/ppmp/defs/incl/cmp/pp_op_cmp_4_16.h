#if defined(__pp_op_4__) && defined(__pp_op_16__)

#undef __pp_op_lt_4_16__
#undef __pp_op_eq_4_16__
#undef __pp_op_gt_4_16__
#undef __pp_op_lt_16_4__
#undef __pp_op_eq_16_4__
#undef __pp_op_gt_16_4__

#if (__pp_op_4__()) < (__pp_op_16__())
#define __pp_op_lt_4_16__() 1
#define __pp_op_eq_4_16__() 0
#define __pp_op_gt_4_16__() 0
#define __pp_op_lt_16_4__() 0
#define __pp_op_eq_16_4__() 0
#define __pp_op_gt_16_4__() 1
#elif (__pp_op_4__()) == (__pp_op_16__())
#define __pp_op_lt_4_16__() 0
#define __pp_op_eq_4_16__() 1
#define __pp_op_gt_4_16__() 0
#define __pp_op_lt_16_4__() 0
#define __pp_op_eq_16_4__() 1
#define __pp_op_gt_16_4__() 0
#elif (__pp_op_4__()) > (__pp_op_16__())
#define __pp_op_lt_4_16__() 0
#define __pp_op_eq_4_16__() 0
#define __pp_op_gt_4_16__() 1
#define __pp_op_lt_16_4__() 1
#define __pp_op_eq_16_4__() 0
#define __pp_op_gt_16_4__() 0
#endif

#else

#error "cmp 'pp_op' 4 and 16 failed. '__pp_op_4__()' or '__pp_op_16__()' not defined"

#endif
