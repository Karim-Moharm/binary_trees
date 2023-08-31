#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to count leaves of BT.
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && (!tree->right))
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
