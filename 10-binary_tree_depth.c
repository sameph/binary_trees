#include "binary_trees.h"

/**
 * binary_tree_depth - measure  depth of the  node in the binary-tree.
 *@tree:  the pointer to the node to measure- depth.
 * Return: if the tree is NULL,  must return 0.zero or nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
