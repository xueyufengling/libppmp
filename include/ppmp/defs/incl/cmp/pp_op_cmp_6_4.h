#if defined(__pp_op_6__) && defined(__pp_op_4__)

#undef __pp_op_lt_6_4__
#undef __pp_op_eq_6_4__
#undef __pp_op_gt_6_4__
#undef __pp_op_lt_4_6__
#undef __pp_op_eq_4_6__
#undef __pp_op_gt_4_6__

#if (__pp_op_6__()) < (__pp_op_4__())
#define __pp_op_lt_6_4__() 1
#define __pp_op_eq_6_4__() 0
#define __pp_op_gt_6_4__() 0
#define __pp_op_lt_4_6__() 0
#define __pp_op_eq_4_6__() 0
#define __pp_op_gt_4_6__() 1
#elif (__pp_op_6__()) == (__pp_op_4__())
#define __pp_op_lt_6_4__() 0
#define __pp_op_eq_6_4__() 1
#define __pp_op_gt_6_4__() 0
#define __pp_op_lt_4_6__() 0
#define __pp_op_eq_4_6__() 1
#define __pp_op_gt_4_6__() 0
#elif (__pp_op_6__()) > (__pp_op_4__())
#define __pp_op_lt_6_4__() 0
#define __pp_op_eq_6_4__() 0
#define __pp_op_gt_6_4__() 1
#define __pp_op_lt_4_6__() 1
#define __pp_op_eq_4_6__() 0
#define __pp_op_gt_4_6__() 0
#endif

#else

#error "cmp 'pp_op' 6 and 4 failed. '__pp_op_6__()' or '__pp_op_4__()' not defined"

#endif
