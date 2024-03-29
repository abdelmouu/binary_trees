#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 * Return: Balance factor of the tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Computes the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
