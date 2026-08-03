#if defined(__pp_op_4__) && defined(__pp_op_5__)

#undef __pp_op_lt_4_5__
#undef __pp_op_eq_4_5__
#undef __pp_op_gt_4_5__
#undef __pp_op_lt_5_4__
#undef __pp_op_eq_5_4__
#undef __pp_op_gt_5_4__

#if (__pp_op_4__()) < (__pp_op_5__())
#define __pp_op_lt_4_5__() 1
#define __pp_op_eq_4_5__() 0
#define __pp_op_gt_4_5__() 0
#define __pp_op_lt_5_4__() 0
#define __pp_op_eq_5_4__() 0
#define __pp_op_gt_5_4__() 1
#elif (__pp_op_4__()) == (__pp_op_5__())
#define __pp_op_lt_4_5__() 0
#define __pp_op_eq_4_5__() 1
#define __pp_op_gt_4_5__() 0
#define __pp_op_lt_5_4__() 0
#define __pp_op_eq_5_4__() 1
#define __pp_op_gt_5_4__() 0
#elif (__pp_op_4__()) > (__pp_op_5__())
#define __pp_op_lt_4_5__() 0
#define __pp_op_eq_4_5__() 0
#define __pp_op_gt_4_5__() 1
#define __pp_op_lt_5_4__() 1
#define __pp_op_eq_5_4__() 0
#define __pp_op_gt_5_4__() 0
#endif

#else

#error "cmp 'pp_op' 4 and 5 failed. '__pp_op_4__()' or '__pp_op_5__()' not defined"

#endif
