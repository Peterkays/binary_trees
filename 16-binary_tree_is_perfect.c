#include "binary_trees.h"

unsigned char _leaf_is(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *_leaf_get(const binary_tree_t *tree);
int perfectly_recursive(const binary_tree_t *tree,
		size_t depth_ofLeaf, size_t t_levl);
int binary_tree_is_perfect(const binary_tree_t *tree);


/**
 * depth - Returns the depth of node.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of node.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}
/**
 * binary_tree_is_perfect - looks if a binary tree is perfect.
 * @tree: A pointer of the tree to the root node.
 *
 * Return: If tree is not perfect/NULL 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (perfectly_recursive(tree, depth(_leaf_get(tree)), 0));
}
/**
 * _leaf_is - looks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, 1, else, 0.
 */
unsigned char _leaf_is(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * _leaf_get - Returns a leaf.
 * @tree: A pointer of the tree to the root node to find a leaf in.
 *
 * Return: A pointer to the first leaf.
 */
const binary_tree_t *_leaf_get(const binary_tree_t *tree)
{
	if (_leaf_is(tree) == 1)
		return (tree);
	return (tree->left ? _leaf_get(tree->left) : _leaf_get(tree->right));
}

/**
 * perfectly_recursive - looks if a binary tree is perfect recursively.
 * @tree: A pointer of the tree to the root node to check.
 * @depth_ofLeaf: The depth of one leaf.
 * @t_levl: T_levl of current node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int perfectly_recursive(const binary_tree_t *tree,
		size_t depth_ofLeaf, size_t t_levl)
{
	if (_leaf_is(tree))
		return (t_levl == depth_ofLeaf ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (perfectly_recursive(tree->left, depth_ofLeaf, t_levl + 1) &&
		perfectly_recursive(tree->right, depth_ofLeaf, t_levl + 1));
}
