#if defined(__pp_op_13__) && defined(__pp_op_11__)

#undef __pp_op_lt_13_11__
#undef __pp_op_eq_13_11__
#undef __pp_op_gt_13_11__
#undef __pp_op_lt_11_13__
#undef __pp_op_eq_11_13__
#undef __pp_op_gt_11_13__

#if (__pp_op_13__()) < (__pp_op_11__())
#define __pp_op_lt_13_11__() 1
#define __pp_op_eq_13_11__() 0
#define __pp_op_gt_13_11__() 0
#define __pp_op_lt_11_13__() 0
#define __pp_op_eq_11_13__() 0
#define __pp_op_gt_11_13__() 1
#elif (__pp_op_13__()) == (__pp_op_11__())
#define __pp_op_lt_13_11__() 0
#define __pp_op_eq_13_11__() 1
#define __pp_op_gt_13_11__() 0
#define __pp_op_lt_11_13__() 0
#define __pp_op_eq_11_13__() 1
#define __pp_op_gt_11_13__() 0
#elif (__pp_op_13__()) > (__pp_op_11__())
#define __pp_op_lt_13_11__() 0
#define __pp_op_eq_13_11__() 0
#define __pp_op_gt_13_11__() 1
#define __pp_op_lt_11_13__() 1
#define __pp_op_eq_11_13__() 0
#define __pp_op_gt_11_13__() 0
#endif

#else

#error "cmp 'pp_op' 13 and 11 failed. '__pp_op_13__()' or '__pp_op_11__()' not defined"

#endif
