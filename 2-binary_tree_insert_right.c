#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child
 * of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 * Note: f parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		int n = parent->right->n;

		parent->right->n = value;
		parent->right->right = binary_tree_node(parent->right, n);
	}

	return (NULL);
}
