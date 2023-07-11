#ifndef PLIBC_WALLGRAPH_SHAPES_H
#define PLIBC_WALLGRAPH_SHAPES_H

#include <stdlib.h>
#include "../types.h"
#include "typedefs.h"

struct rect {
    size_t x, y, w, h;
    uColor col;
}

void Wallgraph_fillRect(uColor *wall, size_t width, size_t height, struct rect rect);

#endif
