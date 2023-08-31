#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (!tree)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return lh > rh ? lh + 1 : rh + 1;
}
