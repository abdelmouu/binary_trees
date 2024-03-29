#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the internal nodes in a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Number of internal nodes in the binary tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nds = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		nds += 1;
	nds += binary_tree_nodes(tree->left);
	nds += binary_tree_nodes(tree->right);
	return (nds);
}
