#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: ptr to parent of the node to create
 * @value: value to insert in the new node
 *
 * Return: ptr to the new node or NULL if memory allocation fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
        return (NULL);

    /* Allocate memory for the new node */
    binary_tree_t *node = calloc(1, sizeof(binary_tree_t));
    if (!node)
        return (NULL);

    /* Initialize the new node */
    node->n = value;
    node->parent = parent;

    /* Check if parent already has a left child */
    if (parent->left)
    {
        node->left = parent->left;
        node->left->parent = node;
    }

    parent->left = node;
    return (node);
}
