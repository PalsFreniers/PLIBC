#include <wallgraph/base.h>

void Wallgraph_fillWall(uColor *wall, uColor col, size_t width, size_t height) {
    for (size_t i = 0; i < height * width; i++) wall[i] = col;
}

uColor Wallgraph_c2u(struct color color) {
    return (color.r << 8*0)
         | (color.g << 8*1)
         | (color.b << 8*2)
         | (color.a << 8*3);
}    
    
struct color Wallgraph_u2c(uColor color) {
    return (struct color) { 
        .r = (color >> 8*0) & 0xFF,
        .g = (color >> 8*1) & 0xFF,
        .b = (color >> 8*2) & 0xFF,
        .a = (color >> 8*3) & 0xFF,
    };
}
