#if defined(__pp_op_4__) && defined(__pp_op_6__)

#undef __pp_op_lt_4_6__
#undef __pp_op_eq_4_6__
#undef __pp_op_gt_4_6__
#undef __pp_op_lt_6_4__
#undef __pp_op_eq_6_4__
#undef __pp_op_gt_6_4__

#if (__pp_op_4__()) < (__pp_op_6__())
#define __pp_op_lt_4_6__() 1
#define __pp_op_eq_4_6__() 0
#define __pp_op_gt_4_6__() 0
#define __pp_op_lt_6_4__() 0
#define __pp_op_eq_6_4__() 0
#define __pp_op_gt_6_4__() 1
#elif (__pp_op_4__()) == (__pp_op_6__())
#define __pp_op_lt_4_6__() 0
#define __pp_op_eq_4_6__() 1
#define __pp_op_gt_4_6__() 0
#define __pp_op_lt_6_4__() 0
#define __pp_op_eq_6_4__() 1
#define __pp_op_gt_6_4__() 0
#elif (__pp_op_4__()) > (__pp_op_6__())
#define __pp_op_lt_4_6__() 0
#define __pp_op_eq_4_6__() 0
#define __pp_op_gt_4_6__() 1
#define __pp_op_lt_6_4__() 1
#define __pp_op_eq_6_4__() 0
#define __pp_op_gt_6_4__() 0
#endif

#else

#error "cmp op 4 and op 6 failed. '__pp_op_4__' or '__pp_op_6__' not defined"

#endif
