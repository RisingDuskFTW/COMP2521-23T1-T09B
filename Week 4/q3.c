// Find the number of nodes in a BST

#include <stdio.h>

typedef struct BSTNode {
	int value;
	struct BSTNode *left;
	struct BSTNode *right;
} BSTNode;

typedef struct BSTNode *BSTree;

int BSTreeNumNodes(BSTree t) {
    if (t == NULL) {
        return 0;
    }
    return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
}
