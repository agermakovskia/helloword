all: main

main:
	"$CC ${CFLAGS:-} main.c -o main"
        
