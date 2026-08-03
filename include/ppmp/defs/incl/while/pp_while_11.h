#if !defined(__pp_while_cond_11__)

	#error "file iterate failed. '__pp_while_cond_11__()' not defined"

#elif !defined(__pp_while_incl_file_11__)

	#error "file iterate failed. '__pp_while_incl_file_11__()' not defined"

#else

	#if !defined(__pp_while_i_11__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(11)

	#endif

	#if !defined(__pp_while_break_11__) && (__pp_while_cond_11__())

		#include __pp_while_incl_file_11__()

		#define __pp_expr_while_i__() __pp_while_i__(11) + 1
		#include __store_pp_while_i__(11)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_11.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_11__
		#undef __pp_while_i_11__
		#undef __pp_while_incl_file_11__
		#undef __pp_while_cond_11__

	#endif

#endif
