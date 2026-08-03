#if defined(__pp_op_13__) && defined(__pp_op_5__)

#undef __pp_op_lt_13_5__
#undef __pp_op_eq_13_5__
#undef __pp_op_gt_13_5__
#undef __pp_op_lt_5_13__
#undef __pp_op_eq_5_13__
#undef __pp_op_gt_5_13__

#if (__pp_op_13__()) < (__pp_op_5__())
#define __pp_op_lt_13_5__() 1
#define __pp_op_eq_13_5__() 0
#define __pp_op_gt_13_5__() 0
#define __pp_op_lt_5_13__() 0
#define __pp_op_eq_5_13__() 0
#define __pp_op_gt_5_13__() 1
#elif (__pp_op_13__()) == (__pp_op_5__())
#define __pp_op_lt_13_5__() 0
#define __pp_op_eq_13_5__() 1
#define __pp_op_gt_13_5__() 0
#define __pp_op_lt_5_13__() 0
#define __pp_op_eq_5_13__() 1
#define __pp_op_gt_5_13__() 0
#elif (__pp_op_13__()) > (__pp_op_5__())
#define __pp_op_lt_13_5__() 0
#define __pp_op_eq_13_5__() 0
#define __pp_op_gt_13_5__() 1
#define __pp_op_lt_5_13__() 1
#define __pp_op_eq_5_13__() 0
#define __pp_op_gt_5_13__() 0
#endif

#else

#error "cmp 'pp_op' 13 and 5 failed. '__pp_op_13__()' or '__pp_op_5__()' not defined"

#endif
