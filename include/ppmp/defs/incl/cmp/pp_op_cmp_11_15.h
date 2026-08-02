#if defined(__pp_op_11__) && defined(__pp_op_15__)

#undef __pp_op_lt_11_15__
#undef __pp_op_eq_11_15__
#undef __pp_op_gt_11_15__
#undef __pp_op_lt_15_11__
#undef __pp_op_eq_15_11__
#undef __pp_op_gt_15_11__

#if (__pp_op_11__()) < (__pp_op_15__())
#define __pp_op_lt_11_15__() 1
#define __pp_op_eq_11_15__() 0
#define __pp_op_gt_11_15__() 0
#define __pp_op_lt_15_11__() 0
#define __pp_op_eq_15_11__() 0
#define __pp_op_gt_15_11__() 1
#elif (__pp_op_11__()) == (__pp_op_15__())
#define __pp_op_lt_11_15__() 0
#define __pp_op_eq_11_15__() 1
#define __pp_op_gt_11_15__() 0
#define __pp_op_lt_15_11__() 0
#define __pp_op_eq_15_11__() 1
#define __pp_op_gt_15_11__() 0
#elif (__pp_op_11__()) > (__pp_op_15__())
#define __pp_op_lt_11_15__() 0
#define __pp_op_eq_11_15__() 0
#define __pp_op_gt_11_15__() 1
#define __pp_op_lt_15_11__() 1
#define __pp_op_eq_15_11__() 0
#define __pp_op_gt_15_11__() 0
#endif

#else

#error "cmp op 11 and op 15 failed. '__pp_op_11__' or '__pp_op_15__' not defined"

#endif
