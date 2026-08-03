#if defined(__pp_op_5__) && defined(__pp_op_8__)

#undef __pp_op_lt_5_8__
#undef __pp_op_eq_5_8__
#undef __pp_op_gt_5_8__
#undef __pp_op_lt_8_5__
#undef __pp_op_eq_8_5__
#undef __pp_op_gt_8_5__

#if (__pp_op_5__()) < (__pp_op_8__())
#define __pp_op_lt_5_8__() 1
#define __pp_op_eq_5_8__() 0
#define __pp_op_gt_5_8__() 0
#define __pp_op_lt_8_5__() 0
#define __pp_op_eq_8_5__() 0
#define __pp_op_gt_8_5__() 1
#elif (__pp_op_5__()) == (__pp_op_8__())
#define __pp_op_lt_5_8__() 0
#define __pp_op_eq_5_8__() 1
#define __pp_op_gt_5_8__() 0
#define __pp_op_lt_8_5__() 0
#define __pp_op_eq_8_5__() 1
#define __pp_op_gt_8_5__() 0
#elif (__pp_op_5__()) > (__pp_op_8__())
#define __pp_op_lt_5_8__() 0
#define __pp_op_eq_5_8__() 0
#define __pp_op_gt_5_8__() 1
#define __pp_op_lt_8_5__() 1
#define __pp_op_eq_8_5__() 0
#define __pp_op_gt_8_5__() 0
#endif

#else

#error "cmp 'pp_op' 5 and 8 failed. '__pp_op_5__()' or '__pp_op_8__()' not defined"

#endif
