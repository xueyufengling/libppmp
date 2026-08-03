#if defined(__pp_op_8__) && defined(__pp_op_16__)

#undef __pp_op_lt_8_16__
#undef __pp_op_eq_8_16__
#undef __pp_op_gt_8_16__
#undef __pp_op_lt_16_8__
#undef __pp_op_eq_16_8__
#undef __pp_op_gt_16_8__

#if (__pp_op_8__()) < (__pp_op_16__())
#define __pp_op_lt_8_16__() 1
#define __pp_op_eq_8_16__() 0
#define __pp_op_gt_8_16__() 0
#define __pp_op_lt_16_8__() 0
#define __pp_op_eq_16_8__() 0
#define __pp_op_gt_16_8__() 1
#elif (__pp_op_8__()) == (__pp_op_16__())
#define __pp_op_lt_8_16__() 0
#define __pp_op_eq_8_16__() 1
#define __pp_op_gt_8_16__() 0
#define __pp_op_lt_16_8__() 0
#define __pp_op_eq_16_8__() 1
#define __pp_op_gt_16_8__() 0
#elif (__pp_op_8__()) > (__pp_op_16__())
#define __pp_op_lt_8_16__() 0
#define __pp_op_eq_8_16__() 0
#define __pp_op_gt_8_16__() 1
#define __pp_op_lt_16_8__() 1
#define __pp_op_eq_16_8__() 0
#define __pp_op_gt_16_8__() 0
#endif

#else

#error "cmp 'pp_op' 8 and 16 failed. '__pp_op_8__()' or '__pp_op_16__()' not defined"

#endif
