#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checking whether a node is a leaf of binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If node is a leaf - 1.
 *         lest - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

