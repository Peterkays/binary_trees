#include "binary_trees.h"

/**
 * binary_tree_insert_right - put node as right-child
 *                            of additionals in a binary tree.
 * @parent: right-child pointer to insert.
 * @value: fresh node value to store.
 *
 * Return: If parent is NULL - NULL.
 *         lest - fresh node pointer.
 *
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh;

	if (parent == NULL)
		return (NULL);

	fresh = binary_tree_node(parent, value);
	if (fresh == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		fresh->right = parent->right;
		parent->right->parent = fresh;
	}
	parent->right = fresh;

	return (fresh);
}

