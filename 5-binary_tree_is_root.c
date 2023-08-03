#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is root
 * @node: Pointer to the node being checked.
 *
 * Return: 1 if the node is the root, otherwise return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
/*if node is null return 0 */
if (!node)
	return (0);
/* otherwise return true if node has no parent */
return (!(node->parent));
}
