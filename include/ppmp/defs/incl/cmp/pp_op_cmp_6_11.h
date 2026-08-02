#if defined(__pp_op_6__) && defined(__pp_op_11__)

#undef __pp_op_lt_6_11__
#undef __pp_op_eq_6_11__
#undef __pp_op_gt_6_11__
#undef __pp_op_lt_11_6__
#undef __pp_op_eq_11_6__
#undef __pp_op_gt_11_6__

#if (__pp_op_6__()) < (__pp_op_11__())
#define __pp_op_lt_6_11__() 1
#define __pp_op_eq_6_11__() 0
#define __pp_op_gt_6_11__() 0
#define __pp_op_lt_11_6__() 0
#define __pp_op_eq_11_6__() 0
#define __pp_op_gt_11_6__() 1
#elif (__pp_op_6__()) == (__pp_op_11__())
#define __pp_op_lt_6_11__() 0
#define __pp_op_eq_6_11__() 1
#define __pp_op_gt_6_11__() 0
#define __pp_op_lt_11_6__() 0
#define __pp_op_eq_11_6__() 1
#define __pp_op_gt_11_6__() 0
#elif (__pp_op_6__()) > (__pp_op_11__())
#define __pp_op_lt_6_11__() 0
#define __pp_op_eq_6_11__() 0
#define __pp_op_gt_6_11__() 1
#define __pp_op_lt_11_6__() 1
#define __pp_op_eq_11_6__() 0
#define __pp_op_gt_11_6__() 0
#endif

#else

#error "cmp op 6 and op 11 failed. '__pp_op_6__' or '__pp_op_11__' not defined"

#endif
