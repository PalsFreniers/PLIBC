#ifndef PLIBC_IO_BASE_H
#define PLIBC_IO_BASE_H

#include <system.h>
#include <types.h>
#include <args.h>
#include <cstr.h>

#include "macros.h"

void putc(char c);
void puts(const str s);
void puts_s(const str s, size_t size);
void printf(const str fmt, ...);
void printf_s(const str fmt, ...);
void vprintf(const str fmt, va_list lst);
void vprintf_s()
void fprintf(int fd, const str fmt, ...);
void vfprintf(int fd, const str fmt, va_list lst);

#endif // PLIBC_IO_BASE_H
