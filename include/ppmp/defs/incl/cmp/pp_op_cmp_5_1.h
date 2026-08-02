#if defined(__pp_op_5__) && defined(__pp_op_1__)

#undef __pp_op_lt_5_1__
#undef __pp_op_eq_5_1__
#undef __pp_op_gt_5_1__
#undef __pp_op_lt_1_5__
#undef __pp_op_eq_1_5__
#undef __pp_op_gt_1_5__

#if (__pp_op_5__()) < (__pp_op_1__())
#define __pp_op_lt_5_1__() 1
#define __pp_op_eq_5_1__() 0
#define __pp_op_gt_5_1__() 0
#define __pp_op_lt_1_5__() 0
#define __pp_op_eq_1_5__() 0
#define __pp_op_gt_1_5__() 1
#elif (__pp_op_5__()) == (__pp_op_1__())
#define __pp_op_lt_5_1__() 0
#define __pp_op_eq_5_1__() 1
#define __pp_op_gt_5_1__() 0
#define __pp_op_lt_1_5__() 0
#define __pp_op_eq_1_5__() 1
#define __pp_op_gt_1_5__() 0
#elif (__pp_op_5__()) > (__pp_op_1__())
#define __pp_op_lt_5_1__() 0
#define __pp_op_eq_5_1__() 0
#define __pp_op_gt_5_1__() 1
#define __pp_op_lt_1_5__() 1
#define __pp_op_eq_1_5__() 0
#define __pp_op_gt_1_5__() 0
#endif

#else

#error "cmp op 5 and op 1 failed. '__pp_op_5__' or '__pp_op_1__' not defined"

#endif
