#include "single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

struct node *add(struct node *head, int value) {
  struct node *new_node;
  new_node = malloc(sizeof(struct node));

  if (new_node == NULL) {
    printf("Error allocating node\n");
    exit(EXIT_FAILURE);
  }
  new_node->data = value;
  new_node->next = head;

  return new_node;
}

struct node *delete_element(struct node *head, int value) {
  struct node *cur, *prev;

  for (cur = head, prev = NULL; cur != NULL; prev = cur, cur = cur->next) {
    if (cur->data == value) {
      if (prev == NULL)
        head = head->next;
      else
        prev->next = cur->next;
      free(cur);
      return head;
    }
  }
  return head;
}

void delete_all(struct node *head) {
  struct node *aux;
  while (head != NULL) {
    aux = head;
    head = head->next;
    free(aux);
  }
}

void show(struct node *head) {
  printf("The data allocated in the linked list is: ");
  for (; head != NULL; head = head->next)
    printf("%d ", head->data);
  printf("\n");
}
