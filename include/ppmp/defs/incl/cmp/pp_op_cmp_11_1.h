#if defined(__pp_op_11__) && defined(__pp_op_1__)

#undef __pp_op_lt_11_1__
#undef __pp_op_eq_11_1__
#undef __pp_op_gt_11_1__
#undef __pp_op_lt_1_11__
#undef __pp_op_eq_1_11__
#undef __pp_op_gt_1_11__

#if (__pp_op_11__()) < (__pp_op_1__())
#define __pp_op_lt_11_1__() 1
#define __pp_op_eq_11_1__() 0
#define __pp_op_gt_11_1__() 0
#define __pp_op_lt_1_11__() 0
#define __pp_op_eq_1_11__() 0
#define __pp_op_gt_1_11__() 1
#elif (__pp_op_11__()) == (__pp_op_1__())
#define __pp_op_lt_11_1__() 0
#define __pp_op_eq_11_1__() 1
#define __pp_op_gt_11_1__() 0
#define __pp_op_lt_1_11__() 0
#define __pp_op_eq_1_11__() 1
#define __pp_op_gt_1_11__() 0
#elif (__pp_op_11__()) > (__pp_op_1__())
#define __pp_op_lt_11_1__() 0
#define __pp_op_eq_11_1__() 0
#define __pp_op_gt_11_1__() 1
#define __pp_op_lt_1_11__() 1
#define __pp_op_eq_1_11__() 0
#define __pp_op_gt_1_11__() 0
#endif

#else

#error "cmp op 11 and op 1 failed. '__pp_op_11__' or '__pp_op_1__' not defined"

#endif
