#ifndef _PPMP_INCL_PPINCL
#define _PPMP_INCL_PPINCL

/**
 * @brief 间接#include头文件，用于#include重入
 * 		  使用
 * 		  #define __pp_incl_file__() <file>
 * 		  定义需要引入的头文件，并使用
 * 		  #include __pp_incl__()
 * 		  来导入头文件，导入后会直接undef掉文件名宏
 */
#define __pp_incl__() <ppmp/incl/intl/pp_incl_intl.h>

#endif//_PPMP_INCL_PPINCL
