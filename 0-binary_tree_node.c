#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: ptr to the parent of the node to create
 * @value: the value to add at the node
 *
 * Return: ptr to new node or NULL if memory allocation fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /* Allocate memory for the new node */
    binary_tree_t *node = calloc(1, sizeof(binary_tree_t));

    /* Check for memory allocation failure */
    if (!node)
    {
        fprintf(stderr, "Memory allocation failed for binary tree node.\n");
        return (NULL);
    }

    /* Initialize the node */
    node->parent = parent;
    node->n = value;

    return (node);
}
