/**** Notice
 * bits.h: ldry source code
 *
 * Copyright 2015-2017 Lucian Carata <lucian.carata@cl.cam.ac.uk>
 *
 * This file is part of the ldry open-source project: github.com/lc525/ldry;
 * Its licensing is governed by the LICENSE file at the root of the project.
 **/

#ifndef LDRY_MACROS_BITS_H_
#define LDRY_MACROS_BITS_H_

#define SET_BIT(x) 1U << x
#define SET_ALL_BITS(x) ((1U << (x)) - 1)
#define INTXN_BIT_MASK(x, y) (-1U >> (31 - (y))) & ~((1U << (x)) - 1)

#endif
