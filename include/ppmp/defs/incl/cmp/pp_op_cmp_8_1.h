#if defined(__pp_op_8__) && defined(__pp_op_1__)

#undef __pp_op_lt_8_1__
#undef __pp_op_eq_8_1__
#undef __pp_op_gt_8_1__
#undef __pp_op_lt_1_8__
#undef __pp_op_eq_1_8__
#undef __pp_op_gt_1_8__

#if (__pp_op_8__()) < (__pp_op_1__())
#define __pp_op_lt_8_1__() 1
#define __pp_op_eq_8_1__() 0
#define __pp_op_gt_8_1__() 0
#define __pp_op_lt_1_8__() 0
#define __pp_op_eq_1_8__() 0
#define __pp_op_gt_1_8__() 1
#elif (__pp_op_8__()) == (__pp_op_1__())
#define __pp_op_lt_8_1__() 0
#define __pp_op_eq_8_1__() 1
#define __pp_op_gt_8_1__() 0
#define __pp_op_lt_1_8__() 0
#define __pp_op_eq_1_8__() 1
#define __pp_op_gt_1_8__() 0
#elif (__pp_op_8__()) > (__pp_op_1__())
#define __pp_op_lt_8_1__() 0
#define __pp_op_eq_8_1__() 0
#define __pp_op_gt_8_1__() 1
#define __pp_op_lt_1_8__() 1
#define __pp_op_eq_1_8__() 0
#define __pp_op_gt_1_8__() 0
#endif

#else

#error "cmp op 8 and op 1 failed. '__pp_op_8__' or '__pp_op_1__' not defined"

#endif
