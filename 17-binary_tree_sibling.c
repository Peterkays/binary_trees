#include "binary_trees.h"

/**
 * binary_tree_sibling - Identifies the sibling of a node.
 *
 * @node: A pointer to find sibling of the node.
 *
 * Return: If node is NULL/no sibling - NULL.
 *         Else - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
