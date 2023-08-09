#include "base.h"

size_t strlen(const str s) {
    size_t ret = 0;
    while(s[ret++] != '\0');
    return ret - 1;
}
