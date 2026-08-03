#if defined(__pp_op_6__) && defined(__pp_op_13__)

#undef __pp_op_lt_6_13__
#undef __pp_op_eq_6_13__
#undef __pp_op_gt_6_13__
#undef __pp_op_lt_13_6__
#undef __pp_op_eq_13_6__
#undef __pp_op_gt_13_6__

#if (__pp_op_6__()) < (__pp_op_13__())
#define __pp_op_lt_6_13__() 1
#define __pp_op_eq_6_13__() 0
#define __pp_op_gt_6_13__() 0
#define __pp_op_lt_13_6__() 0
#define __pp_op_eq_13_6__() 0
#define __pp_op_gt_13_6__() 1
#elif (__pp_op_6__()) == (__pp_op_13__())
#define __pp_op_lt_6_13__() 0
#define __pp_op_eq_6_13__() 1
#define __pp_op_gt_6_13__() 0
#define __pp_op_lt_13_6__() 0
#define __pp_op_eq_13_6__() 1
#define __pp_op_gt_13_6__() 0
#elif (__pp_op_6__()) > (__pp_op_13__())
#define __pp_op_lt_6_13__() 0
#define __pp_op_eq_6_13__() 0
#define __pp_op_gt_6_13__() 1
#define __pp_op_lt_13_6__() 1
#define __pp_op_eq_13_6__() 0
#define __pp_op_gt_13_6__() 0
#endif

#else

#error "cmp 'pp_op' 6 and 13 failed. '__pp_op_6__()' or '__pp_op_13__()' not defined"

#endif
