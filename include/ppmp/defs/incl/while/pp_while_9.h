#if !defined(__pp_while_cond_9__)

	#error "file iterate failed. '__pp_while_cond_9__()' not defined"

#elif !defined(__pp_while_incl_file_9__)

	#error "file iterate failed. '__pp_while_incl_file_9__()' not defined"

#else

	#if !defined(__pp_while_i_9__)

		#include <ppmp/defs/incl/while/store_pp_while_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_while_i__() 0
		#include __store_pp_while_i__(9)

	#endif

	#if !defined(__pp_while_break_9__) && (__pp_while_cond_9__())

		#include __pp_while_incl_file_9__()

		#define __pp_expr_while_i__() __pp_while_i__(9) + 1
		#include __store_pp_while_i__(9)

		#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_9.h>
		#include __pp_incl__()

	#else

		#undef __pp_while_break_9__
		#undef __pp_while_i_9__
		#undef __pp_while_incl_file_9__
		#undef __pp_while_cond_9__

	#endif

#endif
