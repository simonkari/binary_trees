#include "binary_trees.h"
/**
 * binary_tree_preorder - This function performs a pre-order
 * traversal of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to the function to be called for each node
 * visited during traversal.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
/* if tree or func are NULL, return */
if (!tree || !func)
	return;
/* call func on the value */
func(tree->n);
/* call binary_tree_preorder on the left child */
binary_tree_preorder(tree->left, func);
/* call binary_tree_preorder on the right child */
binary_tree_preorder(tree->right, func);
}
