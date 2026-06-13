#include "singly_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int add(struct node **head, int value) {
  struct node *new_node = malloc(sizeof(struct node));

  if (new_node == NULL)
    return 0;

  new_node->data = value;
  new_node->next = *head;
  *head = new_node;
  return 1;
}

int delete_element(struct node **head, int value) {
  struct node **indirect = head;

  while (*indirect != NULL && (*indirect)->data != value)
    indirect = &(*indirect)->next;

  if (*indirect == NULL)
    return 0;

  struct node *aux = *indirect;

  *indirect = aux->next;
  free(aux);

  return 1;
}

void invert(struct node **head) {
  struct node **indirect = head;
  struct node *prev, *cur, *next;

  cur = *indirect;
  prev = NULL;

  while (cur != NULL) {
    next = cur->next;
    cur->next = prev;

    prev = cur;
    cur = next;
  }
  *indirect = prev;
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
