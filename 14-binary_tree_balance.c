#include "binary_trees.h"

/**
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	
	if (left > right)
		left += 1;
	else
		right += 1;

	return (left - right);
}
