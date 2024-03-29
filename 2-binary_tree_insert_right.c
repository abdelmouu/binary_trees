#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 * of another node.
 * @parent: Pointer to the node to insert the right child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the newly created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->right != NULL)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}
