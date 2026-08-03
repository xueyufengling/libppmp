#if defined(__pp_op_1__) && defined(__pp_op_8__)

#undef __pp_op_lt_1_8__
#undef __pp_op_eq_1_8__
#undef __pp_op_gt_1_8__
#undef __pp_op_lt_8_1__
#undef __pp_op_eq_8_1__
#undef __pp_op_gt_8_1__

#if (__pp_op_1__()) < (__pp_op_8__())
#define __pp_op_lt_1_8__() 1
#define __pp_op_eq_1_8__() 0
#define __pp_op_gt_1_8__() 0
#define __pp_op_lt_8_1__() 0
#define __pp_op_eq_8_1__() 0
#define __pp_op_gt_8_1__() 1
#elif (__pp_op_1__()) == (__pp_op_8__())
#define __pp_op_lt_1_8__() 0
#define __pp_op_eq_1_8__() 1
#define __pp_op_gt_1_8__() 0
#define __pp_op_lt_8_1__() 0
#define __pp_op_eq_8_1__() 1
#define __pp_op_gt_8_1__() 0
#elif (__pp_op_1__()) > (__pp_op_8__())
#define __pp_op_lt_1_8__() 0
#define __pp_op_eq_1_8__() 0
#define __pp_op_gt_1_8__() 1
#define __pp_op_lt_8_1__() 1
#define __pp_op_eq_8_1__() 0
#define __pp_op_gt_8_1__() 0
#endif

#else

#error "cmp 'pp_op' 1 and 8 failed. '__pp_op_1__()' or '__pp_op_8__()' not defined"

#endif
