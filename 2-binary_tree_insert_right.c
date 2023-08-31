#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert a node in the right of the parent
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: NULL if it fails or the new nodie address
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = binary_tree_node(parent, value);

	if (!newNode || !parent)
		return (NULL);

	if (!parent->left)
		parent->right = newNode;
	else if (parent->right)
	{
		newNode->right = parent->left;
		parent->right = newNode;
	}

	return (newNode);
}
