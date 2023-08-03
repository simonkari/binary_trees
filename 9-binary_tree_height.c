#include "binary_trees.h"

/**
 * binary_tree_height - This function calculates the height
 * of a binary tree.
 * @tree: Pointer to the root node of the tree to be measured.
 *Return: The height of the tree as a size_t value, or 0 if
 the tree is empty (NULL).
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
/* declarations */
size_t lh, rh;

/* tree is null or a loner */
if (!tree || (!tree->left && !tree->right))
	return (0);
/* measure both */
lh = binary_tree_height(tree->left);
rh = binary_tree_height(tree->right);
/* compare and return tallest */
return ((lh > rh ? lh : rh) + 1);
}
