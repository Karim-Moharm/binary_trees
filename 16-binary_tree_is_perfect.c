#include "binary_trees.h"

/**
 * binary_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
*/
int binary_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree || ((!tree->left) && (!tree->right)))
		return (0);

	left = binary_height(tree->left);
	right = binary_height(tree->right);
	return ((left >= right) ? left + 1 : right + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if ((!tree->left) && (!tree->right))
		return (1);

	left = binary_height(tree->left);
	right = binary_height(tree->right);

	if (left == right)
		return (binary_tree_is_perfect(tree->left) &
				binary_tree_is_perfect(tree->right));

	return (0);
}
