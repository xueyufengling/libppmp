#if defined(__pp_op_8__) && defined(__pp_op_12__)

#undef __pp_op_lt_8_12__
#undef __pp_op_eq_8_12__
#undef __pp_op_gt_8_12__
#undef __pp_op_lt_12_8__
#undef __pp_op_eq_12_8__
#undef __pp_op_gt_12_8__

#if (__pp_op_8__()) < (__pp_op_12__())
#define __pp_op_lt_8_12__() 1
#define __pp_op_eq_8_12__() 0
#define __pp_op_gt_8_12__() 0
#define __pp_op_lt_12_8__() 0
#define __pp_op_eq_12_8__() 0
#define __pp_op_gt_12_8__() 1
#elif (__pp_op_8__()) == (__pp_op_12__())
#define __pp_op_lt_8_12__() 0
#define __pp_op_eq_8_12__() 1
#define __pp_op_gt_8_12__() 0
#define __pp_op_lt_12_8__() 0
#define __pp_op_eq_12_8__() 1
#define __pp_op_gt_12_8__() 0
#elif (__pp_op_8__()) > (__pp_op_12__())
#define __pp_op_lt_8_12__() 0
#define __pp_op_eq_8_12__() 0
#define __pp_op_gt_8_12__() 1
#define __pp_op_lt_12_8__() 1
#define __pp_op_eq_12_8__() 0
#define __pp_op_gt_12_8__() 0
#endif

#else

#error "cmp 'pp_op' 8 and 12 failed. '__pp_op_8__()' or '__pp_op_12__()' not defined"

#endif
