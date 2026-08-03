#if defined(__pp_op_5__) && defined(__pp_op_7__)

#undef __pp_op_lt_5_7__
#undef __pp_op_eq_5_7__
#undef __pp_op_gt_5_7__
#undef __pp_op_lt_7_5__
#undef __pp_op_eq_7_5__
#undef __pp_op_gt_7_5__

#if (__pp_op_5__()) < (__pp_op_7__())
#define __pp_op_lt_5_7__() 1
#define __pp_op_eq_5_7__() 0
#define __pp_op_gt_5_7__() 0
#define __pp_op_lt_7_5__() 0
#define __pp_op_eq_7_5__() 0
#define __pp_op_gt_7_5__() 1
#elif (__pp_op_5__()) == (__pp_op_7__())
#define __pp_op_lt_5_7__() 0
#define __pp_op_eq_5_7__() 1
#define __pp_op_gt_5_7__() 0
#define __pp_op_lt_7_5__() 0
#define __pp_op_eq_7_5__() 1
#define __pp_op_gt_7_5__() 0
#elif (__pp_op_5__()) > (__pp_op_7__())
#define __pp_op_lt_5_7__() 0
#define __pp_op_eq_5_7__() 0
#define __pp_op_gt_5_7__() 1
#define __pp_op_lt_7_5__() 1
#define __pp_op_eq_7_5__() 0
#define __pp_op_gt_7_5__() 0
#endif

#else

#error "cmp 'pp_op' 5 and 7 failed. '__pp_op_5__()' or '__pp_op_7__()' not defined"

#endif
