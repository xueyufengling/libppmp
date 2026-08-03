#if !defined(__pp_for_begin_1__)

	#error "file iterate failed. '__pp_for_begin_1__()' not defined"

#elif !defined(__pp_for_end_1__)

	#error "file iterate failed. '__pp_for_end_1__()' not defined"

#elif !defined(__pp_for_incl_file_1__)

	#error "file iterate failed. '__pp_for_incl_file_1__()' not defined"

#else

	#if !defined(__pp_for_i_1__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_1__()
		#include __store_pp_for_i__(1)

	#endif

	#if !defined(__pp_for_break_1__) && ((__pp_for_i__(1)) < (__pp_for_end_1__()))

		#include __pp_for_incl_file_1__()

		#define __pp_expr_for_i__() __pp_for_i__(1) + 1
		#include __store_pp_for_i__(1)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_1.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_1__
		#undef __pp_for_i_1__
		#undef __pp_for_incl_file_1__
		#undef __pp_for_end_1__
		#undef __pp_for_begin_1__

	#endif

#endif
