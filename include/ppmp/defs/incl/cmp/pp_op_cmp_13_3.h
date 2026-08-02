#if defined(__pp_op_13__) && defined(__pp_op_3__)

#undef __pp_op_lt_13_3__
#undef __pp_op_eq_13_3__
#undef __pp_op_gt_13_3__
#undef __pp_op_lt_3_13__
#undef __pp_op_eq_3_13__
#undef __pp_op_gt_3_13__

#if (__pp_op_13__()) < (__pp_op_3__())
#define __pp_op_lt_13_3__() 1
#define __pp_op_eq_13_3__() 0
#define __pp_op_gt_13_3__() 0
#define __pp_op_lt_3_13__() 0
#define __pp_op_eq_3_13__() 0
#define __pp_op_gt_3_13__() 1
#elif (__pp_op_13__()) == (__pp_op_3__())
#define __pp_op_lt_13_3__() 0
#define __pp_op_eq_13_3__() 1
#define __pp_op_gt_13_3__() 0
#define __pp_op_lt_3_13__() 0
#define __pp_op_eq_3_13__() 1
#define __pp_op_gt_3_13__() 0
#elif (__pp_op_13__()) > (__pp_op_3__())
#define __pp_op_lt_13_3__() 0
#define __pp_op_eq_13_3__() 0
#define __pp_op_gt_13_3__() 1
#define __pp_op_lt_3_13__() 1
#define __pp_op_eq_3_13__() 0
#define __pp_op_gt_3_13__() 0
#endif

#else

#error "cmp op 13 and op 3 failed. '__pp_op_13__' or '__pp_op_3__' not defined"

#endif
