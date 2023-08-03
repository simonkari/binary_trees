#include "binary_trees.h"

/**
 * binary_tree_leaves - This function counts the number of
 * leaves in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The count of leaves in the tree as a size_t value,
 * or 0 if the tree is empty (NULL).
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
/* check for the tree */
if (!tree)
	return (0);
/* if there are no children on this node, then it's a leaf */
if (!tree->left && !tree->right)
	return (1);
/* recursive call until !tree->left or ->right */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
