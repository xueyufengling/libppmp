#if !defined(__pp_while_cond_0__)

	#error "file iterate failed. '__pp_while_cond_0__()' not defined"

#elif !defined(__pp_while_incl_file_0__)

	#error "file iterate failed. '__pp_while_incl_file_0__()' not defined"

#else

	#if !defined(__pp_while_i_0__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(0)

	#endif

	#if !defined(__pp_while_break_0__) && (__pp_while_cond_0__())

		#include __pp_while_incl_file_0__()

		#define __pp_expr_while_i__() __pp_while_i__(0) + 1
		#include __store_pp_while_i__(0)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_0.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_0__
		#undef __pp_while_i_0__
		#undef __pp_while_incl_file_0__
		#undef __pp_while_cond_0__

	#endif

#endif
