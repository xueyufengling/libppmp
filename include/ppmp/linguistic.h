#ifndef _PPMP_LINGUISTIC
#define _PPMP_LINGUISTIC

#include "token.h"
#include "list.h"
#include "list_op_step.h"
#include "deferred_loop.h"
#include "base.h"

/**
 * C/C++语法层的处理相关头文件
 */

/**
 * @brief 提示编译期展开循环
 */
#ifdef __GNUC__
#define __loop_unroll__(n) __pragma__(GCC unroll n)
#elif defined(__clang__)
#define __loop_unroll__(n) __pragma__(unroll n)
#else
#define __loop_unroll__(n)
#endif

/**
 * @brief C++标准规定的实体，支持模板名称
 */
#define __entity__(...) __pack__(__VA_ARGS__)

#define __entity_val__(entity) __unpack__(entity)
#define __entity_str__(entity) __unpack_str__(entity)

/**
 * @brief 声明，包含类型和名称
 */
#define __declaration__(type_entity, name_entity) __pack__(type_entity, name_entity)

#define __declaration_val__(declaration) __unpack__(declaration)

#define __declaration_tuple_exp_val__(...) __entity_val__(__at__(0)(__VA_ARGS__)) __entity_val__(__at__(1)(__VA_ARGS__))

#define __declaration_type__(declaration) __at_exp__(0, __declaration_val__(declaration))

#define __declaration_name__(declaration) __at_exp__(1, __declaration_val__(declaration))

#define __declaration_type_val__(declaration) __entity_val__(__declaration_type__(declaration))

#define __declaration_name_val__(declaration) __entity_val__(__declaration_name__(declaration))

/**
 * @brief 将__declaration_of__()组成的列表拆分为type1 name1, type2 name2...形式的列表
 */
#define __declaration_list_op__(i, begin_idx, end_idx, const_params, declaration)\
	__append_to_list_step__(i, end_idx, __declaration_tuple_exp_val__(__declaration_val__(declaration)))
#define __declaration_list__(expand_id, ...)\
	__for_each_deferred__(expand_id)(__declaration_list_op__, , __VA_ARGS__)

/**
 * @brief 将__declaration_of__()组成的列表拆分为type1, type2...形式的列表
 */
#define __declaration_type_list_op__(i, begin_idx, end_idx, const_params, declaration)\
	__append_to_list_step__(i, end_idx, __declaration_type_val__(declaration))
#define __declaration_type_list__(expand_id, ...)\
	__for_each_deferred__(expand_id)(__declaration_type_list_op__, , __VA_ARGS__)

/**
 * @brief 将__declaration_of__()组成的列表拆分为name1, name2...形式的列表
 */
#define __declaration_name_list_op__(i, begin_idx, end_idx, const_params, declaration)\
	__append_to_list_step__(i, end_idx, __declaration_name_val__(declaration))
#define __declaration_name_list__(expand_id, ...)\
	__for_each_deferred__(expand_id)(__declaration_name_list_op__, , __VA_ARGS__)

#endif//_PPMP_LINGUISTIC
