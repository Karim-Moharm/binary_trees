#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return NULL;

	newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	return newNode;
}
