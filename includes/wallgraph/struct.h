#ifndef PLIBC_WALLGRAPH_STRUCT_H
#define PLIBC_WALLGRAPH_STRUCT_H

#include <types.h>
#include "typedefs.h"

struct color {
    u8 r, g, b, a;
};

struct rect {
    i32 x, y;
    size_t w, h;
    uColor col;
};

struct circle {
    i32 x, y;
    size_t radius;
    uColor col;
};

struct line {
    i32 x1, y1;
    i32 x2, y2;
    size_t thicc;
    uColor col;
};

#endif // PLIBC_WALLGRAPH_STRUCT_H
