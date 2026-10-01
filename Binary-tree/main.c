#include "binary_tree.h"

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
