#ifndef _PPMP_SEMANTIC
#define _PPMP_SEMANTIC

#include <ppmp/loop.h>

/**
 * @brief 在.cpp编译单元内定义动态初始化代码
 */
#define __dynamic_init__(name, ...)\
	static const int name = []() -> int\
	{\
		__VA_ARGS__\
		return 0;\
	}();

/**
 * @brief 定义枚举，枚举元素为enum_name_xxx，并且具有enum_name_num统计枚举个数。
 * 		  type为空时，使用默认类型
 */
#define __enum_def_op__(i, begin_idx, end_idx, enum_name, e) __cat__(3, enum_name, _, e),

#define __enum_def_names__(expand_id, enum_name, ...)\
	__for_each__(expand_id)(__enum_def_op__, enum_name, __VA_ARGS__) __cat__(2, enum_name, _num)

#define __enum_def__(expand_id, enum_name, type, ...)\
	enum enum_name __if_intl__(__not_intl__(__is_empty__(type)))(: type)\
	{\
		__enum_def_names__(expand_id, enum_name, __VA_ARGS__)\
	};

/**
 * @brief 定义数组，数组元素有宏展开
 */
#define __exp_array_def__(expand_id, elem_type, arr_name, expand_macro, const_params, ...)\
	elem_type arr_name[__sizeof__(__VA_ARGS__)] =\
	{\
		__for_each__(expand_id)(expand_macro, __pack_list__(const_params), __VA_ARGS__)\
	};

#define __array_def__(elem_type, arr_name, ...)\
	elem_type arr_name[__sizeof__(__VA_ARGS__)] =\
	{\
		__VA_ARGS__\
	};

#endif//_PPMP_SEMANTIC
