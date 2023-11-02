#include "binary_trees.h"

/**
 * binary_tree_height - evaluates height of a binary tree.
 * @tree: A pointer of the tree to be measured the height of to the root node.
 *
 * Return: If tree is NULL, return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t pk = 0, kp = 0;

		pk = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		kp = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((pk > kp) ? pk : kp);
	}
	return (0);
}
