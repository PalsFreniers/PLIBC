#include "base.h"

size_t strlen(const str s) {
    size_t ret = 0;
    while(s[ret++] != '\0');
    return ret - 1;
}

i8 strcmp(const str s1, const str s2) {
    UNUSED(s1);
    UNUSED(s2);
    TODO("strcmp");
}

i8 strncmp(const str s1, const str s2, size_t size) {
    UNUSED(s1);
    UNUSED(s2);
    UNUSED(size);
    TODO("strncmp");
}

