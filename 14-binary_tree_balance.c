#include "binary_trees.h"

/**
 * binary_tree_balance- This function calculates the
 * balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The balance factor of the tree as an int
 * value, or 0 if the tree is empty (NULL).
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	/* declarations */
	int left, right;

	/* check for tree */
	if (!tree)
		return (0);
	/* if tree->left exists, call height func on that side, cast to int */
	left = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	/* if tree->right exists, call height func for it as welli, cast to int */
	right = (tree->right) ? (int)binary_tree_height(tree->right) : -1;
	/* get balance */
	return (left - right);
}
/**
 * binary_tree_height - get the height of tree
 * @tree: Pointer to the root node of the tree to be measured.
 *Return: size_t height or 0
 *
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
