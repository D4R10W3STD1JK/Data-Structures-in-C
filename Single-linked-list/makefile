main: main.o single_linked_list.o
	gcc -o main main.o single_linked_list.o

main.o: main.c single_linked_list.h
	gcc -c main.c

single_linked_list.o: single_linked_list.c single_linked_list.h
	gcc -c single_linked_list.c
