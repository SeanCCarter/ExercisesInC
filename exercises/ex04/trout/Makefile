# trout: trout.h util.h trout.c util.c main.c
# 	gcc -g -o trout trout.c util.c main.c
util.o: util.h util.c
	gcc -c util.c -o util.o

trout.o: trout.h util.h trout.c util.c
	gcc -c trout.c -o trout.o

main: util.o trout.o main.c
	gcc -Wall util.o trout.o main.c -o main
