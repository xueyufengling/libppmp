#ifndef _PPMP_LISTOPSTEP
#define _PPMP_LISTOPSTEP

#include "base.h"
#include "arith.h"
#include "equal.h"

/**
 * @brief 将元素添加到列表的步骤
 * 		  如果当前是最后一个元素，则末尾无','；否则添加后置','
 */
#define __append_to_list_step__(i, end_idx, ...)\
	__if_else_intl__(__not_equal__(i, 0))\
	(\
		__prepend_comma__(__VA_ARGS__),\
		__VA_ARGS__\
	)

/**
 * @brief 如果一个列表以多余的一个','结尾，则去除那个逗号。
 * 		  用于列表构造，每次添加元素时都以逗号结尾，全部添加完毕后使用此宏移除末尾多余的','
 */
#define __strip_trailing_1_comma_intl__(last_idx, ...)\
	__if_else_intl__(__is_empty__(__at__(last_idx)(__VA_ARGS__)))\
	(\
		__list_front__(last_idx)(__VA_ARGS__),\
		__VA_ARGS__\
	)
#define __strip_trailing_1_comma__(...)\
	__strip_trailing_1_comma_intl__(__list_last_idx__(__VA_ARGS__), __VA_ARGS__)

#endif//_PPMP_LISTOPSTEP
