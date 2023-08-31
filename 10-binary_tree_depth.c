#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: a pointer to the root node of the tree to measure the depth.
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent = 0;

	if (!tree || (!tree->parent))
		return (0);

	parent = binary_tree_depth(tree->parent);
	return (parent + 1);
}
