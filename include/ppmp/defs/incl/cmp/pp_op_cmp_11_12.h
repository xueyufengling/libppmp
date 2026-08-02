#if defined(__pp_op_11__) && defined(__pp_op_12__)

#undef __pp_op_lt_11_12__
#undef __pp_op_eq_11_12__
#undef __pp_op_gt_11_12__
#undef __pp_op_lt_12_11__
#undef __pp_op_eq_12_11__
#undef __pp_op_gt_12_11__

#if (__pp_op_11__()) < (__pp_op_12__())
#define __pp_op_lt_11_12__() 1
#define __pp_op_eq_11_12__() 0
#define __pp_op_gt_11_12__() 0
#define __pp_op_lt_12_11__() 0
#define __pp_op_eq_12_11__() 0
#define __pp_op_gt_12_11__() 1
#elif (__pp_op_11__()) == (__pp_op_12__())
#define __pp_op_lt_11_12__() 0
#define __pp_op_eq_11_12__() 1
#define __pp_op_gt_11_12__() 0
#define __pp_op_lt_12_11__() 0
#define __pp_op_eq_12_11__() 1
#define __pp_op_gt_12_11__() 0
#elif (__pp_op_11__()) > (__pp_op_12__())
#define __pp_op_lt_11_12__() 0
#define __pp_op_eq_11_12__() 0
#define __pp_op_gt_11_12__() 1
#define __pp_op_lt_12_11__() 1
#define __pp_op_eq_12_11__() 0
#define __pp_op_gt_12_11__() 0
#endif

#else

#error "cmp op 11 and op 12 failed. '__pp_op_11__' or '__pp_op_12__' not defined"

#endif
