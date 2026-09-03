#ifndef _PPMP_STR
#define _PPMP_STR

/**
 * @brief 不展开传入参数，直接将传入token字符串化
 */
#define __str_noexp__(...) #__VA_ARGS__

/**
 * @brief 先展开传入参数，再字符串化
 */
#define __str__(...) __str_noexp__(__VA_ARGS__)

#define __unpack_str__(pack) __str__ pack
#define __unpack_str_noexp__(pack) __str_noexp__ pack

#endif//_PPMP_STR
