#if !defined(__pp_for_each_list_11__)

	#error "file iterate failed. '__pp_for_each_list_11__()' not defined"

#elif !defined(__pp_for_each_incl_file_11__)

	#error "file iterate failed. '__pp_for_each_incl_file_11__()' not defined"

#else

	#if !defined(__pp_for_each_i_11__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_11__() 0
		#define __pp_for_each_end_11__() __sizeof__(__pp_for_each_list_11__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_11__()
		#include __store_pp_for_each_i__(11)

	#endif

	#if !defined(__pp_for_each_break_11__) && ((__pp_for_each_i__(11)) < (__pp_for_each_end_11__()))

		#define __pp_for_each_item_11__() __at_exp__(__pp_for_each_i__(11), __pp_for_each_list_11__())

		#include __pp_for_each_incl_file_11__()

		#undef __pp_for_each_item_11__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(11) + 1
		#include __store_pp_for_each_i__(11)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_11.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_11__
		#undef __pp_for_each_i_11__
		#undef __pp_for_each_incl_file_11__
		#undef __pp_for_each_end_11__
		#undef __pp_for_each_begin_11__

	#endif

#endif
