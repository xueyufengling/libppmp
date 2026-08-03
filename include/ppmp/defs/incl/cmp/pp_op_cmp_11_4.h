#if defined(__pp_op_11__) && defined(__pp_op_4__)

#undef __pp_op_lt_11_4__
#undef __pp_op_eq_11_4__
#undef __pp_op_gt_11_4__
#undef __pp_op_lt_4_11__
#undef __pp_op_eq_4_11__
#undef __pp_op_gt_4_11__

#if (__pp_op_11__()) < (__pp_op_4__())
#define __pp_op_lt_11_4__() 1
#define __pp_op_eq_11_4__() 0
#define __pp_op_gt_11_4__() 0
#define __pp_op_lt_4_11__() 0
#define __pp_op_eq_4_11__() 0
#define __pp_op_gt_4_11__() 1
#elif (__pp_op_11__()) == (__pp_op_4__())
#define __pp_op_lt_11_4__() 0
#define __pp_op_eq_11_4__() 1
#define __pp_op_gt_11_4__() 0
#define __pp_op_lt_4_11__() 0
#define __pp_op_eq_4_11__() 1
#define __pp_op_gt_4_11__() 0
#elif (__pp_op_11__()) > (__pp_op_4__())
#define __pp_op_lt_11_4__() 0
#define __pp_op_eq_11_4__() 0
#define __pp_op_gt_11_4__() 1
#define __pp_op_lt_4_11__() 1
#define __pp_op_eq_4_11__() 0
#define __pp_op_gt_4_11__() 0
#endif

#else

#error "cmp 'pp_op' 11 and 4 failed. '__pp_op_11__()' or '__pp_op_4__()' not defined"

#endif
