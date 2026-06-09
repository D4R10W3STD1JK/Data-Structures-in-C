#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

struct node {
  int data;
  struct node *next;
};

struct node *add(struct node *head, int value);
struct node *delete_element(struct node *head, int value);
void delete_all(struct node *head);
void show(struct node *head);

#endif
