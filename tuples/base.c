#include "base.h"

struct tuple *Tuple_create() {
    struct tuple *ret = (struct tuple *)malloc(sizeof(struct tuple));
    if(ret == NULL) return NULL;
    ret->size = 1;
    ret->arr = (u64 *)malloc(ret->size);
    if(ret->arr == NULL) {
        free(ret);
        return NULL;
    }
    return ret;
}

bool Tuple_resize(struct tuple *tuple, size_t newSize) {
    if(tuple->size == newSize) return true;
    u64 *tmp = (u64 *)malloc(newSize * sizeof(void *));
    if(tmp == NULL) return false;
    char *t = memcpy(tmp, tuple->arr, MIN(newSize, tuple->size));
    if(t == NULL) return false;
    free(tuple->arr);
    tuple->arr = tmp;
    tuple->size = newSize;
    return true;
}

void Tuple_destroy(struct tuple *tuple) {
    if(tuple != NULL && tuple->arr != NULL) free(tuple->arr);
    if(tuple != NULL) free(tuple);
}

// setters
void Tuple_setI8(struct tuple *tuple, i8 data, size_t index) {
    if(tuple->size < index) Tuple_resize(tuple, index + 1);
    tuple->arr[index] = (u64)data;
}

void Tuple_setI16(struct tuple *tuple, i16 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

void Tuple_setI32(struct tuple *tuple, i32 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

void Tuple_setI64(struct tuple *tuple, i64 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

 
void Tuple_setU8(struct tuple *tuple, u8 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

void Tuple_setU16(struct tuple *tuple, u16 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

void Tuple_setU32(struct tuple *tuple, u32 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

void Tuple_setU64(struct tuple *tuple, u64 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

 
void Tuple_setF32(struct tuple *tuple, f32 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

void Tuple_setF64(struct tuple *tuple, f64 data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

 
void Tuple_setBool(struct tuple *tuple, bool data, size_t index) { 
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

void Tuple_setStr(struct tuple *tuple, str data, size_t index) {  
    if(tuple->size < index) Tuple_resize(tuple, index + 1); 
    tuple->arr[index] = (u64)data; 
}

// getters 
i8 Tuple_getI8(struct tuple *tuple, size_t index) {
    return (i8)tuple->arr[index];
}

i16 Tuple_getI16(struct tuple *tuple, size_t index) {
    return (i16)tuple->arr[index]; 
} 

i32 Tuple_getI32(struct tuple *tuple, size_t index) {
    return (i32)tuple->arr[index]; 
} 

i64 Tuple_getI64(struct tuple *tuple, size_t index) {
    return (i64)tuple->arr[index]; 
} 
  
 
u8 Tuple_getU8(struct tuple *tuple, size_t index) {
    return (u8)tuple->arr[index]; 
} 

u16 Tuple_getU16(struct tuple *tuple, size_t index) {
    return (u16)tuple->arr[index]; 
} 

u32 Tuple_getU32(struct tuple *tuple, size_t index) {
    return (u32)tuple->arr[index]; 
} 

u64 Tuple_getU64(struct tuple *tuple, size_t index) {
    return (u64)tuple->arr[index]; 
} 
  

f32 Tuple_getF32(struct tuple *tuple, size_t index) {
    return (f32)tuple->arr[index]; 
} 

f64 Tuple_getF64(struct tuple *tuple, size_t index) {
    return (f64)tuple->arr[index]; 
} 
  

bool Tuple_getBool(struct tuple *tuple, size_t index) {
    return (bool)tuple->arr[index]; 
} 

str Tuple_getStr(struct tuple *tuple, size_t index) {
    return (str)tuple->arr[index]; 
} 
  
