#include "shapes.h"
#define PLIBC_LOGGER_STRUCT
#include "../logger.h"

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

void Wallgraph_fillCircle(uColor *wall, size_t width, size_t height, struct circle circle) {
    int cx = circle.x + circle.radius, cy = circle.y + circle.radius;
    int x1 = cx - circle.radius, y1 = cy - circle.radius;
    int x2 = cx + circle.radius, y2 = cy + circle.radius;
    for(int i = y1; i <= y2; i++) {
        if(i >= 0 && i < height) {
            for(int j = x1; j <= x2; j++) {
                if(j >= 0 && j < width) {
                    if((j-cx)*(j-cx) + (i-cy)*(i-cy) <= circle.radius * circle.radius) wall[i*width+j] = circle.col;
                }
            }
        }
    }
}

void WallGraph_drawLine(uColor *wall, size_t width, size_t height, struct line line) {
    ;
}
