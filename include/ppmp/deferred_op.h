#ifndef _PPMP_DEFERREDOP
#define _PPMP_DEFERREDOP

#include "token.h"
#include "scan.h"

#define __pack_list_deferred__(n_pass) __defer__(n_pass)(__pack_list__)

#define __forward_deferred__(n_pass) __defer__(n_pass)(__forward__)

#define __pack_deferred__(n_pass) __defer__(n_pass)(__pack__)

#define __unpack_deferred__(n_pass) __defer__(n_pass)(__unpack__)

#endif//_PPMP_DEFERREDOP
