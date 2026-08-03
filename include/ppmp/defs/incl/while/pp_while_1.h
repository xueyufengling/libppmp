#if !defined(__pp_while_cond_1__)

	#error "file iterate failed. '__pp_while_cond_1__()' not defined"

#elif !defined(__pp_while_incl_file_1__)

	#error "file iterate failed. '__pp_while_incl_file_1__()' not defined"

#else

	#if !defined(__pp_while_i_1__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(1)

	#endif

	#if !defined(__pp_while_break_1__) && (__pp_while_cond_1__())

		#include __pp_while_incl_file_1__()

		#define __pp_expr_while_i__() __pp_while_i__(1) + 1
		#include __store_pp_while_i__(1)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_1.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_1__
		#undef __pp_while_i_1__
		#undef __pp_while_incl_file_1__
		#undef __pp_while_cond_1__

	#endif

#endif
