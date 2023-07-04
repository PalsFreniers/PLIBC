CC=gcc
LD=gcc
CFLAGS=-fPIC
LDFLAGS=-shared
LIBS=
CSRC=$(wildcard ../*/*.c)
COBJ=$(CSRC:.c=.o)

all: libs test clean

libs: $(COBJ)
	mkdir -p build
	$(LD) $(LDFLAGS) -o build/libstd.so $(COBJ) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -g -ggdb

clean:
	rm -rf $(COBJ)

test:
	mkdir -p build/test
	gcc -c ../test/protec/main.c -o build/test/main.o  -I../ -g -ggdb
	gcc -o build/test/main build/test/*.o -L. -lstd
	rm -rf build/test/*.o
