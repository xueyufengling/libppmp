#if !defined(__pp_while_cond_12__)

	#error "file iterate failed. '__pp_while_cond_12__()' not defined"

#elif !defined(__pp_while_incl_file_12__)

	#error "file iterate failed. '__pp_while_incl_file_12__()' not defined"

#else

	#if !defined(__pp_while_i_12__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(12)

	#endif

	#if !defined(__pp_while_break_12__) && (__pp_while_cond_12__())

		#include __pp_while_incl_file_12__()

		#define __pp_expr_while_i__() __pp_while_i__(12) + 1
		#include __store_pp_while_i__(12)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_12.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_12__
		#undef __pp_while_i_12__
		#undef __pp_while_incl_file_12__
		#undef __pp_while_cond_12__

	#endif

#endif
