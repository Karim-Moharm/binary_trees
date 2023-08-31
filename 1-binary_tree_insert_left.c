#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 * Note: f parent already has a left-child,
 * the new node must take its place, and
 * the old left-child must be set as the left-child of the new node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		int n = parent->left->n;

		parent->left->n = value;
		parent->left->left = binary_tree_node(parent->left, n);
	}
	return (NULL);
}
