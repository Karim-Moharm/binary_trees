#include "binary_trees.h"

/**
 * bt_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
*/
int bt_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree)
	{
		left = bt_height(tree->left) + 1;
		right = bt_height(tree->right) + 1;
		return ((left >= right) ? left : right);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return:  measures the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = bt_height(tree->left);

	if (tree->right)
		right = bt_height(tree->right);

	printf("l= %d r=%d\n", left, right);

	return (left - right);
}
