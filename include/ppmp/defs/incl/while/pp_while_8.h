#if !defined(__pp_while_cond_8__)

	#error "file iterate failed. '__pp_while_cond_8__()' not defined"

#elif !defined(__pp_while_incl_file_8__)

	#error "file iterate failed. '__pp_while_incl_file_8__()' not defined"

#else

	#if !defined(__pp_while_i_8__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(8)

	#endif

	#if !defined(__pp_while_break_8__) && (__pp_while_cond_8__())

		#include __pp_while_incl_file_8__()

		#define __pp_expr_while_i__() __pp_while_i__(8) + 1
		#include __store_pp_while_i__(8)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_8.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_8__
		#undef __pp_while_i_8__
		#undef __pp_while_incl_file_8__
		#undef __pp_while_cond_8__

	#endif

#endif
