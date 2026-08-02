#if defined(__pp_op_5__) && defined(__pp_op_6__)

#undef __pp_op_lt_5_6__
#undef __pp_op_eq_5_6__
#undef __pp_op_gt_5_6__
#undef __pp_op_lt_6_5__
#undef __pp_op_eq_6_5__
#undef __pp_op_gt_6_5__

#if (__pp_op_5__()) < (__pp_op_6__())
#define __pp_op_lt_5_6__() 1
#define __pp_op_eq_5_6__() 0
#define __pp_op_gt_5_6__() 0
#define __pp_op_lt_6_5__() 0
#define __pp_op_eq_6_5__() 0
#define __pp_op_gt_6_5__() 1
#elif (__pp_op_5__()) == (__pp_op_6__())
#define __pp_op_lt_5_6__() 0
#define __pp_op_eq_5_6__() 1
#define __pp_op_gt_5_6__() 0
#define __pp_op_lt_6_5__() 0
#define __pp_op_eq_6_5__() 1
#define __pp_op_gt_6_5__() 0
#elif (__pp_op_5__()) > (__pp_op_6__())
#define __pp_op_lt_5_6__() 0
#define __pp_op_eq_5_6__() 0
#define __pp_op_gt_5_6__() 1
#define __pp_op_lt_6_5__() 1
#define __pp_op_eq_6_5__() 0
#define __pp_op_gt_6_5__() 0
#endif

#else

#error "cmp op 5 and op 6 failed. '__pp_op_5__' or '__pp_op_6__' not defined"

#endif
