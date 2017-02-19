CC=gcc
CFLAGS=-I.
DEPS=word.h

all: main

main: main.o word.o
	gcc -o main main.o word.o -I.

main.o: main.c
	gcc -c -o main.o main.c -I.

word.o: word.c
	gcc -c -o word.o word.c -I.

clean :
	rm *.o
	rm main

hm: main.c word.c
	gcc -o hm word.c main.c -I.

clean_hm :
	rm hm
