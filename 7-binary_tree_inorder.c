#include "binary_trees.h"

/**
 * binary_tree_inorder - Using in-oerder transvesal it goes through a binary tree.
 * @tree: A pointer of the tree to transverse the root node.
 * @func: A pointer to a fun to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
