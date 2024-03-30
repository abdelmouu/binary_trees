#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of
 * two nodes in a binary tree.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *tm_ptr;

	if (first == NULL || second == NULL)
		return (NULL);
	tm_ptr = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = tm_ptr;
		first = first->parent;
	}
	return (NULL);
}
