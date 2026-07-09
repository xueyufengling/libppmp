#ifndef _PPMP_TOKENS
#define _PPMP_TOKENS

/**
 * @brief 字符串化
 */
#define __str_intl__(...) #__VA_ARGS__
#define __str__(...) __str_intl__(__VA_ARGS__)

/**
 * @brief 空参数宏，用于分隔别名（定义为宏名的参数宏）和展开别名使用的括号
 */
#define __empty__(...)

#define __true__(...) 1
#define __false__(...) 0

/**
 * 用于表达式或目标宏展开为空的检测
 * 用法： 如果写__comma__ xxx ()仅当xxx为空时，才能展开为','，即当xxx为空时，参数的数量会+1，此时可通过参数移位得知是否为空
 */
#define __comma__(...) ,

#define __prepend_comma__(...) , __VA_ARGS__

#define __append_comma__(...) __VA_ARGS__,

#define __lparen__(...) (
#define __rparen__(...) )
#define __token_pasting_op__ # ## #

#endif//_PPMP_TOKENS
