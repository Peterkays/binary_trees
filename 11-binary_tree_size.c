#include "binary_trees.h"

/**
 * binary_tree_size - Evaluates the size/scope of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t scope = 0;

	if (tree)
	{
		scope += 1;
		scope += binary_tree_size(tree->left);
		scope += binary_tree_size(tree->right);
	}
	return (scope);
}