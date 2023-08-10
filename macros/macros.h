#ifndef PLIBC_MACROS_MACROS_H
#define PLIBC_MACROS_MACROS_H

#define UNUSED(x) ((void)x)
#define TODO(str) {\
                  fprintf(stderr, "[TODO] %s -> %s", __FILE__, str);\
                  exit(1);\
                  }
#define BIT(x) (1 << x)
#define KILOBYTE(x) (x * 1024)
#define MEGABYTE(x) (KILOBYTE(x) * 1024)
#define GIGABYTE(x) (MEGABYTE(x) * 1024)

#define MAX(x, y) (x < y ? y : x) 
#define MIN(x, y) (x > y ? y : x) 

#define DEFER(x) {defer = x; goto defer;}

#ifndef NULL
# define NULL ((void *)0)
#endif

#define HELLO_WORLD int main() {\
                        printf("Hello World\n");\
                        return 0;\
                    }

#endif
