#include "binary_trees.h"

/**
 * binary_tree_preorder - using pre-order traversal it goes through the binary tree.
 * @tree: the pointer of the tree to traverse of the root node.
 * @func: A pointer to a funtn to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

