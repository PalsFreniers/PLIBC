#include "base.h"
#include "typedefs.h"

void Wallgraph_fillWall(uColor *canvas, uColor col, size_t width, size_t height) {
    for (size_t y = 0; y < height; y++) {
        for(size_t x = 0; x < width; x++) {
            canvas[x+width*y] = col;
        }
    }
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
