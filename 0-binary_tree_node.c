#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a binary tree node.
 * @parent: A pointer to the parent of the node to be created.
 * @value: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node or NULL if the
 * creation fails.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
/* declarations */
binary_tree_t *node = NULL;

/* calloc for the node */
node = calloc(1, sizeof(binary_tree_t));
/* check for calloc fail */
if (!node)
	return (NULL);
/* assign stuff */
node->parent = parent;
node->n = value;
return (node);
}
