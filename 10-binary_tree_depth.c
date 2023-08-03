#include "binary_trees.h"

/**
 * binary_tree_depth - This function calculates the depth
 * of a node in a binary tree.
 * @tree: Pointer to the node whose depth is to be calculated.
 * Return: The depth of the node as a size_t value, or 0 if
 * the node is NULL or the tree is empty.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
/* when to return 0 */
if (!(tree && tree->parent))
	return (0);
/* else let's call this one to get depth */
return (binary_tree_depth(tree->parent) + 1);
}
