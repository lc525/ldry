/**** Notice
 * likely.h: ldry source code
 *
 * Copyright 2015-2017 Lucian Carata <lucian.carata@cl.cam.ac.uk>
 *
 * This file is part of the ldry open-source project: github.com/lc525/ldry;
 * Its licensing is governed by the LICENSE file at the root of the project.
 **/

#ifndef LDRY_MACROS_LIKELY_H_
#define LDRY_MACROS_LIKELY_H_

#ifndef __KERNEL__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#endif

#endif
