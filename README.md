# PLIBC

simple c library that I use in my projects

all of the primary header file are documented

in this library, you will find multiple headers : 

## types
header : [`types.h`](./types.h)

the type header is here to create multiples types to help organize your variables:
```rust
i8, i16, i32, i64 // signed int
u8, u16, u32, u64 // unsigned int
f32, f64 // floats
bool // boolean
genPtr // generic pointer (void)
str // char * (cstring)
```

to create a variable vith the `genPtr` type, add a star after it :
```c
genPtr* ptr;
```

the type header also comes with two macros :
`true, false` for booleans wich are just respectivly a representation of 1 and 0

## exception
header : [`exception.h`](./exception.h)

the exception header is here to help you work with error handling

with this header you will be able to use `try-catch` blocks and define your exceptions

first you need to initatialize the exception system using the `PLIBC_INIT_EXCEPTIONS;` macro ( put it after the includes )

then you will be able to use `try-catch`:

```c++
try {
        // code
} catch(/* exception */) {
        // code
} finally {
        // code
} endtry;
```

the `catch` and the `finally` blocks are optionals

an exception is just a number so to define an exception you need to do :
```c
#define myException (x)
```

you can define your exception on a range between 1 and 199 and the rest is used ( see [exception.h](./exception.h) for more informations )

## logger
header: [`logger.h`](./logger.h)

the logger header is here to help you keep track of inforamtions

in this header you have 2 types of logging style:
- structure :
  ```c
  struct logger _log = Logger_createDefault();
  _log.info("format", args);
  ```
- functions :
  ```c
  Logger_info("format", args);
  ```
for each of the types there are Exception throwing versions:
- structures :
  ```c
  struct logger _log = Logger_createExcept();
  _log.info("format", args); // throw logInfoException
  ```
- functions :
  ```c
  Logger_infoExcept("format", args); // throw logInfoException
  ```

this header also introduce four new exceptions : 
1. `logInfoException`
2. `logWarnException`
3. `logErrorException`
4. `logdebugException`
