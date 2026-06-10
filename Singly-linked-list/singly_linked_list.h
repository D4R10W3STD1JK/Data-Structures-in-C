#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

struct node {
  int data;
  struct node *next;
};

int add(struct node **head, int value);
int delete_element(struct node **head, int value);
void delete_all(struct node *head);
void show(struct node *head);

#endif
