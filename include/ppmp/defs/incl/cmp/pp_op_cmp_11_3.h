#if defined(__pp_op_11__) && defined(__pp_op_3__)

#undef __pp_op_lt_11_3__
#undef __pp_op_eq_11_3__
#undef __pp_op_gt_11_3__
#undef __pp_op_lt_3_11__
#undef __pp_op_eq_3_11__
#undef __pp_op_gt_3_11__

#if (__pp_op_11__()) < (__pp_op_3__())
#define __pp_op_lt_11_3__() 1
#define __pp_op_eq_11_3__() 0
#define __pp_op_gt_11_3__() 0
#define __pp_op_lt_3_11__() 0
#define __pp_op_eq_3_11__() 0
#define __pp_op_gt_3_11__() 1
#elif (__pp_op_11__()) == (__pp_op_3__())
#define __pp_op_lt_11_3__() 0
#define __pp_op_eq_11_3__() 1
#define __pp_op_gt_11_3__() 0
#define __pp_op_lt_3_11__() 0
#define __pp_op_eq_3_11__() 1
#define __pp_op_gt_3_11__() 0
#elif (__pp_op_11__()) > (__pp_op_3__())
#define __pp_op_lt_11_3__() 0
#define __pp_op_eq_11_3__() 0
#define __pp_op_gt_11_3__() 1
#define __pp_op_lt_3_11__() 1
#define __pp_op_eq_3_11__() 0
#define __pp_op_gt_3_11__() 0
#endif

#else

#error "cmp 'pp_op' 11 and 3 failed. '__pp_op_11__()' or '__pp_op_3__()' not defined"

#endif
