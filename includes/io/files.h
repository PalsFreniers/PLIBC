#ifndef PLIBC_IO_FILES_H
#define PLIBC_IO_FILES_H

struct file {
    unsigned char *buffPtr;
    size_t         size;
    str           *buffer;
    u8             flags;
    u8             fd;
    u32            

#endif // PLIBC_IO_FILES_H
