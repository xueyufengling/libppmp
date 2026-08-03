#if defined(__pp_op_11__) && defined(__pp_op_5__)

#undef __pp_op_lt_11_5__
#undef __pp_op_eq_11_5__
#undef __pp_op_gt_11_5__
#undef __pp_op_lt_5_11__
#undef __pp_op_eq_5_11__
#undef __pp_op_gt_5_11__

#if (__pp_op_11__()) < (__pp_op_5__())
#define __pp_op_lt_11_5__() 1
#define __pp_op_eq_11_5__() 0
#define __pp_op_gt_11_5__() 0
#define __pp_op_lt_5_11__() 0
#define __pp_op_eq_5_11__() 0
#define __pp_op_gt_5_11__() 1
#elif (__pp_op_11__()) == (__pp_op_5__())
#define __pp_op_lt_11_5__() 0
#define __pp_op_eq_11_5__() 1
#define __pp_op_gt_11_5__() 0
#define __pp_op_lt_5_11__() 0
#define __pp_op_eq_5_11__() 1
#define __pp_op_gt_5_11__() 0
#elif (__pp_op_11__()) > (__pp_op_5__())
#define __pp_op_lt_11_5__() 0
#define __pp_op_eq_11_5__() 0
#define __pp_op_gt_11_5__() 1
#define __pp_op_lt_5_11__() 1
#define __pp_op_eq_5_11__() 0
#define __pp_op_gt_5_11__() 0
#endif

#else

#error "cmp 'pp_op' 11 and 5 failed. '__pp_op_11__()' or '__pp_op_5__()' not defined"

#endif
