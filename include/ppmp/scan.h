#ifndef _PPMP_SCAN
#define _PPMP_SCAN

#include "defs/defer.h"
#include "defs/scan.h"

#include "intl/cat.h"

/**
 * @brief 对传入的宏进行扫描展开
 */
#define __scan__(...) __VA_ARGS__

/**
 * @brief 延迟展开宏，需要额外n_pass次扫描才能展开。
 * 		  用例：
 * 		  #define M(x) x
 * 		  需要使用__scan__(__scan__(__defer__(2)(M)(0)))才能将其展开为0.
 * 		  扫描展开的步骤，考虑
 * 		  #define X() x
 * 		  #define Y() X() y X()
 * 		  那么展开Y()得到的结果是x y x，这是由于X() y X()是在同一次展开中形成的，因而两处X()都隶属于同一个token流（即Y()展开的流），同一个token流中X与()在未展开时连续相邻时就能继续展开。
 * 		  但如果是
 * 		  #define X() x
 * 		  #define Y() X() y X __empty__()()
 * 		  即在X与()中插入空宏，导致它们不连续相邻，那么展开Y()得到的结果是x y X()。
 * 		  原因：扫描到X时后续无(，故不视为宏调用，扫描指针继续移动。扫描到后续__empty__()展开为空，此时扫描指针位置为
 * 		  x y X ()
 * 		       ^
 * 		  只有当
 * 		  x y X ()
 * 		      ^
 * 		  即从X开始连续扫描到()时才视作宏调用。
 * 		  由于__empty__()的存在，预处理器在展开完空宏后从()继续扫描，扫描指针不会跳回X处重新扫描，因此一轮扫描无法将后面的X()展开为x
 *
 * 		  原理：宏本身的宏体替换是展开主链、宏的每个参数的展开都是各自独立的支链。参数展开发生在宏体替换之前，并且参数展开过程会创建新的展开链，每条展开链都是独立的展开过程。
 * 		  在同一条展开链上，每次宏进行展开之前，将该宏涂蓝，涂蓝的宏在本次展开过程中不会再展开。
 */
#define __defer__(n_pass) __cat_2__(__defer__, n_pass)

/**
 * @brief 仅在宏递归展开中使用，通过展开别名宏得到目标宏。需要额外展开n次才能得到目标宏。
 * 		  在目标宏（__VA_ARGS__参数传入目标宏的别名，不能直接传入目标宏本身，否则会被标记不展开）与其参数列表之间插入一个空内容的__empty__()宏，使得目标宏及其参数的解析必须延迟到下一次__scan___(。。。)时才能将__empty__()消除并展开目标宏
 * 		  宏的间接名称的定义必须是目标宏名，例如目标宏为
 * 		  #define target(x, y) (x + y)
 * 		  那么还需要定义一个别名
 * 		  #define __alias_target__() target
 * 		  使用时将别名作为参数，即__pass_alias__(1, __alias_target__)(...)
 * 		  在本宏的直接展开中，展开的结果将不会包含目标宏名，只有别名，而别名可在第二次扫描展开时展开为目标宏
 *
 * 		  延迟展开的递归宏的定义中，如果要使用另一个递归宏，一定要注意__full_scan__(n)必须不同，否则展开时可能因涂蓝导致无法展开，使得宏与参数对不上，甚至出现拼接错误的混乱token，非常难排查问题
 */
#define __pass_alias__(n_pass, macro_alias) __defer__(n_pass)(macro_alias)()

/**
 * @brief full scan函数族的作用均为，足够多次地重复扫描参数，确保传入参数的完全展开
 */
#if !defined(__full_scan_level__)
#define __full_scan_level__() 10
#endif

/**
 * 2^n次扫描。
 * 注：由于未知原因，__full_scan_n_intl__0(...)必须直接地定义为__VA_ARGS__，而下列写法虽然看上去正确但实际上对于较大（但理论上仍然可行的）展开次数会报错：
 * #define __full_scan_n_intl__0 __scan__
 * #define __full_scan_n_intl__0(...) __scan__(__VA_ARGS__)
 * 尽管这两种写法看上去没有问题，但多次测试发现只有#define __full_scan_n_intl__0(...) __VA_ARGS__的写法不会报错
 *
 * ！！！注意！！！
 * 如果在一个递归宏的定义中要完全展开另一个递归宏，则两个递归宏**必须**使用不同的__full_scan__()宏。
 * 如果两个宏均使用同一个展开宏，否则在外层宏展开__full_scan__()宏时内层的递归宏也使用同一个__full_scan__()宏展开，导致递归重入，内层递归宏的__full_scan__()根本不会展开，导致出错
 */

/**
 * @brief 选择第expand_id个__full_scan_n__()宏，其中n=expand_id，n不同时，对应的扫描宏名不同，但都是扫描功能完全相同。只用于防止嵌套递归时full scan递归重入。
 */
#define __scan_level__(expand_id, level) __cat_4__(__scan_, expand_id, _intl__, level)
#define __full_scan__(expand_id) __scan_level__(expand_id, __full_scan_level__())

#endif//_PPMP_SCAN
