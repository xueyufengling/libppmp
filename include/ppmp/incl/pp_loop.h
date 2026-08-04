#ifndef _PPMP_INCL_PPLOOP
#define _PPMP_INCL_PPLOOP

#include "../token.h"

/**
 * @brief for循环。使用
 * 		  #define __pp_for_begin_<overload>__() bg
 * 		  定义起始迭代计数器；
 * 		  #define __pp_for_end_<overload>__() ed
 * 		  定义终止迭代计数器；
 * 		  #define __pp_for_incl_file_<overload>__() <file.h>
 * 		  定义循环#include的文件路径。
 * 		  在被导入的file.h中，可以使用__pp_for_i__(overload)访问当前的迭代计数器的数值，该值每次迭代都会自增。
 * 		  在循环内使用
 * 		  #define __pp_for_<overload>_break__
 * 		  可终止循环。
 */
#define __pp_for__(overload) <ppmp/defs/incl/for/__cat__(2,pp_for_, overload).h>

/**
 * @brief while循环。使用
 * 		  #define __pp_while_cond_<overload>__() xxx
 * 		  定义起始迭代继续的条件；
 * 		  #define __pp_while_incl_file_<overload>__() <file.h>
 * 		  定义循环#include的文件路径。
 * 		  在被导入的file.h中，可以使用__pp_while_i__(overload)访问当前的迭代计数器的数值，该值从0开始，每次迭代都会自增。
 * 		  在循环内使用
 * 		  #define __pp_while_<overload>_break__
 * 		  可终止循环。
 */
#define __pp_while__(overload) <ppmp/defs/incl/while/__cat__(2,while_for_, overload).h>

#define __pp_for_each_elem__(overload) __cat__(3, __pp_for_each_elem_, overload, __)()

/**
 * @brief for-each循环。使用
 * 		  #define __pp_for_each_list_<overload>__() e1, e2, e3, ...
 * 		  定义遍历列表；
 * 		  #define __pp_for_each_incl_file_<overload>__() <file.h>
 * 		  定义循环#include的文件路径。
 * 		  在被导入的file.h中，可以使用__pp_for_each_i__(overload)访问当前的迭代计数器的数值，该值每次迭代都会自增。
 * 		  使用__pp_for_each_elem__(overload)访问当前迭代的元素；
 * 		  在循环内使用
 * 		  #define __pp_for_each_<overload>_break__
 * 		  可终止循环。
 */
#define __pp_for_each__(overload) <ppmp/defs/incl/for_each/__cat__(2,pp_for_each_, overload).h>

#endif//_PPMP_INCL_PPLOOP
