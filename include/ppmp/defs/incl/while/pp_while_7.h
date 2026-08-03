#if !defined(__pp_while_cond_7__)

	#error "file iterate failed. '__pp_while_cond_7__()' not defined"

#elif !defined(__pp_while_incl_file_7__)

	#error "file iterate failed. '__pp_while_incl_file_7__()' not defined"

#else

	#if !defined(__pp_while_i_7__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(7)

	#endif

	#if !defined(__pp_while_break_7__) && (__pp_while_cond_7__())

		#include __pp_while_incl_file_7__()

		#define __pp_expr_while_i__() __pp_while_i__(7) + 1
		#include __store_pp_while_i__(7)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_7.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_7__
		#undef __pp_while_i_7__
		#undef __pp_while_incl_file_7__
		#undef __pp_while_cond_7__

	#endif

#endif
