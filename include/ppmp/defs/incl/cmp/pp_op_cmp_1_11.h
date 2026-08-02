#if defined(__pp_op_1__) && defined(__pp_op_11__)

#undef __pp_op_lt_1_11__
#undef __pp_op_eq_1_11__
#undef __pp_op_gt_1_11__
#undef __pp_op_lt_11_1__
#undef __pp_op_eq_11_1__
#undef __pp_op_gt_11_1__

#if (__pp_op_1__()) < (__pp_op_11__())
#define __pp_op_lt_1_11__() 1
#define __pp_op_eq_1_11__() 0
#define __pp_op_gt_1_11__() 0
#define __pp_op_lt_11_1__() 0
#define __pp_op_eq_11_1__() 0
#define __pp_op_gt_11_1__() 1
#elif (__pp_op_1__()) == (__pp_op_11__())
#define __pp_op_lt_1_11__() 0
#define __pp_op_eq_1_11__() 1
#define __pp_op_gt_1_11__() 0
#define __pp_op_lt_11_1__() 0
#define __pp_op_eq_11_1__() 1
#define __pp_op_gt_11_1__() 0
#elif (__pp_op_1__()) > (__pp_op_11__())
#define __pp_op_lt_1_11__() 0
#define __pp_op_eq_1_11__() 0
#define __pp_op_gt_1_11__() 1
#define __pp_op_lt_11_1__() 1
#define __pp_op_eq_11_1__() 0
#define __pp_op_gt_11_1__() 0
#endif

#else

#error "cmp op 1 and op 11 failed. '__pp_op_1__' or '__pp_op_11__' not defined"

#endif
