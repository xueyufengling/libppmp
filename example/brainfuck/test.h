#ifndef _PPMP_BRAINFUCK_TEST
#define _PPMP_BRAINFUCK_TEST

#include "interpreter.h"

// 循环计算加法，将cell 0的值加到cell 1上，
#define __prog_add__() lpbg, dec, shr, inc, shl, lped

#define __add_result__(x, y) __ldcell__(1, __run__(__prog_add__, 0, 0, x, y))

// 循环计算减法，将cell 0的值减到cell 1上，
#define __prog_sub__() lpbg, dec, shr, dec, shl, lped

#define __sub_result__(x, y) __ldcell__(1, __run__(__prog_sub__, 0, 0, y, x))

#endif//_PPMP_BRAINFUCK_TEST
