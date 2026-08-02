#if defined(__pp_op_7__) && defined(__pp_op_6__)

#undef __pp_op_lt_7_6__
#undef __pp_op_eq_7_6__
#undef __pp_op_gt_7_6__
#undef __pp_op_lt_6_7__
#undef __pp_op_eq_6_7__
#undef __pp_op_gt_6_7__

#if (__pp_op_7__()) < (__pp_op_6__())
#define __pp_op_lt_7_6__() 1
#define __pp_op_eq_7_6__() 0
#define __pp_op_gt_7_6__() 0
#define __pp_op_lt_6_7__() 0
#define __pp_op_eq_6_7__() 0
#define __pp_op_gt_6_7__() 1
#elif (__pp_op_7__()) == (__pp_op_6__())
#define __pp_op_lt_7_6__() 0
#define __pp_op_eq_7_6__() 1
#define __pp_op_gt_7_6__() 0
#define __pp_op_lt_6_7__() 0
#define __pp_op_eq_6_7__() 1
#define __pp_op_gt_6_7__() 0
#elif (__pp_op_7__()) > (__pp_op_6__())
#define __pp_op_lt_7_6__() 0
#define __pp_op_eq_7_6__() 0
#define __pp_op_gt_7_6__() 1
#define __pp_op_lt_6_7__() 1
#define __pp_op_eq_6_7__() 0
#define __pp_op_gt_6_7__() 0
#endif

#else

#error "cmp op 7 and op 6 failed. '__pp_op_7__' or '__pp_op_6__' not defined"

#endif
