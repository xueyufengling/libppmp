#if !defined(__pp_while_cond_5__)

	#error "file iterate failed. '__pp_while_cond_5__()' not defined"

#elif !defined(__pp_while_incl_file_5__)

	#error "file iterate failed. '__pp_while_incl_file_5__()' not defined"

#else

	#if !defined(__pp_while_i_5__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(5)

	#endif

	#if !defined(__pp_while_break_5__) && (__pp_while_cond_5__())

		#include __pp_while_incl_file_5__()

		#define __pp_expr_while_i__() __pp_while_i__(5) + 1
		#include __store_pp_while_i__(5)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_5.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_5__
		#undef __pp_while_i_5__
		#undef __pp_while_incl_file_5__
		#undef __pp_while_cond_5__

	#endif

#endif
