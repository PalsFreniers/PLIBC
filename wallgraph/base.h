#ifndef PLIBC_WALLGRAPH_BASE_H
#define PLIBC_WALLGRAPH_BASE_H

#include <stdlib.h>
#include "typedefs.h"
#include "../types.h"

struct color {
    u8 r, g, b, a;
};

void Wallgraph_clearWall(Wallgraph_canvas canvas, uColor col, size_t x, size_t y);

uColor Wallgraph_c2u(struct color color);
struct color Wallgraph_u2c(uColor color);

#endif
