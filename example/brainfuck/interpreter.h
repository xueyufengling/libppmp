#ifndef _PPMP_BRAINFUCK_INTERPRETER
#define _PPMP_BRAINFUCK_INTERPRETER

#include <ppmp/list_op.h>
#include <ppmp/recursive_loop.h>

/**
 * 所有指令都输入或输出宏变长参数列表 (指令指针, 数据指针, 数据带...)，以下称该列表为状态表
 * 数据带理论上可以无限拓展。
 * 由于预处理器的算力与内存限制，运行步数太长的代码会导致报错 cc1plus.exe: out of memory allocating xxx bytes 或者抛出巨量编译错误（超过了自动生成宏的有效范围，导致无法展开宏结构被破坏）
 */

// 计算数据指针的真实偏移量
#define __dp2idx__(dp) __inc__(__inc__(dp))

#define __ldcell__(dp, ...) __at__(__dp2idx__(dp))(__VA_ARGS__)

//辅助宏

//设置指令指针
#define __stip__(target_ip, ...)\
    __replace_at_deferred__(0, 0, target_ip, __VA_ARGS__)

//指令指针自增
#define __incip__(...)\
    __stip__(__inc__(__ip__(__VA_ARGS__)), __VA_ARGS__)

//指令指针自减
#define __decip__(...)\
    __stip__(__dec__(__ip__(__VA_ARGS__)), __VA_ARGS__)

//获取指令指针，变长参数列表为状态表
#define __ip__(...)\
    __at__(0)(__VA_ARGS__)

//获取指令，变长参数列表为状态表
#define __ldi__(inst_buf, ...)\
    __at_exp__(__ip__(__VA_ARGS__), inst_buf())

//设置数据指针
#define __stdp__(target_dp, ...)\
    __replace_at_deferred__(1, 1, target_dp, __VA_ARGS__)

//获取数据指针
#define __dp__(...)\
    __at__(1)(__VA_ARGS__)

//获取数据
#define __ldd__(...)\
    __at_exp__(__dp2idx__(__dp__(__VA_ARGS__)), __VA_ARGS__)

//存数据
#define __std__(data, ...)\
    __replace_at_deferred__(2, __dp2idx__(__dp__(__VA_ARGS__)), data, __VA_ARGS__)

//获取数据带列表
#define __dt__(...) __list_rest__(2)(__VA_ARGS__)

// Jump if zero
#define __jz__(target_ip, ...)\
    __if_else__(__ldd__(__VA_ARGS__))\
	(\
        __pack_list__(__VA_ARGS__),\
        __stip__(target_ip, __VA_ARGS__)\
    )

// Jump if not zero
#define __jnz__(target_ip, ...)\
    __if_else__(__ldd__(__VA_ARGS__))\
	(\
        __stip__(target_ip, __VA_ARGS__),\
        __pack_list__(__VA_ARGS__)\
    )

//Brainfuck标准指令

// left shift
#define __inst_shl__(inst_buf, ...)\
    __stdp__(__dec__(__dp__(__VA_ARGS__)), __VA_ARGS__)

// right shift
#define __inst_shr__(inst_buf, ...)\
    __stdp__(__inc__(__dp__(__VA_ARGS__)), __VA_ARGS__)

// inc
#define __inst_inc__(inst_buf, ...)\
    __std__(__inc__(__ldd__(__VA_ARGS__)), __VA_ARGS__)

// dec
#define __inst_dec__(inst_buf, ...)\
    __std__(__dec__(__ldd__(__VA_ARGS__)), __VA_ARGS__)

// loop begin
/**
 * 检测到lpbg指令后，如果当前数据指针指向0，则开始跳转。初始时将递归深度loop_depth设置为1.
 * 此后从当前IP开始，IP一直自增并获取当前指令；如果是lped且loop_depth==1则查找过程终止，IP值为那个lped指令的索引。
 * 如果下个指令是lpbg则loop_depth+1。
 * 如果loop_depth>1则loop_depth-1，继续查找直到终止。
 *
 * __while_recursive__(n)在嵌套时n必须不同，否则导致递归重入。
 */
