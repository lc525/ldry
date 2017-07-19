#ifndef LDRY_MACROS_BITS_H_
#define LDRY_MACROS_BITS_H_

#define SET_BIT(x) 1U << x
#define SET_ALL_BITS(x) ((1U << (x)) - 1)
#define BIT_MASK(x, y) (-1U >> (31 - (y))) & ~((1U << (x)) - 1)

#endif
