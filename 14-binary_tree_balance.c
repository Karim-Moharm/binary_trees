#include "binary_trees.h"

/**
 * binary_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
*/
int bt_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = bt_height(tree->left);
	right = bt_height(tree->right);
	return ((left >= right) ? left + 1 : right + 1);
}

/**
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree)
	{

		left = bt_height(tree->left);
		right = bt_height(tree->right);
	
		printf("l= %d r=%d\n", left, right);
	
		return (left - right);
	}
	return (0);
}
