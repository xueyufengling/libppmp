#if !defined(__pp_for_begin_13__)

	#error "file iterate failed. '__pp_for_begin_13__()' not defined"

#elif !defined(__pp_for_end_13__)

	#error "file iterate failed. '__pp_for_end_13__()' not defined"

#elif !defined(__pp_for_incl_file_13__)

	#error "file iterate failed. '__pp_for_incl_file_13__()' not defined"

#else

	#if !defined(__pp_for_i_13__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_13__()
		#include __store_pp_for_i__(13)

	#endif

	#if !defined(__pp_for_break_13__) && ((__pp_for_i__(13)) < (__pp_for_end_13__()))

		#include __pp_for_incl_file_13__()

		#define __pp_expr_for_i__() __pp_for_i__(13) + 1
		#include __store_pp_for_i__(13)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_13.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_13__
		#undef __pp_for_i_13__
		#undef __pp_for_incl_file_13__
		#undef __pp_for_end_13__
		#undef __pp_for_begin_13__

	#endif

#endif
