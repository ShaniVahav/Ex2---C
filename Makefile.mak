CC = gcc
FLAGS = -g -Wall
AR=ar

all: connections lib
lib: libmy_mat.a

connections: main.o my_mat.o
$(CC) $(FLAGS) -o connections main.o my_mat.o

main.o: main.c my_mat.h
$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
$(CC) $(FLAGS) -c my_mat.c

libmy_mat.a: my_mat.o
$(AR) -rcs libmy_mat.a my_mat.o

.PHONY: clean all

clean:
rm -f .o connections
