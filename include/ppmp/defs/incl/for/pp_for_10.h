#if !defined(__pp_for_begin_10__)

	#error "file iterate failed. '__pp_for_begin_10__()' not defined"

#elif !defined(__pp_for_end_10__)

	#error "file iterate failed. '__pp_for_end_10__()' not defined"

#elif !defined(__pp_for_incl_file_10__)

	#error "file iterate failed. '__pp_for_incl_file_10__()' not defined"

#else

	#if !defined(__pp_for_i_10__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_10__()
		#include __store_pp_for_i__(10)

	#endif

	#if !defined(__pp_for_break_10__) && ((__pp_for_i__(10)) < (__pp_for_end_10__()))

		#include __pp_for_incl_file_10__()

		#define __pp_expr_for_i__() __pp_for_i__(10) + 1
		#include __store_pp_for_i__(10)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_10.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_10__
		#undef __pp_for_i_10__
		#undef __pp_for_incl_file_10__
		#undef __pp_for_end_10__
		#undef __pp_for_begin_10__

	#endif

#endif
