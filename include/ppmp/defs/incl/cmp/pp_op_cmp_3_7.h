#if defined(__pp_op_3__) && defined(__pp_op_7__)

#undef __pp_op_lt_3_7__
#undef __pp_op_eq_3_7__
#undef __pp_op_gt_3_7__
#undef __pp_op_lt_7_3__
#undef __pp_op_eq_7_3__
#undef __pp_op_gt_7_3__

#if (__pp_op_3__()) < (__pp_op_7__())
#define __pp_op_lt_3_7__() 1
#define __pp_op_eq_3_7__() 0
#define __pp_op_gt_3_7__() 0
#define __pp_op_lt_7_3__() 0
#define __pp_op_eq_7_3__() 0
#define __pp_op_gt_7_3__() 1
#elif (__pp_op_3__()) == (__pp_op_7__())
#define __pp_op_lt_3_7__() 0
#define __pp_op_eq_3_7__() 1
#define __pp_op_gt_3_7__() 0
#define __pp_op_lt_7_3__() 0
#define __pp_op_eq_7_3__() 1
#define __pp_op_gt_7_3__() 0
#elif (__pp_op_3__()) > (__pp_op_7__())
#define __pp_op_lt_3_7__() 0
#define __pp_op_eq_3_7__() 0
#define __pp_op_gt_3_7__() 1
#define __pp_op_lt_7_3__() 1
#define __pp_op_eq_7_3__() 0
#define __pp_op_gt_7_3__() 0
#endif

#else

#error "cmp 'pp_op' 3 and 7 failed. '__pp_op_3__()' or '__pp_op_7__()' not defined"

#endif
