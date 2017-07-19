ldry -  Laundry: do not repeat yourself

a modular C/C++ library implementing well defined pieces of functionality that
should only be written once but could be used across lots of projects. Mostly
C macros in header-only libraries with no external dependencies and very few
dependencies on other headers in ldry.

Currently implemented functionality:

- function overloading in C
- string operation macros
- debug macros
- importing private kernel symbols macros
- wrapper for pragmas to stop warnings on selected unused variables
