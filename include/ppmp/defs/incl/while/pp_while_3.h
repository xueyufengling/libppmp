#if !defined(__pp_while_cond_3__)

	#error "file iterate failed. '__pp_while_cond_3__()' not defined"

#elif !defined(__pp_while_incl_file_3__)

	#error "file iterate failed. '__pp_while_incl_file_3__()' not defined"

#else

	#if !defined(__pp_while_i_3__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(3)

	#endif

	#if !defined(__pp_while_break_3__) && (__pp_while_cond_3__())

		#include __pp_while_incl_file_3__()

		#define __pp_expr_while_i__() __pp_while_i__(3) + 1
		#include __store_pp_while_i__(3)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_3.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_3__
		#undef __pp_while_i_3__
		#undef __pp_while_incl_file_3__
		#undef __pp_while_cond_3__

	#endif

#endif
