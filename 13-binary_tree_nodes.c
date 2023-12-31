#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree || ((!tree->left) && (!tree->right)))
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (left + right + 1);
}
