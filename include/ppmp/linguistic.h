#ifndef _PPMP_LINGUISTIC
#define _PPMP_LINGUISTIC

#include "list_op_step.h"
#include "list.h"
#include "loop.h"
#include "token.h"
#include "str.h"

/**
 * C/C++语法层的处理相关头文件
 */

/**
 * @brief C++标准规定的实体，支持模板名称
 */
#define __entity__(...) __pack__(__VA_ARGS__)

#define __entity_val__(entity) __unpack__(entity)
#define __entity_str__(entity) __unpack_str__(entity)

/**
 * @brief 声明，包含类型和名称
 * 		  声明列表形式为__declaration__(__entity__(type1), __entity__(name1)), __declaration__(__entity__(type2), __entity__(name2))
 */
#define __declaration__(type_entity, name_entity) __pack__(type_entity, name_entity)

#define __declaration_val__(declaration) __unpack__(declaration)

#define __declaration_tuple_exp_val__(...) __entity_val__(__at__(0)(__VA_ARGS__)) __entity_val__(__at__(1)(__VA_ARGS__))

#define __declaration_type__(declaration) __at_exp__(0, __declaration_val__(declaration))

#define __declaration_name__(declaration) __at_exp__(1, __declaration_val__(declaration))

#define __declaration_type_val__(declaration) __entity_val__(__declaration_type__(declaration))

#define __declaration_name_val__(declaration) __entity_val__(__declaration_name__(declaration))

/**
 * @brief 将__declaration__()组成的列表拆分为type1 name1, type2 name2...形式的列表
 */
#define __declaration_list_op__(i, begin_idx, end_idx, const_params, declaration)\
	__append_to_list_step__(i, end_idx, __declaration_tuple_exp_val__(__declaration_val__(declaration)))
#define __declaration_list__(expand_id, ...)\
	__for_each__(expand_id)(__declaration_list_op__, , __VA_ARGS__)

/**
 * @brief 将__declaration__()组成的列表拆分为type1, type2...形式的列表
 */
#define __declaration_type_list_op__(i, begin_idx, end_idx, const_params, declaration)\
	__append_to_list_step__(i, end_idx, __declaration_type_val__(declaration))
#define __declaration_type_list__(expand_id, ...)\
	__for_each__(expand_id)(__declaration_type_list_op__, , __VA_ARGS__)

/**
 * @brief 将__declaration__()组成的列表拆分为name1, name2...形式的列表
 */
#define __declaration_name_list_op__(i, begin_idx, end_idx, const_params, declaration)\
	__append_to_list_step__(i, end_idx, __declaration_name_val__(declaration))
#define __declaration_name_list__(expand_id, ...)\
	__for_each__(expand_id)(__declaration_name_list_op__, , __VA_ARGS__)

/**
 * @brief 从操作数名称列表、算子列表来构建表达式
 * 		  例如：
 * 		  operators_list传入(, + ,)且参数列表为a, b
 * 		  展开结果为a + b
 * 		  operators_list传入(, ? , :,)且参数列表为a, b, c
 * 		  展开结果为a ? b : c
 */
#define __construct_expr_op__(i, begin_idx, end_idx, operators_list, operand)\
	__at_exp__(i, __unpack__(operators_list)) operand
#define __construct_expr__(expand_id, operators_list, ...)\
	__for_each__(expand_id)(__construct_expr_op__, operators_list, __VA_ARGS__) __at_exp__(__sizeof__(__VA_ARGS__), __unpack__(operators_list))

/**
 * @brief 将类型列表...组成的列表拆分为type0 prefix0, type1 prefix1...形式的列表
 */
#define __construct_declaration_list_op__(i, begin_idx, end_idx, prefix, type)\
	__append_to_list_step__(i, end_idx, type __cat_2__(prefix, i))
#define __construct_declaration_list__(expand_id, prefix, ...)\
	__for_each__(expand_id)(__construct_declaration_list_op__, prefix, __VA_ARGS__)

/**
 * @brief 生成prefix(begin_idx), prefix(begin_idx+1), ..., prefix(end_idx-1)形式的列表
 */
#define __construct_name_list_op__(i, begin_idx, end_idx, prefix, ...)\
	__append_to_list_step__(i, end_idx, __cat_2__(prefix, i))
#define __construct_name_list__(expand_id, begin_idx, end_idx, prefix)\
	__for__(expand_id)(begin_idx, end_idx, __construct_name_list_op__, prefix,)

#endif//_PPMP_LINGUISTIC
