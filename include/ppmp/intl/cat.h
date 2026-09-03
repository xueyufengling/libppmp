#ifndef _PPMP_INTL_CAT
#define _PPMP_INTL_CAT

#define __cat_2_noexp__(_0, _1) _0##_1

#define __cat_2__(_0, _1) __cat_2_noexp__(_0, _1)

#define __cat_3_noexp__(_0, _1, _2) _0##_1##_2

#define __cat_3__(_0, _1, _2) __cat_3_noexp__(_0, _1, _2)

#define __cat_4_noexp__(_0, _1, _2, _3) _0##_1##_2##_3

#define __cat_4__(_0, _1, _2, _3) __cat_4_noexp__(_0, _1, _2, _3)

#define __cat_5_noexp__(_0, _1, _2, _3, _4) _0##_1##_2##_3##_4

#define __cat_5__(_0, _1, _2, _3, _4) __cat_5_noexp__(_0, _1, _2, _3, _4)

#endif//_PPMP_INTL_CAT
