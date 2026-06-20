#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *left;
  struct Node *right;
};

struct Node *newNode(int value);
void preOrder(struct Node *root);
void postOrder(struct Node *root);

int main() {

  // Test functions
  struct Node *root = newNode(3);

  root->left = newNode(5);
  root->right = newNode(10);

  root->left->left = newNode(99);

  printf("-------------------------\n");
  printf("Start preOrder\n");
  printf("-------------------------\n");
  preOrder(root);

  printf("-------------------------\n");
  printf("Start postOrder\n");
  printf("-------------------------\n");
  postOrder(root);
  return 0;
}

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
