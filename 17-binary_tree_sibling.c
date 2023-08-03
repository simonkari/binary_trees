#include "binary_trees.h"

/**
 * binary_tree_sibling- find a sibling of a node
 * @node: Pointer to the node whose sibling is to be found.
 * Return: Pointer to the sibling of the given node, or NULL
 * if the node has no sibling (parent has only one child).
 *
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* if no node or no parent, return NULL */
	if (!node || !node->parent)
		return (NULL);
	/* otherwise, if this is the left child, return the right, or vice versa */
	return (node->parent->left ==
			node ? node->parent->right : node->parent->left);
}
