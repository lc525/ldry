/**** Notice
 * unused.h: ldry source code
 *
 * Copyright 2015-2017 Lucian Carata <lucian.carata@cl.cam.ac.uk>
 *
 * This file is part of the ldry open-source project: github.com/lc525/ldry;
 * Its licensing is governed by the LICENSE file at the root of the project.
 **/

#ifndef LDRY_MACROS_UNUSED_H_
#define LDRY_MACROS_UNUSED_H_

#ifdef UNUSED
#elif defined(__GNUC__)
  // TODO(lc525): the line below used to work, investigate what GCC versions
  // support the __attribute__ alternative (one would guess many)
  /*#define UNUSED(x) _Pragma(ARG_STRING(unused(x)))*/
  #define UNUSED(x) x __attribute__((unused))
#elif defined(__LCLINT__)
  #define UNUSED(x) /*@unused@*/ x
#else
  #define UNUSED(x) x
#endif

#endif
