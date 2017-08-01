/**** Notice
 * debug.h: ldry source code
 *
 * Copyright 2015-2017 Lucian Carata <lucian.carata@cl.cam.ac.uk>
 *
 * This file is part of the ldry open-source project: github.com/lc525/ldry;
 * Its licensing is governed by the LICENSE file at the root of the project.
 **/

#ifndef LDRY_KERNEL_MACROS_DEBUG_H_
#define LDRY_KERNEL_MACROS_DEBUG_H_

#ifndef NDEBUG
#define debugk(format, ...) printk(format, ##__VA_ARGS__)
#else
#define debugk(format, ...)
#endif

#endif
