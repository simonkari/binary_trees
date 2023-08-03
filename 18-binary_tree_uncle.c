#include "binary_trees.h"

/**
 * binary_tree_sibling- find a sibling of a node
 * @node: Pointer to the node whose sibling is to be found.
 * Return:  Pointer to the sibling node of the given node,
 * or NULL if the node has no sibling (i.e., if the node
 * is the only child of its parent).
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
/**
 * binary_tree_uncle- find the uncle of a node
 * @node: ptr to node
 * Return: ptr to uncle or NULL
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/* check node */
if (!node)
	return (NULL);
/* an uncle is just a parent's sibling */
return (binary_tree_sibling(node->parent));
}
