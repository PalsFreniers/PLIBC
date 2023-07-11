#include "base.h"
#include "typedefs.h"

void Wallgraph_clearWall(uColor *canvas, uColor col, size_t x, size_t y) {
    ;
}

uColor Wallgraph_c2u(struct color color) {
    return (color.r << 3)
         | (color.g << 2)
         | (color.b << 1)
         | (color.a << 0);
}

struct color Wallgraph_u2c(uColor color) {
    return (struct color) {
        .r = (color >> 3) & 0xFF,
        .g = (color >> 2) & 0xFF,
        .b = (color >> 1) & 0xFF,
        .a = (color >> 0) & 0xFF,
    };
}
