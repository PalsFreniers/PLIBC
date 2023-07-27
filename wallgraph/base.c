#include "base.h"
#include "images.h"
#include "macros.h"
#include "shapes.h"

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

bool WallGraph_generateChecker() {
    uColor pixels[800*800] = Wallgraph_NULL();
    for(int y = 0; y < 8; y++) {
        for(int x = 0; x < 8; x++) {
            struct rect r = (struct rect) {
                .x   = x*100,
                .y   = y*100,
                .w   =   100,
                .h   =   100,
                .col = 0xFFBBBBBB
            };
            if((x + y)%2 == 0) r.col = 0xFF555555;
            Wallgraph_fillRect(pixels, 800, 800, r);
        }
    }
    const str file = "WallGraph_Checker_easterEgg.ppm";
    if(Wallgraph_saveToPPM(pixels, 800, 800,  file)) return false;
    return true;
}
