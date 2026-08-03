#if !defined(__pp_while_cond_15__)

	#error "file iterate failed. '__pp_while_cond_15__()' not defined"

#elif !defined(__pp_while_incl_file_15__)

	#error "file iterate failed. '__pp_while_incl_file_15__()' not defined"

#else

	#if !defined(__pp_while_i_15__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(15)

	#endif

	#if !defined(__pp_while_break_15__) && (__pp_while_cond_15__())

		#include __pp_while_incl_file_15__()

		#define __pp_expr_while_i__() __pp_while_i__(15) + 1
		#include __store_pp_while_i__(15)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_15.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_15__
		#undef __pp_while_i_15__
		#undef __pp_while_incl_file_15__
		#undef __pp_while_cond_15__

	#endif

#endif
