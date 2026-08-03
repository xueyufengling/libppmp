#if defined(__pp_op_8__) && defined(__pp_op_6__)

#undef __pp_op_lt_8_6__
#undef __pp_op_eq_8_6__
#undef __pp_op_gt_8_6__
#undef __pp_op_lt_6_8__
#undef __pp_op_eq_6_8__
#undef __pp_op_gt_6_8__

#if (__pp_op_8__()) < (__pp_op_6__())
#define __pp_op_lt_8_6__() 1
#define __pp_op_eq_8_6__() 0
#define __pp_op_gt_8_6__() 0
#define __pp_op_lt_6_8__() 0
#define __pp_op_eq_6_8__() 0
#define __pp_op_gt_6_8__() 1
#elif (__pp_op_8__()) == (__pp_op_6__())
#define __pp_op_lt_8_6__() 0
#define __pp_op_eq_8_6__() 1
#define __pp_op_gt_8_6__() 0
#define __pp_op_lt_6_8__() 0
#define __pp_op_eq_6_8__() 1
#define __pp_op_gt_6_8__() 0
#elif (__pp_op_8__()) > (__pp_op_6__())
#define __pp_op_lt_8_6__() 0
#define __pp_op_eq_8_6__() 0
#define __pp_op_gt_8_6__() 1
#define __pp_op_lt_6_8__() 1
#define __pp_op_eq_6_8__() 0
#define __pp_op_gt_6_8__() 0
#endif

#else

#error "cmp 'pp_op' 8 and 6 failed. '__pp_op_8__()' or '__pp_op_6__()' not defined"

#endif
