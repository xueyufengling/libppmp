#if defined(__pp_op_2__) && defined(__pp_op_8__)

#undef __pp_op_lt_2_8__
#undef __pp_op_eq_2_8__
#undef __pp_op_gt_2_8__
#undef __pp_op_lt_8_2__
#undef __pp_op_eq_8_2__
#undef __pp_op_gt_8_2__

#if (__pp_op_2__()) < (__pp_op_8__())
#define __pp_op_lt_2_8__() 1
#define __pp_op_eq_2_8__() 0
#define __pp_op_gt_2_8__() 0
#define __pp_op_lt_8_2__() 0
#define __pp_op_eq_8_2__() 0
#define __pp_op_gt_8_2__() 1
#elif (__pp_op_2__()) == (__pp_op_8__())
#define __pp_op_lt_2_8__() 0
#define __pp_op_eq_2_8__() 1
#define __pp_op_gt_2_8__() 0
#define __pp_op_lt_8_2__() 0
#define __pp_op_eq_8_2__() 1
#define __pp_op_gt_8_2__() 0
#elif (__pp_op_2__()) > (__pp_op_8__())
#define __pp_op_lt_2_8__() 0
#define __pp_op_eq_2_8__() 0
#define __pp_op_gt_2_8__() 1
#define __pp_op_lt_8_2__() 1
#define __pp_op_eq_8_2__() 0
#define __pp_op_gt_8_2__() 0
#endif

#else

#error "cmp 'pp_op' 2 and 8 failed. '__pp_op_2__()' or '__pp_op_8__()' not defined"

#endif
