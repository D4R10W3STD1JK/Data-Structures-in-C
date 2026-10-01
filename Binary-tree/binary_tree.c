#include "binary_tree.h"

struct Node *newNode(int value) {
  struct Node *node = malloc(sizeof(struct Node));
  node->value = value;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void preOrder(struct Node *node) {
  if (node == NULL)
    return;

  printf("Value: %d\n", node->value);

  preOrder(node->left);
  preOrder(node->right);
}

void postOrder(struct Node *node) {
  if (node == NULL)
    return;

  postOrder(node->left);
  postOrder(node->right);

  printf("Value: %d\n", node->value);
}
