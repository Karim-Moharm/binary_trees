#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	bst_t *newNode = NULL;
	old_left_child = NULL;

	newNode = binary_tree_node(parent, value); 

	if (!newNode || !parent)
		return (NULL);

	if (parent && !parent->left)
		parent->left = newNode;
	else if (parent && parent->left)
	{
		old_left_child = parent->left;
		newNode->left = parent->left;
		parent->left = newNode;
	}
	
	return (newNode);
}
