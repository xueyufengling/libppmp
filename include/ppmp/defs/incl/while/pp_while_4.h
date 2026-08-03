#if !defined(__pp_while_cond_4__)

	#error "file iterate failed. '__pp_while_cond_4__()' not defined"

#elif !defined(__pp_while_incl_file_4__)

	#error "file iterate failed. '__pp_while_incl_file_4__()' not defined"

#else

	#if !defined(__pp_while_i_4__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(4)

	#endif

	#if !defined(__pp_while_break_4__) && (__pp_while_cond_4__())

		#include __pp_while_incl_file_4__()

		#define __pp_expr_while_i__() __pp_while_i__(4) + 1
		#include __store_pp_while_i__(4)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_4.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_4__
		#undef __pp_while_i_4__
		#undef __pp_while_incl_file_4__
		#undef __pp_while_cond_4__

	#endif

#endif
