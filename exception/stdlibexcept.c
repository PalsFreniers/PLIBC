#include "stdlibexcept.h"

void *mallocExcept(size_t size) {
        void *ret = malloc(size);
        if(ret == NULL) throw(nullptrException);
        return ret;
}