#if defined(__pp_op_14__) && defined(__pp_op_4__)

#undef __pp_op_lt_14_4__
#undef __pp_op_eq_14_4__
#undef __pp_op_gt_14_4__
#undef __pp_op_lt_4_14__
#undef __pp_op_eq_4_14__
#undef __pp_op_gt_4_14__

#if (__pp_op_14__()) < (__pp_op_4__())
#define __pp_op_lt_14_4__() 1
#define __pp_op_eq_14_4__() 0
#define __pp_op_gt_14_4__() 0
#define __pp_op_lt_4_14__() 0
#define __pp_op_eq_4_14__() 0
#define __pp_op_gt_4_14__() 1
#elif (__pp_op_14__()) == (__pp_op_4__())
#define __pp_op_lt_14_4__() 0
#define __pp_op_eq_14_4__() 1
#define __pp_op_gt_14_4__() 0
#define __pp_op_lt_4_14__() 0
#define __pp_op_eq_4_14__() 1
#define __pp_op_gt_4_14__() 0
#elif (__pp_op_14__()) > (__pp_op_4__())
#define __pp_op_lt_14_4__() 0
#define __pp_op_eq_14_4__() 0
#define __pp_op_gt_14_4__() 1
#define __pp_op_lt_4_14__() 1
#define __pp_op_eq_4_14__() 0
#define __pp_op_gt_4_14__() 0
#endif

#else

#error "cmp 'pp_op' 14 and 4 failed. '__pp_op_14__()' or '__pp_op_4__()' not defined"

#endif
