#include "binary_trees.h"

/**
 * binary_tree_size - This function calculates the size
 * (number of nodes) of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 *	Return: The size of the tree as a size_t value,
 or 0 if the tree is empty (NULL).
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
/* got to have a tree */
if (!tree)
	return (0);
/* else, add the sizes add root */
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
