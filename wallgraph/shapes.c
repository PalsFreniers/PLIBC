#include "shapes.h"

void Wallgraph_fillRect(uColor *wall, size_t width, size_t height, struct rect rect) {
    for(int dy = 0; dy < rect.h; dy++) {
        int y = rect.y + dy;
        if(y >= 0 && y < height) {
            for(int dx = 0; dx < rect.w; dx++) {
                int x = rect.x + dx;
                if(x >= 0 && x < width) wall[x+y*width] = rect.col;
            }
        }
    }
}

void Wallgraph_fillCircle(uColor *wall, size_t width, size_t height, struct circle circle);
