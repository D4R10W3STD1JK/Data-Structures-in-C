main: main.o singly_linked_list.o
	gcc -o main main.o singly_linked_list.o

main.o: main.c singly_linked_list.h
	gcc -c main.c

singly_linked_list.o: singly_linked_list.c singly_linked_list.h
	gcc -c singly_linked_list.c
