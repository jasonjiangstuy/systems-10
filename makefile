all: main.o schoollist.o
	gcc -o a.out main.o schoollist.o

main.o: main.c schoollist.h
	gcc -c main.c

run: a.out
	./a.out
