#include "binary_trees.h"

/**
 * binary_tree_node - binary tree node created.
 * @parent: create pointer to parent of the node.
 * @value: fresh node value to put.
 *
 * Return: If an error occurs – NULL lest a pointer to the fresh node.
 *
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh;

	fresh = malloc(sizeof(binary_tree_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = value;
	fresh->parent = parent;
	fresh->left = NULL;
	fresh->right = NULL;

	return (fresh);
}

