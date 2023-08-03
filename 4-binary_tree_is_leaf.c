#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf node.
 * @node: The node to check.
 *
 * Return: 1 if the node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    /* If the node is null, it cannot be a leaf. */
    if (!node)
        return (0);

    /* Return true (1) if neither left nor right children exist. */
    return (node->left == NULL && node->right == NULL);
}
