#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

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

struct node *delete(struct node *head, int value) {

  struct node *cur, *prev;

  for (cur = head, prev = NULL; cur != NULL; prev = cur, cur = cur->next) {
    if (cur->data == value) {
      if (prev == NULL)
        head = head->next;
      else
        prev->next = cur->next;
      free(cur);
    }
  }
  return head;
}

void show(struct node *head) {
  printf("The data allocated in the linked list is: ");
  for (; head != NULL; head = head->next)
    printf("%d ", head->data);
  printf("\n");
}

int main(void) {
  char option = ' ';
  int data;

  struct node *head;
  head = malloc(sizeof(struct node));
  head->data = 10;

  while (option != 'q') {
    printf("a for add, d for delete, s for show: ");
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
      head = delete(head, data);
      break;
    }
  }
}
