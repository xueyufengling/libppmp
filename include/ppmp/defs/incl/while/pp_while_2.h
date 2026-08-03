#if !defined(__pp_while_cond_2__)

	#error "file iterate failed. '__pp_while_cond_2__()' not defined"

#elif !defined(__pp_while_incl_file_2__)

	#error "file iterate failed. '__pp_while_incl_file_2__()' not defined"

#else

	#if !defined(__pp_while_i_2__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(2)

	#endif

	#if !defined(__pp_while_break_2__) && (__pp_while_cond_2__())

		#include __pp_while_incl_file_2__()

		#define __pp_expr_while_i__() __pp_while_i__(2) + 1
		#include __store_pp_while_i__(2)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_2.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_2__
		#undef __pp_while_i_2__
		#undef __pp_while_incl_file_2__
		#undef __pp_while_cond_2__

	#endif

#endif
