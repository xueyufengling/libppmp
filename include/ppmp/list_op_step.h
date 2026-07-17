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
	__if_else_intl__(__not_equal__(i, __dec__(end_idx)))\
	(\
		__append_comma__(__VA_ARGS__),\
		__VA_ARGS__\
	)

#endif//_PPMP_LISTOPSTEP
