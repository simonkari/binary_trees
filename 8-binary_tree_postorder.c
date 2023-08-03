#include "binary_trees.h"

/**
 * binary_tree_postorder - This function traverses a binary
 * tree using a post-order traversal.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to the function to be called for each node
 * visited during the traversal.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
/* check for tree and func */
if (!tree || !func)
	return;
/* call on left */
binary_tree_postorder(tree->left, func);
/* call on right */
binary_tree_postorder(tree->right, func);
/* call on root */
func(tree->n);
}
