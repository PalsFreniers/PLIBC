#ifndef PLIBC_TUPLE_H
#define PLIBC_TUPLE_H

/*
 * Tuples
 * with this lib you can use generic tuples in C
 *
 * 
 * to use a tuple, first instantiate tuple struct using :
 * struct tuple *tupleName = Tuple_create();
 *
 * tuples have dynamic size but can be resized manually using the function:
 * Tuple_resize(*tuple, size);
 * 
 * then to set and/or get values in the tuple, you can use many function (one for each type) :
 * Tuple_set<type>(*tuple, value, index); // replace <type> by the type that you wan't to use
 * Tuple_get<type>(*tuple, value, index); // replace <type> by the type that you wan't to use
 * 
 * see types.h to get the type names
 * 
 * don't forget to destroy you tuple before exiting the program to prevent memory leaks:
 * Tuple_destroy(*tuple);
 */

#endif