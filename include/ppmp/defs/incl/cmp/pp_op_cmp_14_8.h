#if defined(__pp_op_14__) && defined(__pp_op_8__)

#undef __pp_op_lt_14_8__
#undef __pp_op_eq_14_8__
#undef __pp_op_gt_14_8__
#undef __pp_op_lt_8_14__
#undef __pp_op_eq_8_14__
#undef __pp_op_gt_8_14__

#if (__pp_op_14__()) < (__pp_op_8__())
#define __pp_op_lt_14_8__() 1
#define __pp_op_eq_14_8__() 0
#define __pp_op_gt_14_8__() 0
#define __pp_op_lt_8_14__() 0
#define __pp_op_eq_8_14__() 0
#define __pp_op_gt_8_14__() 1
#elif (__pp_op_14__()) == (__pp_op_8__())
#define __pp_op_lt_14_8__() 0
#define __pp_op_eq_14_8__() 1
#define __pp_op_gt_14_8__() 0
#define __pp_op_lt_8_14__() 0
#define __pp_op_eq_8_14__() 1
#define __pp_op_gt_8_14__() 0
#elif (__pp_op_14__()) > (__pp_op_8__())
#define __pp_op_lt_14_8__() 0
#define __pp_op_eq_14_8__() 0
#define __pp_op_gt_14_8__() 1
#define __pp_op_lt_8_14__() 1
#define __pp_op_eq_8_14__() 0
#define __pp_op_gt_8_14__() 0
#endif

#else

#error "cmp 'pp_op' 14 and 8 failed. '__pp_op_14__()' or '__pp_op_8__()' not defined"

#endif
