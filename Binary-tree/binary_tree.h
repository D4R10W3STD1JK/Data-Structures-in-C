#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *left;
  struct Node *right;
};

struct Node *newNode(int value);
void preOrder(struct Node *node);
void postOrder(struct Node *node);

#endif
