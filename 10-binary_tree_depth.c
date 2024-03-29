#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @node: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, 0 if node is NULL or has no parent
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node && node->parent)
	{
		depth++;
		node = node->parent;
	}

	return (depth);
}
