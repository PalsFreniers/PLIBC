#ifndef PLIBC_TUPLES_BASE_H
#define PLIBC_TUPLES_BASE_H

#include <stdlib.h>
#include <string.h>
#include "../types.h"

struct tuple {
    void* arr;
    size_t size;
};

struct tuple *Tuple_create();
bool Tuple_resize(struct tuple *tuple, size_t newSize);
void Tuple_destroy(struct tuple *tuple);

// setters
void Tuple_setI8(struct tuple *tuple, i8 data, size_t index);
void Tuple_setI16(struct tuple *tuple, i16 data, size_t index);
void Tuple_setI32(struct tuple *tuple, i32 data, size_t index);
void Tuple_setI64(struct tuple *tuple, i64 data, size_t index);

void Tuple_setU8(struct tuple *tuple, u8 data, size_t index);
void Tuple_setU16(struct tuple *tuple, u16 data, size_t index);
void Tuple_setU32(struct tuple *tuple, u32 data, size_t index);
void Tuple_setU64(struct tuple *tuple, u64 data, size_t index);

void Tuple_setF32(struct tuple *tuple, f32 data, size_t index);
void Tuple_setF64(struct tuple *tuple, f64 data, size_t index);

void Tuple_setBool(struct tuple *tuple, bool data, size_t index);
void Tuple_setStr(struct tuple *tuple, str data, size_t index);
// getters
void Tuple_getI8(struct tuple *tuple, i8 data, size_t index);
void Tuple_getI16(struct tuple *tuple, i16 data, size_t index);
void Tuple_getI32(struct tuple *tuple, i32 data, size_t index);
void Tuple_getI64(struct tuple *tuple, i64 data, size_t index);

void Tuple_getU8(struct tuple *tuple, u8 data, size_t index);
void Tuple_getU16(struct tuple *tuple, u16 data, size_t index);
void Tuple_getU32(struct tuple *tuple, u32 data, size_t index);
void Tuple_getU64(struct tuple *tuple, u64 data, size_t index);

void Tuple_getF32(struct tuple *tuple, f32 data, size_t index);
void Tuple_getF64(struct tuple *tuple, f64 data, size_t index);

void Tuple_getBool(struct tuple *tuple, bool data, size_t index);
void Tuple_getStr(struct tuple *tuple, str data, size_t index);

#endif
