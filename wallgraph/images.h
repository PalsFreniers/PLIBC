#ifndef PLIBC_WALLGRAPH_IMAGES_H
#define PLIBC_WALLGRAPH_IMAGES_H

#include <stdio.h>
#include <stdlib.h>
#include "../macros.h"
#include "../types.h"
#include "base.h"
#include "typedefs.h"

int Wallgraph_saveToPPM(uColor *wall, size_t width, size_t height, const str path);

#endif
