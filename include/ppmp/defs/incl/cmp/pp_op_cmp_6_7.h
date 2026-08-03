#if defined(__pp_op_6__) && defined(__pp_op_7__)

#undef __pp_op_lt_6_7__
#undef __pp_op_eq_6_7__
#undef __pp_op_gt_6_7__
#undef __pp_op_lt_7_6__
#undef __pp_op_eq_7_6__
#undef __pp_op_gt_7_6__

#if (__pp_op_6__()) < (__pp_op_7__())
#define __pp_op_lt_6_7__() 1
#define __pp_op_eq_6_7__() 0
#define __pp_op_gt_6_7__() 0
#define __pp_op_lt_7_6__() 0
#define __pp_op_eq_7_6__() 0
#define __pp_op_gt_7_6__() 1
#elif (__pp_op_6__()) == (__pp_op_7__())
#define __pp_op_lt_6_7__() 0
#define __pp_op_eq_6_7__() 1
#define __pp_op_gt_6_7__() 0
#define __pp_op_lt_7_6__() 0
#define __pp_op_eq_7_6__() 1
#define __pp_op_gt_7_6__() 0
#elif (__pp_op_6__()) > (__pp_op_7__())
#define __pp_op_lt_6_7__() 0
#define __pp_op_eq_6_7__() 0
#define __pp_op_gt_6_7__() 1
#define __pp_op_lt_7_6__() 1
#define __pp_op_eq_7_6__() 0
#define __pp_op_gt_7_6__() 0
#endif

#else

#error "cmp 'pp_op' 6 and 7 failed. '__pp_op_6__()' or '__pp_op_7__()' not defined"

#endif
