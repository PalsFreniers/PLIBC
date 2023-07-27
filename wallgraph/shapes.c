#include "shapes.h"
#define PLIBC_LOGGER_STRUCT
#include "../logger.h"

void Wallgraph_fillRect(uColor *wall, size_t width, size_t height, struct rect rect) {
    for(int dy = -(rect.h/2); dy < (int)(rect.h/2); dy++) {
        int y = rect.y + dy;
        if(y >= 0 && y < height) {
            for(int dx = -(rect.w/2); dx < (int)(rect.w/2); dx++) {
                int x = rect.x + dx;
                if(x >= 0 && x < width) wall[x+y*width] = rect.col;
            }
        }
    }
}

void Wallgraph_fillCircle(uColor *wall, size_t width, size_t height, struct circle circle) {
    ;
}
