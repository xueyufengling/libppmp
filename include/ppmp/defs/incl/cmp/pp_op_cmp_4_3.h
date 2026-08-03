#if defined(__pp_op_4__) && defined(__pp_op_3__)

#undef __pp_op_lt_4_3__
#undef __pp_op_eq_4_3__
#undef __pp_op_gt_4_3__
#undef __pp_op_lt_3_4__
#undef __pp_op_eq_3_4__
#undef __pp_op_gt_3_4__

#if (__pp_op_4__()) < (__pp_op_3__())
#define __pp_op_lt_4_3__() 1
#define __pp_op_eq_4_3__() 0
#define __pp_op_gt_4_3__() 0
#define __pp_op_lt_3_4__() 0
#define __pp_op_eq_3_4__() 0
#define __pp_op_gt_3_4__() 1
#elif (__pp_op_4__()) == (__pp_op_3__())
#define __pp_op_lt_4_3__() 0
#define __pp_op_eq_4_3__() 1
#define __pp_op_gt_4_3__() 0
#define __pp_op_lt_3_4__() 0
#define __pp_op_eq_3_4__() 1
#define __pp_op_gt_3_4__() 0
#elif (__pp_op_4__()) > (__pp_op_3__())
#define __pp_op_lt_4_3__() 0
#define __pp_op_eq_4_3__() 0
#define __pp_op_gt_4_3__() 1
#define __pp_op_lt_3_4__() 1
#define __pp_op_eq_3_4__() 0
#define __pp_op_gt_3_4__() 0
#endif

#else

#error "cmp 'pp_op' 4 and 3 failed. '__pp_op_4__()' or '__pp_op_3__()' not defined"

#endif
