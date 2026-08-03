#if defined(__pp_op_3__) && defined(__pp_op_16__)

#undef __pp_op_lt_3_16__
#undef __pp_op_eq_3_16__
#undef __pp_op_gt_3_16__
#undef __pp_op_lt_16_3__
#undef __pp_op_eq_16_3__
#undef __pp_op_gt_16_3__

#if (__pp_op_3__()) < (__pp_op_16__())
#define __pp_op_lt_3_16__() 1
#define __pp_op_eq_3_16__() 0
#define __pp_op_gt_3_16__() 0
#define __pp_op_lt_16_3__() 0
#define __pp_op_eq_16_3__() 0
#define __pp_op_gt_16_3__() 1
#elif (__pp_op_3__()) == (__pp_op_16__())
#define __pp_op_lt_3_16__() 0
#define __pp_op_eq_3_16__() 1
#define __pp_op_gt_3_16__() 0
#define __pp_op_lt_16_3__() 0
#define __pp_op_eq_16_3__() 1
#define __pp_op_gt_16_3__() 0
#elif (__pp_op_3__()) > (__pp_op_16__())
#define __pp_op_lt_3_16__() 0
#define __pp_op_eq_3_16__() 0
#define __pp_op_gt_3_16__() 1
#define __pp_op_lt_16_3__() 1
#define __pp_op_eq_16_3__() 0
#define __pp_op_gt_16_3__() 0
#endif

#else

#error "cmp 'pp_op' 3 and 16 failed. '__pp_op_3__()' or '__pp_op_16__()' not defined"

#endif
