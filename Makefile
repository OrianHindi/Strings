CC=gcc
FLAGS= -Wall -g


all:isort txtfind


isort: mains.o isort.o
	$(CC) $(FLAGS) -o isort mains.o isort.o 

txtfind: main.o txtfind.o
	$(CC) $(FLAGS) -o txtfind main.o txtfind.o 

main.o: main.c
	$(CC) $(FLAGS) -c main.c 

mains.o: mains.c 
	$(CC) $(FLAGS) -c mains.c 

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c 

txtfind.o:txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c 
.PHONY: clean all

clean:
	rm -f *.o isort txtfind