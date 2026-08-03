#if defined(__pp_op_11__) && defined(__pp_op_6__)

#undef __pp_op_lt_11_6__
#undef __pp_op_eq_11_6__
#undef __pp_op_gt_11_6__
#undef __pp_op_lt_6_11__
#undef __pp_op_eq_6_11__
#undef __pp_op_gt_6_11__

#if (__pp_op_11__()) < (__pp_op_6__())
#define __pp_op_lt_11_6__() 1
#define __pp_op_eq_11_6__() 0
#define __pp_op_gt_11_6__() 0
#define __pp_op_lt_6_11__() 0
#define __pp_op_eq_6_11__() 0
#define __pp_op_gt_6_11__() 1
#elif (__pp_op_11__()) == (__pp_op_6__())
#define __pp_op_lt_11_6__() 0
#define __pp_op_eq_11_6__() 1
#define __pp_op_gt_11_6__() 0
#define __pp_op_lt_6_11__() 0
#define __pp_op_eq_6_11__() 1
#define __pp_op_gt_6_11__() 0
#elif (__pp_op_11__()) > (__pp_op_6__())
#define __pp_op_lt_11_6__() 0
#define __pp_op_eq_11_6__() 0
#define __pp_op_gt_11_6__() 1
#define __pp_op_lt_6_11__() 1
#define __pp_op_eq_6_11__() 0
#define __pp_op_gt_6_11__() 0
#endif

#else

#error "cmp 'pp_op' 11 and 6 failed. '__pp_op_11__()' or '__pp_op_6__()' not defined"

#endif
