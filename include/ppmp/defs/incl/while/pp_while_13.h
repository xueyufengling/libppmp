#if !defined(__pp_while_cond_13__)

	#error "file iterate failed. '__pp_while_cond_13__()' not defined"

#elif !defined(__pp_while_incl_file_13__)

	#error "file iterate failed. '__pp_while_incl_file_13__()' not defined"

#else

	#if !defined(__pp_while_i_13__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(13)

	#endif

	#if !defined(__pp_while_break_13__) && (__pp_while_cond_13__())

		#include __pp_while_incl_file_13__()

		#define __pp_expr_while_i__() __pp_while_i__(13) + 1
		#include __store_pp_while_i__(13)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_13.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_13__
		#undef __pp_while_i_13__
		#undef __pp_while_incl_file_13__
		#undef __pp_while_cond_13__

	#endif

#endif
