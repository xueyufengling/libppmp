#if !defined(__pp_for_each_list_9__)

	#error "file iterate failed. '__pp_for_each_list_9__()' not defined"

#elif !defined(__pp_for_each_incl_file_9__)

	#error "file iterate failed. '__pp_for_each_incl_file_9__()' not defined"

#else

	#if !defined(__pp_for_each_i_9__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_9__() 0
		#define __pp_for_each_end_9__() __sizeof__(__pp_for_each_list_9__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_9__()
		#include __store_pp_for_each_i__(9)

	#endif

	#if !defined(__pp_for_each_break_9__) && ((__pp_for_each_i__(9)) < (__pp_for_each_end_9__()))

		#define __pp_for_each_elem_9__() __at_exp__(__pp_for_each_i__(9), __pp_for_each_list_9__())

		#include __pp_for_each_incl_file_9__()

		#undef __pp_for_each_elem_9__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(9) + 1
		#include __store_pp_for_each_i__(9)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_9.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_9__
		#undef __pp_for_each_i_9__
		#undef __pp_for_each_incl_file_9__
		#undef __pp_for_each_end_9__
		#undef __pp_for_each_begin_9__

	#endif

#endif
