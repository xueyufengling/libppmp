#if defined(__pp_op_2__) && defined(__pp_op_3__)

#undef __pp_op_lt_2_3__
#undef __pp_op_eq_2_3__
#undef __pp_op_gt_2_3__
#undef __pp_op_lt_3_2__
#undef __pp_op_eq_3_2__
#undef __pp_op_gt_3_2__

#if (__pp_op_2__()) < (__pp_op_3__())
#define __pp_op_lt_2_3__() 1
#define __pp_op_eq_2_3__() 0
#define __pp_op_gt_2_3__() 0
#define __pp_op_lt_3_2__() 0
#define __pp_op_eq_3_2__() 0
#define __pp_op_gt_3_2__() 1
#elif (__pp_op_2__()) == (__pp_op_3__())
#define __pp_op_lt_2_3__() 0
#define __pp_op_eq_2_3__() 1
#define __pp_op_gt_2_3__() 0
#define __pp_op_lt_3_2__() 0
#define __pp_op_eq_3_2__() 1
#define __pp_op_gt_3_2__() 0
#elif (__pp_op_2__()) > (__pp_op_3__())
#define __pp_op_lt_2_3__() 0
#define __pp_op_eq_2_3__() 0
#define __pp_op_gt_2_3__() 1
#define __pp_op_lt_3_2__() 1
#define __pp_op_eq_3_2__() 0
#define __pp_op_gt_3_2__() 0
#endif

#else

#error "cmp op 2 and op 3 failed. '__pp_op_2__' or '__pp_op_3__' not defined"

#endif
