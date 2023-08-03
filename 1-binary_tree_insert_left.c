#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new node and inserts
 * it as the left-child of a given parent node.
 * @parent: A pointer to the parent node.
 * @value: The value to be inserted into the new node.
 * Return: A pointer to the new node if successful, or NULL if the insertion fails.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* declarations */
	binary_tree_t *node = NULL;

	/* check that parent is not NULL */
	if (!parent)
		return (NULL);
	/* calloc for node */
	node = calloc(1, sizeof(binary_tree_t));
	/* check for calloc fail */
	if (!node)
		return (NULL);
	/* assign things */
	node->n = value;
	node->parent = parent;
	/* check for existing left child */
	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;
	return (node);
}
