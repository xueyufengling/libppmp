#if defined(__pp_op_13__) && defined(__pp_op_1__)

#undef __pp_op_lt_13_1__
#undef __pp_op_eq_13_1__
#undef __pp_op_gt_13_1__
#undef __pp_op_lt_1_13__
#undef __pp_op_eq_1_13__
#undef __pp_op_gt_1_13__

#if (__pp_op_13__()) < (__pp_op_1__())
#define __pp_op_lt_13_1__() 1
#define __pp_op_eq_13_1__() 0
#define __pp_op_gt_13_1__() 0
#define __pp_op_lt_1_13__() 0
#define __pp_op_eq_1_13__() 0
#define __pp_op_gt_1_13__() 1
#elif (__pp_op_13__()) == (__pp_op_1__())
#define __pp_op_lt_13_1__() 0
#define __pp_op_eq_13_1__() 1
#define __pp_op_gt_13_1__() 0
#define __pp_op_lt_1_13__() 0
#define __pp_op_eq_1_13__() 1
#define __pp_op_gt_1_13__() 0
#elif (__pp_op_13__()) > (__pp_op_1__())
#define __pp_op_lt_13_1__() 0
#define __pp_op_eq_13_1__() 0
#define __pp_op_gt_13_1__() 1
#define __pp_op_lt_1_13__() 1
#define __pp_op_eq_1_13__() 0
#define __pp_op_gt_1_13__() 0
#endif

#else

#error "cmp op 13 and op 1 failed. '__pp_op_13__' or '__pp_op_1__' not defined"

#endif
