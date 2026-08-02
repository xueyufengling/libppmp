#if defined(__pp_op_8__) && defined(__pp_op_4__)

#undef __pp_op_lt_8_4__
#undef __pp_op_eq_8_4__
#undef __pp_op_gt_8_4__
#undef __pp_op_lt_4_8__
#undef __pp_op_eq_4_8__
#undef __pp_op_gt_4_8__

#if (__pp_op_8__()) < (__pp_op_4__())
#define __pp_op_lt_8_4__() 1
#define __pp_op_eq_8_4__() 0
#define __pp_op_gt_8_4__() 0
#define __pp_op_lt_4_8__() 0
#define __pp_op_eq_4_8__() 0
#define __pp_op_gt_4_8__() 1
#elif (__pp_op_8__()) == (__pp_op_4__())
#define __pp_op_lt_8_4__() 0
#define __pp_op_eq_8_4__() 1
#define __pp_op_gt_8_4__() 0
#define __pp_op_lt_4_8__() 0
#define __pp_op_eq_4_8__() 1
#define __pp_op_gt_4_8__() 0
#elif (__pp_op_8__()) > (__pp_op_4__())
#define __pp_op_lt_8_4__() 0
#define __pp_op_eq_8_4__() 0
#define __pp_op_gt_8_4__() 1
#define __pp_op_lt_4_8__() 1
#define __pp_op_eq_4_8__() 0
#define __pp_op_gt_4_8__() 0
#endif

#else

#error "cmp op 8 and op 4 failed. '__pp_op_8__' or '__pp_op_4__' not defined"

#endif
