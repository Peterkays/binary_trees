#include "binary_trees.h"
/**
 * binary_tree_height - Evaluates height.
 * @tree: A pointer of the tree to measure to the root node.
 *
 * Return: If tree is NULL, return 0, else height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t pk = 0, kp = 0;

		pk = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		kp = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((pk > kp) ? pk : kp);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor.
 * @tree: A pointer of the node of the tree to measure.
 *
 * Return: If tree is NULL, return 0, else balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}



