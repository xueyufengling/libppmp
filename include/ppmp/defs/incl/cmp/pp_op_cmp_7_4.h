#if defined(__pp_op_7__) && defined(__pp_op_4__)

#undef __pp_op_lt_7_4__
#undef __pp_op_eq_7_4__
#undef __pp_op_gt_7_4__
#undef __pp_op_lt_4_7__
#undef __pp_op_eq_4_7__
#undef __pp_op_gt_4_7__

#if (__pp_op_7__()) < (__pp_op_4__())
#define __pp_op_lt_7_4__() 1
#define __pp_op_eq_7_4__() 0
#define __pp_op_gt_7_4__() 0
#define __pp_op_lt_4_7__() 0
#define __pp_op_eq_4_7__() 0
#define __pp_op_gt_4_7__() 1
#elif (__pp_op_7__()) == (__pp_op_4__())
#define __pp_op_lt_7_4__() 0
#define __pp_op_eq_7_4__() 1
#define __pp_op_gt_7_4__() 0
#define __pp_op_lt_4_7__() 0
#define __pp_op_eq_4_7__() 1
#define __pp_op_gt_4_7__() 0
#elif (__pp_op_7__()) > (__pp_op_4__())
#define __pp_op_lt_7_4__() 0
#define __pp_op_eq_7_4__() 0
#define __pp_op_gt_7_4__() 1
#define __pp_op_lt_4_7__() 1
#define __pp_op_eq_4_7__() 0
#define __pp_op_gt_4_7__() 0
#endif

#else

#error "cmp 'pp_op' 7 and 4 failed. '__pp_op_7__()' or '__pp_op_4__()' not defined"

#endif
