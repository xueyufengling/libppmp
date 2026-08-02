#if defined(__pp_op_2__) && defined(__pp_op_1__)

#undef __pp_op_lt_2_1__
#undef __pp_op_eq_2_1__
#undef __pp_op_gt_2_1__
#undef __pp_op_lt_1_2__
#undef __pp_op_eq_1_2__
#undef __pp_op_gt_1_2__

#if (__pp_op_2__()) < (__pp_op_1__())
#define __pp_op_lt_2_1__() 1
#define __pp_op_eq_2_1__() 0
#define __pp_op_gt_2_1__() 0
#define __pp_op_lt_1_2__() 0
#define __pp_op_eq_1_2__() 0
#define __pp_op_gt_1_2__() 1
#elif (__pp_op_2__()) == (__pp_op_1__())
#define __pp_op_lt_2_1__() 0
#define __pp_op_eq_2_1__() 1
#define __pp_op_gt_2_1__() 0
#define __pp_op_lt_1_2__() 0
#define __pp_op_eq_1_2__() 1
#define __pp_op_gt_1_2__() 0
#elif (__pp_op_2__()) > (__pp_op_1__())
#define __pp_op_lt_2_1__() 0
#define __pp_op_eq_2_1__() 0
#define __pp_op_gt_2_1__() 1
#define __pp_op_lt_1_2__() 1
#define __pp_op_eq_1_2__() 0
#define __pp_op_gt_1_2__() 0
#endif

#else

#error "cmp op 2 and op 1 failed. '__pp_op_2__' or '__pp_op_1__' not defined"

#endif
