#if !defined(__pp_while_cond_10__)

	#error "file iterate failed. '__pp_while_cond_10__()' not defined"

#elif !defined(__pp_while_incl_file_10__)

	#error "file iterate failed. '__pp_while_incl_file_10__()' not defined"

#else

	#if !defined(__pp_while_i_10__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(10)

	#endif

	#if !defined(__pp_while_break_10__) && (__pp_while_cond_10__())

		#include __pp_while_incl_file_10__()

		#define __pp_expr_while_i__() __pp_while_i__(10) + 1
		#include __store_pp_while_i__(10)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_10.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_10__
		#undef __pp_while_i_10__
		#undef __pp_while_incl_file_10__
		#undef __pp_while_cond_10__

	#endif

#endif
