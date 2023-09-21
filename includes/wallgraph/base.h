#ifndef PLIBC_WALLGRAPH_BASE_H
#define PLIBC_WALLGRAPH_BASE_H

#include <types.h>
#include "typedefs.h"
#include "struct.h"
#include "images.h"
#include "macros.h"
#include "shapes.h"


void Wallgraph_fillWall(uColor *wall, uColor col, size_t width, size_t height);

uColor Wallgraph_c2u(struct color color);
struct color Wallgraph_u2c(uColor color);

bool WallGraph_generateChecker();

#endif
