#ifndef LDRY_MACROS_LIKELY_H_
#define LDRY_MACROS_LIKELY_H_

#ifndef __KERNEL__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#endif

#endif
