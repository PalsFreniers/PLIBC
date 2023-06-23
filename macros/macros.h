#ifndef PLIBC_MACROS_MACROS_H
#define PLIBC_MACROS_MACROS_H

#define UNUSED(x) ((void)x)
#define TODO(str) {\
                  fprintf("[TODO] %s -> %s", __FILE__, str);\
                  exit(1);\
                  }
#define BIT(x) (1 << x)
#define KILOBYTE(x) (x * 1024)
#define MEGABYTE(x) (KILOBYTE(x) * 1024)
#define GIGABYTE(x) (MEGABYTE(x) * 1024)

#define HELLO_WORLD int main() {\
                        printf("Hello World\n");\
                        return 0;\
                    }

#endif