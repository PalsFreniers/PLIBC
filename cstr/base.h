#ifndef PLIBC_CSTR_BASE_H
#define PLIBC_CSTR_BASE_H

#include <stddef.h>
#include "../types.h"

size_t strlen(const str s);
i8     strcmp(const str s1, const str s2);
i8     strncmp(const str s1, const str s2, size_t size);
#if 0
str    strcpy(const str dst, const str src);
str    strncpy(const str dst, const str src, size_t size);
str    strcat(const str dst, const str src);
str    strncat(const str dst, const str src, size_t size);
char  *strchr(const str s, char c);
char  *strlchr(const str s, char c);
str    strstr(const str s, const str sub);
size_t strcspn(const str s, const str sub);
size_t strspn(const str s, const str sub);
char  *strpbrk(const str s, const str lst);
str    strtok(const str s, const str delim);
size_t strcoll(const str s, const str delim);
#endif
#endif
