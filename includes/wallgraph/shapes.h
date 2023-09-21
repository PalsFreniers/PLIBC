#ifndef PLIBC_WALLGRAPH_SHAPES_H
#define PLIBC_WALLGRAPH_SHAPES_H

#include <memory.h>
#include <types.h>
#include "struct.h"
#include "typedefs.h"

void Wallgraph_fillRect(uColor *wall, size_t width, size_t height, struct rect rect);
void Wallgraph_fillCircle(uColor *wall, size_t width, size_t height, struct circle circle);
void WallGraph_drawLine(uColor *wall, size_t width, size_t height, struct line line);

#endif
