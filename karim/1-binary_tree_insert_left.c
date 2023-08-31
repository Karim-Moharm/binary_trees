#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert a node in the left of the parent
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: NULL if it fails or the new nodie address
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = binary_tree_node(parent, value);

	if (!newNode || !parent)
		return (NULL);

	if (!parent->left)
		parent->left = newNode;
	else if (parent->left)
	{
		newNode->left = parent->left;
		parent->left = newNode;
	}

	return (newNode);
}
