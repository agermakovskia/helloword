all: main

main:
	#$CC ${CFLAGS:-} main.c -o main
	gcc main.c -o main
