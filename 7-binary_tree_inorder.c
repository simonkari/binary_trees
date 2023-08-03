#include "binary_trees.h"
/**
 * binary_tree_inorder - This function traverses a binary tree
 * using an in-order traversal.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to the function to be called for each node
 * visited during the traversal.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
/* check for tree and func */
if (!func || !tree)
	return;
/* call binary_tree_inorder on left */
binary_tree_inorder(tree->left, func);
/* call binary_tree_inorder on tree root */
func(tree->n);
/* call it on right */
binary_tree_inorder(tree->right, func);
}
