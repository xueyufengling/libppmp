#if defined(__pp_op_3__) && defined(__pp_op_6__)

#undef __pp_op_lt_3_6__
#undef __pp_op_eq_3_6__
#undef __pp_op_gt_3_6__
#undef __pp_op_lt_6_3__
#undef __pp_op_eq_6_3__
#undef __pp_op_gt_6_3__

#if (__pp_op_3__()) < (__pp_op_6__())
#define __pp_op_lt_3_6__() 1
#define __pp_op_eq_3_6__() 0
#define __pp_op_gt_3_6__() 0
#define __pp_op_lt_6_3__() 0
#define __pp_op_eq_6_3__() 0
#define __pp_op_gt_6_3__() 1
#elif (__pp_op_3__()) == (__pp_op_6__())
#define __pp_op_lt_3_6__() 0
#define __pp_op_eq_3_6__() 1
#define __pp_op_gt_3_6__() 0
#define __pp_op_lt_6_3__() 0
#define __pp_op_eq_6_3__() 1
#define __pp_op_gt_6_3__() 0
#elif (__pp_op_3__()) > (__pp_op_6__())
#define __pp_op_lt_3_6__() 0
#define __pp_op_eq_3_6__() 0
#define __pp_op_gt_3_6__() 1
#define __pp_op_lt_6_3__() 1
#define __pp_op_eq_6_3__() 0
#define __pp_op_gt_6_3__() 0
#endif

#else

#error "cmp op 3 and op 6 failed. '__pp_op_3__' or '__pp_op_6__' not defined"

#endif
