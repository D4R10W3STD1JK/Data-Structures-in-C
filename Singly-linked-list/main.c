#include "singly_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char option = ' ';
  int data;

  struct node *head;
  head = NULL;

  while (option != 'q') {
    printf("a for add, d for delete, s for show, q for quit: ");
    scanf(" %c", &option);

    switch (option) {
    case 'a':
      printf("Insert a value: ");
      scanf(" %d", &data);
      head = add(head, data);
      break;
    case 's':
      show(head);
      break;
    case 'd':
      printf("Insert a value: ");
      scanf(" %d", &data);
      head = delete_element(head, data);
      break;
    case 'q':
      delete_all(head);
      break;
    defalult:
      printf("Option not found\n");
      break;
    }
  }
}
