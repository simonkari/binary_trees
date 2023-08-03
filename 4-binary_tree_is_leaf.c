#include "binary_trees.h"
/**
 * binary_tree_is_leaf- This function checks if a given node is
 * an endpoint (leaf node).
 * @node: The node to be checked.
 * Return: 1 if the node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
/* if node is null return 0 */
if (!node)
	return (0);
/*otherwise return true if neither left or right leaves exist. */
return ((!node->left) && (!node->right));
}
