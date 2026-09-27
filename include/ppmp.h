#ifndef _PPMP
#define _PPMP

/**
 * 提供了预处理器元编程的基本宏。
 * 定义常量均使用带参数的宏，这样做的理由是：
 * 1. 能尽可能减少命名冲突（主要指的是C/C++的变量名、类名等）导致文本无意间被替换，尤其是使用了别人的库而别人定义了这种宏时，不知情的情况下这种替换往往很难查出。
 * 2. 一些技巧需要对宏进行延迟展开，而带参数的宏的展开必须要宏名和()两部分相邻才能展开，利用这个性质可以实现延迟展开。
 *
 * 使用宏时，如果出现错误，往往最后一个直接报错的地方不是问题根源，而是在展开链的某个环节产生了意料之外的结果（例如递归重入导致未展开），而错误的展开结果的结构作为参数在外层宏展开时错误继续放大，直到因语法报错终止展开。
 * 例如while递归的结束条件展开错误，就可能导致迭代次数远超预期，将在正确展开次数之后很远的地方才因语法错误而报错，乃至一直展开到最大迭代深度。
 */

#include "ppmp/token.h"
#include "ppmp/scan.h"
#include "ppmp/str.h"
#include "ppmp/cat.h"
#include "ppmp/arith.h"
#include "ppmp/bool.h"
#include "ppmp/if.h"
#include "ppmp/list.h"
#include "ppmp/loop.h"
#include "ppmp/src_loc.h"

#endif//_PPMP
