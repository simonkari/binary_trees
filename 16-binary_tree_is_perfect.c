#include "binary_trees.h"

/**
 * binary_tree_is_perfect- This function checks if a tree is perfect,
 * meaning all interior nodes have two
 * children and all leaves have the same depth or same level
 * @tree:  pointer to the root of the tree.
 * Return: 1 if the tree is perfect, 0 if it is not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
/* if tree is null return 0 */
if (!tree)
	return (0);
/* if one node, it's perfect */
if (!tree->left && !tree->right)
	return (1);
/* if different heights it's not perfect */
if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	return (0);
/* if all it satisfied on recursive calls */
if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
	return (1);
/* the compiler made me add this */
return (0);
}
/**
 * binary_tree_height - Get the height of tree
 * @tree: The tree to measure
 *Return: size_t height or 0
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
