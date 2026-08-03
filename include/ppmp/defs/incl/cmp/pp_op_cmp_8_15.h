#if defined(__pp_op_8__) && defined(__pp_op_15__)

#undef __pp_op_lt_8_15__
#undef __pp_op_eq_8_15__
#undef __pp_op_gt_8_15__
#undef __pp_op_lt_15_8__
#undef __pp_op_eq_15_8__
#undef __pp_op_gt_15_8__

#if (__pp_op_8__()) < (__pp_op_15__())
#define __pp_op_lt_8_15__() 1
#define __pp_op_eq_8_15__() 0
#define __pp_op_gt_8_15__() 0
#define __pp_op_lt_15_8__() 0
#define __pp_op_eq_15_8__() 0
#define __pp_op_gt_15_8__() 1
#elif (__pp_op_8__()) == (__pp_op_15__())
#define __pp_op_lt_8_15__() 0
#define __pp_op_eq_8_15__() 1
#define __pp_op_gt_8_15__() 0
#define __pp_op_lt_15_8__() 0
#define __pp_op_eq_15_8__() 1
#define __pp_op_gt_15_8__() 0
#elif (__pp_op_8__()) > (__pp_op_15__())
#define __pp_op_lt_8_15__() 0
#define __pp_op_eq_8_15__() 0
#define __pp_op_gt_8_15__() 1
#define __pp_op_lt_15_8__() 1
#define __pp_op_eq_15_8__() 0
#define __pp_op_gt_15_8__() 0
#endif

#else

#error "cmp 'pp_op' 8 and 15 failed. '__pp_op_8__()' or '__pp_op_15__()' not defined"

#endif
