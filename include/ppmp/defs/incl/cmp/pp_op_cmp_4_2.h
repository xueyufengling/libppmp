#if defined(__pp_op_4__) && defined(__pp_op_2__)

#undef __pp_op_lt_4_2__
#undef __pp_op_eq_4_2__
#undef __pp_op_gt_4_2__
#undef __pp_op_lt_2_4__
#undef __pp_op_eq_2_4__
#undef __pp_op_gt_2_4__

#if (__pp_op_4__()) < (__pp_op_2__())
#define __pp_op_lt_4_2__() 1
#define __pp_op_eq_4_2__() 0
#define __pp_op_gt_4_2__() 0
#define __pp_op_lt_2_4__() 0
#define __pp_op_eq_2_4__() 0
#define __pp_op_gt_2_4__() 1
#elif (__pp_op_4__()) == (__pp_op_2__())
#define __pp_op_lt_4_2__() 0
#define __pp_op_eq_4_2__() 1
#define __pp_op_gt_4_2__() 0
#define __pp_op_lt_2_4__() 0
#define __pp_op_eq_2_4__() 1
#define __pp_op_gt_2_4__() 0
#elif (__pp_op_4__()) > (__pp_op_2__())
#define __pp_op_lt_4_2__() 0
#define __pp_op_eq_4_2__() 0
#define __pp_op_gt_4_2__() 1
#define __pp_op_lt_2_4__() 1
#define __pp_op_eq_2_4__() 0
#define __pp_op_gt_2_4__() 0
#endif

#else

#error "cmp 'pp_op' 4 and 2 failed. '__pp_op_4__()' or '__pp_op_2__()' not defined"

#endif
