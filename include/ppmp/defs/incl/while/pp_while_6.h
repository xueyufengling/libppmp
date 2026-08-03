#if !defined(__pp_while_cond_6__)

	#error "file iterate failed. '__pp_while_cond_6__()' not defined"

#elif !defined(__pp_while_incl_file_6__)

	#error "file iterate failed. '__pp_while_incl_file_6__()' not defined"

#else

	#if !defined(__pp_while_i_6__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(6)

	#endif

	#if !defined(__pp_while_break_6__) && (__pp_while_cond_6__())

		#include __pp_while_incl_file_6__()

		#define __pp_expr_while_i__() __pp_while_i__(6) + 1
		#include __store_pp_while_i__(6)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_6.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_6__
		#undef __pp_while_i_6__
		#undef __pp_while_incl_file_6__
		#undef __pp_while_cond_6__

	#endif

#endif
