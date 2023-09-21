#include <wallgraph/images.h>

int Wallgraph_saveToPPM(uColor *wall, size_t width, size_t height, const str path) {
    int defer = 0;
    FILE *f = fopen(path, "wb");
    if(f == NULL) DEFER(-1);
    fprintf(f, "P6\n%zu %zu 255\n", width, height);
    if(ferror(f)) DEFER(-1);
    for(int i = 0; i < height * width; i++) {
        struct color c = Wallgraph_u2c(wall[i]);
        fwrite(&c, 3, 1, f);
        if(ferror(f)) DEFER(-1);
    }
defer:
    if(f) fclose(f);
    return 0;
}
