/**** Notice
 * argstring.h: ldry source code
 *
 * Copyright 2015-2017 Lucian Carata <lucian.carata@cl.cam.ac.uk>
 *
 * This file is part of the ldry open-source project: github.com/lc525/ldry;
 * Its licensing is governed by the LICENSE file at the root of the project.
 **/

#ifndef LDRY_MACROS_ARGSTRING_H_
#define LDRY_MACROS_ARGSTRING_H_

#define ARG_STRING(x) #x
#define CONCAT_(a, b) a##b
#define STR(x) ARG_STRING(x)
#define CONCAT(a, b) CONCAT_(a, b)
#define STR_CONCAT(a, b) ARG_STRING(CONCAT_(a, b))

#endif
