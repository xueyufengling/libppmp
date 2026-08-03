#if defined(__pp_op_12__) && defined(__pp_op_11__)

#undef __pp_op_lt_12_11__
#undef __pp_op_eq_12_11__
#undef __pp_op_gt_12_11__
#undef __pp_op_lt_11_12__
#undef __pp_op_eq_11_12__
#undef __pp_op_gt_11_12__

#if (__pp_op_12__()) < (__pp_op_11__())
#define __pp_op_lt_12_11__() 1
#define __pp_op_eq_12_11__() 0
#define __pp_op_gt_12_11__() 0
#define __pp_op_lt_11_12__() 0
#define __pp_op_eq_11_12__() 0
#define __pp_op_gt_11_12__() 1
#elif (__pp_op_12__()) == (__pp_op_11__())
#define __pp_op_lt_12_11__() 0
#define __pp_op_eq_12_11__() 1
#define __pp_op_gt_12_11__() 0
#define __pp_op_lt_11_12__() 0
#define __pp_op_eq_11_12__() 1
#define __pp_op_gt_11_12__() 0
#elif (__pp_op_12__()) > (__pp_op_11__())
#define __pp_op_lt_12_11__() 0
#define __pp_op_eq_12_11__() 0
#define __pp_op_gt_12_11__() 1
#define __pp_op_lt_11_12__() 1
#define __pp_op_eq_11_12__() 0
#define __pp_op_gt_11_12__() 0
#endif

#else

#error "cmp 'pp_op' 12 and 11 failed. '__pp_op_12__()' or '__pp_op_11__()' not defined"

#endif
