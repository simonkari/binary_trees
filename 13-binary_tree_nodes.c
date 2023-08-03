#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the number of nodes
 * in a binary tree that have at least one child.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The count of nodes with children in the tree as a
 * size_t value, or 0 if the tree is empty (NULL).
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
/* check for the tree */
if (!tree)
	return (0);
/* if node has babies it counts */
if (tree->left || tree->right)
	return (1 + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
return (0);
}
