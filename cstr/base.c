#include <cstr/base.h>

size_t strlen(const str s) {
        size_t ret = 0;
        while(s[ret++] != '\0');
        return ret - 1;
}

i8 strcmp(const str s1, const str s2) {
        size_t len = strlen(s1);
        i32 defer = 0;
        irepeat(i, len) if(s1[i] != s2[i]) DEFER(s1[i] - s2[i]);
defer:
        return defer;
}

i8 strncmp(const str s1, const str s2, size_t size) {
        size_t len = strlen(s1);
        i32 defer = 0;
        iwhile(i, i <= len && i < size) if(s1[i] != s2[i]) DEFER(s1[i] - s2[i]);
defer:
        return defer;
}

str strcpy(const str dst, const str src) {
        size_t len = strlen(src);
        irepeat(i, len) dst[i] = src[i];
        dst[len] = '\0';
        return dst;
}

str strncpy(const str dst, const str src, size_t size) {
        size_t len = strlen(src);
        iwhile(i, i <= len && i < size) dst[i] = src[i];
        return dst;
}

str strcat(const str dst, const str src) {
        size_t len  = strlen(src);
        size_t len2 = strlen(dst);
        irepeat(i, len) dst[len2 + i] = src[i];
        dst[len2 + len] = '\0';
        return dst;
}

str strncat(const str dst, const str src, size_t size) {
        size_t len  = MIN(strlen(src), size);
        size_t len2 = strlen(dst);
        irepeat(i, len) dst[len2 + i] = src[i];
        dst[len2 + len] = '\0';
        return dst;
}

char *strchr(const str s, char c) {
        size_t pos = 0;
        iwhile(i, s[i] != c && s[i] != '\0') pos++;
        return s[pos] == c ? &(s[pos]) : NULL;
}

char *strrchr(const str s, char c) {
        size_t pos = strlen(s) - 1;
        dwhile(i, strlen(s), s[i] != c) pos--;
        return s[pos] == c ? &(s[pos]) : NULL;
}

str strstr(const str s, const str sub) {
        size_t lens = strlen(s), lensub = strlen(sub);
        str defer = 0;
        iwhile(i, i + lensub < lens) {
                size_t j = 0;
                while(s[i + j] == sub[j]) j++;
                if(j == lensub) DEFER(s + i);
                if(i + lensub + 1 == lens) DEFER(NULL);
        }
defer:
        return defer;
}

bool inSet(char c, const str set) {
    iwhile(i, set[i] != 0) if(set[i] == c) return true;
    return false;
}

size_t strspn(const str s, const str sub) {
        
}

size_t strcspn(const str s, const str sub);
