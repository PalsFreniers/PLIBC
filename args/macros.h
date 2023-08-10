#ifndef PLIBC_ARGS_BASE_H
#define PLIBC_ARGS_BASE_H

#if defined __STDC_VERSION__ && __STDC_VERSION__ > 201710L
# define va_start(v, ...)	__builtin_va_start(v, 0)
#else
# define va_start(v,l)	__builtin_va_start(v,l)
#endif

#define va_end(v)	__builtin_va_end(v)
#define va_arg(v,l)	__builtin_va_arg(v,l)
#define __va_copy(d,s)	__builtin_va_copy(d,s)

#endif