#define __inst_lpbg_cond_intl__(i, inst_num, inst_buf, loop_depth, ...) __not_equal__(__ip__(__VA_ARGS__), inst_num)
#define __inst_lpbg_op_intl__(i, inst_num, inst_buf, loop_depth, ...)\
    __if_else__(__not_equal__(__ldi__(inst_buf, __VA_ARGS__), lped))\
    (\
        __if_else__(__not_equal__(__ldi__(inst_buf, __VA_ARGS__), lpbg))\
		(\
			__pack_list__(1, loop_depth, __incip__(__VA_ARGS__)),\
			__pack_list__(1, __inc__(loop_depth), __incip__(__VA_ARGS__))\
		),\
        __if_else__(__not_equal__(loop_depth, 1))\
        (\
        	__pack_list__(1, __dec__(loop_depth), __incip__(__VA_ARGS__)),\
            __pack_list__(0, loop_depth, __VA_ARGS__)\
        )\
    )
#define __inst_lpbg__(inst_buf, ...)\
	__if_else__(__ldd__(__VA_ARGS__))\
	(\
		__pack_list__(__VA_ARGS__),\
		__list_exp_rest__(1,\
			__while_recursive__(0)\
			(\
				__inst_lpbg_cond_intl__,\
				__inst_lpbg_op_intl__,\
				__pack_list__(__sizeof__(inst_buf()), inst_buf),\
				1, __incip__(__VA_ARGS__)\
			)\
		)\
	)

// loop end
#define __inst_lped_cond_intl__(i, inst_num, inst_buf, loop_depth, ...) __not_equal__(__ip__(__VA_ARGS__), n1)
#define __inst_lped_op_intl__(i, inst_num, inst_buf, loop_depth, ...)\
    __if_else__(__not_equal__(__ldi__(inst_buf, __VA_ARGS__), lpbg))\
    (\
        __if_else__(__not_equal__(__ldi__(inst_buf, __VA_ARGS__), lped))\
		(\
			__pack_list__(1, loop_depth, __decip__(__VA_ARGS__)),\
			__pack_list__(1, __inc__(loop_depth), __decip__(__VA_ARGS__))\
		),\
        __if_else__(__not_equal__(loop_depth, 1))\
        (\
        	__pack_list__(1, __dec__(loop_depth), __decip__(__VA_ARGS__)),\
            __pack_list__(0, loop_depth, __VA_ARGS__)\
        )\
    )
#define __inst_lped__(inst_buf, ...)\
	__if_else__(__ldd__(__VA_ARGS__))\
	(\
		__list_exp_rest__(1,\
			__while_recursive__(1)\
			(\
				__inst_lped_cond_intl__,\
				__inst_lped_op_intl__,\
				__pack_list__(__sizeof__(inst_buf()), inst_buf),\
				1, __decip__(__VA_ARGS__)\
			)\
		),\
		__pack_list__(__VA_ARGS__)\
	)

//定义__euqal__()宏所需的辅助宏
#define __equal_def__lpbg(x) x
#define __equal_def__lped(x) x

// __exec__(指令缓冲, IP, DP, 带数据)
// 执行指令并更新IP、DP，但执行完成后不进行IP自增
#define __exec__(inst_buf, ...)\
    __cat__(3, __inst_, __ldi__(inst_buf, __VA_ARGS__), __)(inst_buf, __VA_ARGS__)

#define __zero_tape__(n) __repeat_token_deferred__(0, n, 0)

/**
 * 程序运行，每使用__exec__()执行一条指令就IP自增
 * 一直递归计算直到IP等于指令缓冲长度（即IP越界）
 * __run__(指令缓冲名称, 初始IP, 初始DP, 初始带数据...)
 * 输出为：停机IP, 停机DP, 停机带数据...
 */
#define __run_cond_intl__(i, inst_num, inst_buf, ...) __not_equal__(__ip__(__VA_ARGS__), inst_num)
#define __run_op_intl__(i, inst_num, inst_buf, ...)\
    1, __incip__(__exec__(inst_buf, __VA_ARGS__))
#define __run__(inst_buf, ip, dp, ...) __while_recursive__(2)(__run_cond_intl__, __run_op_intl__, __pack_list__(__sizeof__(inst_buf()), inst_buf), ip, dp, __VA_ARGS__)

//执行指定次数
#define __step_op_intl__(i, begin_idx, end_idx, inst_buf, ...)\
    1, __incip__(__exec__(inst_buf, __VA_ARGS__))
#define __step__(count, inst_buf, ip, dp, ...) __for_recursive__(0)(0, count, __step_op_intl__, inst_buf, ip, dp, __VA_ARGS__)

#define __str_output__(...) "ip: " __str__(__ip__(__VA_ARGS__)) "; dp: " __str__(__dp__(__VA_ARGS__)) "; data_tape: " __str__(__replace_delim_deferred__(0, , __dt__(__VA_ARGS__))) ";"

#endif//_PPMP_BRAINFUCK_INTERPRETER
