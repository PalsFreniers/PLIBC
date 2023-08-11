#ifndef PLIBC_SYSTEM_BASE_H
#define PLIBC_SYSTEM_BASE_H

#include <types.h>
#include "structs.h"

size_t read(int fd, str buf, size_t count);
size_t write(int fd, const u8* buf, size_t count);
int    open(const str name, int flags, u16 mode);
int    close(int fd);

#endif // PLIBC_SYSTEM_BASE_H
