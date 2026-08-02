#if defined(__pp_op_13__) && defined(__pp_op_6__)

#undef __pp_op_lt_13_6__
#undef __pp_op_eq_13_6__
#undef __pp_op_gt_13_6__
#undef __pp_op_lt_6_13__
#undef __pp_op_eq_6_13__
#undef __pp_op_gt_6_13__

#if (__pp_op_13__()) < (__pp_op_6__())
#define __pp_op_lt_13_6__() 1
#define __pp_op_eq_13_6__() 0
#define __pp_op_gt_13_6__() 0
#define __pp_op_lt_6_13__() 0
#define __pp_op_eq_6_13__() 0
#define __pp_op_gt_6_13__() 1
#elif (__pp_op_13__()) == (__pp_op_6__())
#define __pp_op_lt_13_6__() 0
#define __pp_op_eq_13_6__() 1
#define __pp_op_gt_13_6__() 0
#define __pp_op_lt_6_13__() 0
#define __pp_op_eq_6_13__() 1
#define __pp_op_gt_6_13__() 0
#elif (__pp_op_13__()) > (__pp_op_6__())
#define __pp_op_lt_13_6__() 0
#define __pp_op_eq_13_6__() 0
#define __pp_op_gt_13_6__() 1
#define __pp_op_lt_6_13__() 1
#define __pp_op_eq_6_13__() 0
#define __pp_op_gt_6_13__() 0
#endif

#else

#error "cmp op 13 and op 6 failed. '__pp_op_13__' or '__pp_op_6__' not defined"

#endif
