#if defined(__pp_op_3__) && defined(__pp_op_2__)

#undef __pp_op_lt_3_2__
#undef __pp_op_eq_3_2__
#undef __pp_op_gt_3_2__
#undef __pp_op_lt_2_3__
#undef __pp_op_eq_2_3__
#undef __pp_op_gt_2_3__

#if (__pp_op_3__()) < (__pp_op_2__())
#define __pp_op_lt_3_2__() 1
#define __pp_op_eq_3_2__() 0
#define __pp_op_gt_3_2__() 0
#define __pp_op_lt_2_3__() 0
#define __pp_op_eq_2_3__() 0
#define __pp_op_gt_2_3__() 1
#elif (__pp_op_3__()) == (__pp_op_2__())
#define __pp_op_lt_3_2__() 0
#define __pp_op_eq_3_2__() 1
#define __pp_op_gt_3_2__() 0
#define __pp_op_lt_2_3__() 0
#define __pp_op_eq_2_3__() 1
#define __pp_op_gt_2_3__() 0
#elif (__pp_op_3__()) > (__pp_op_2__())
#define __pp_op_lt_3_2__() 0
#define __pp_op_eq_3_2__() 0
#define __pp_op_gt_3_2__() 1
#define __pp_op_lt_2_3__() 1
#define __pp_op_eq_2_3__() 0
#define __pp_op_gt_2_3__() 0
#endif

#else

#error "cmp op 3 and op 2 failed. '__pp_op_3__' or '__pp_op_2__' not defined"

#endif
