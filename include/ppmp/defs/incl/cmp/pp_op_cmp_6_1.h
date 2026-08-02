#if defined(__pp_op_6__) && defined(__pp_op_1__)

#undef __pp_op_lt_6_1__
#undef __pp_op_eq_6_1__
#undef __pp_op_gt_6_1__
#undef __pp_op_lt_1_6__
#undef __pp_op_eq_1_6__
#undef __pp_op_gt_1_6__

#if (__pp_op_6__()) < (__pp_op_1__())
#define __pp_op_lt_6_1__() 1
#define __pp_op_eq_6_1__() 0
#define __pp_op_gt_6_1__() 0
#define __pp_op_lt_1_6__() 0
#define __pp_op_eq_1_6__() 0
#define __pp_op_gt_1_6__() 1
#elif (__pp_op_6__()) == (__pp_op_1__())
#define __pp_op_lt_6_1__() 0
#define __pp_op_eq_6_1__() 1
#define __pp_op_gt_6_1__() 0
#define __pp_op_lt_1_6__() 0
#define __pp_op_eq_1_6__() 1
#define __pp_op_gt_1_6__() 0
#elif (__pp_op_6__()) > (__pp_op_1__())
#define __pp_op_lt_6_1__() 0
#define __pp_op_eq_6_1__() 0
#define __pp_op_gt_6_1__() 1
#define __pp_op_lt_1_6__() 1
#define __pp_op_eq_1_6__() 0
#define __pp_op_gt_1_6__() 0
#endif

#else

#error "cmp op 6 and op 1 failed. '__pp_op_6__' or '__pp_op_1__' not defined"

#endif
