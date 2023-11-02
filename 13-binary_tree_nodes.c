#include "binary_trees.h"

/**
 * binary_tree_nodes - Sums up the nodes with at lst 1 child.
 * @tree: A pointer to the root node of the tree to sum up the number of nodes.
 *
 * Return: If tree is NULL, returns 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodiz = 0;

	if (tree)
	{
		nodiz += (tree->left || tree->right) ? 1 : 0;
		nodiz += binary_tree_nodes(tree->left);
		nodiz += binary_tree_nodes(tree->right);
	}
	return (nodiz);
}
