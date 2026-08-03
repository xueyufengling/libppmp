#if !defined(__pp_for_begin_11__)

	#error "file iterate failed. '__pp_for_begin_11__()' not defined"

#elif !defined(__pp_for_end_11__)

	#error "file iterate failed. '__pp_for_end_11__()' not defined"

#elif !defined(__pp_for_incl_file_11__)

	#error "file iterate failed. '__pp_for_incl_file_11__()' not defined"

#else

	#if !defined(__pp_for_i_11__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_11__()
		#include __store_pp_for_i__(11)

	#endif

	#if !defined(__pp_for_break_11__) && ((__pp_for_i__(11)) < (__pp_for_end_11__()))

		#include __pp_for_incl_file_11__()

		#define __pp_expr_for_i__() __pp_for_i__(11) + 1
		#include __store_pp_for_i__(11)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_11.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_11__
		#undef __pp_for_i_11__
		#undef __pp_for_incl_file_11__
		#undef __pp_for_end_11__
		#undef __pp_for_begin_11__

	#endif

#endif
