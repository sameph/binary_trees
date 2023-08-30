#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is -> leaf
 * @node: node to ->check
 *
 * Return: 1 if node is -> leaf
 *         0 if not ->leaf
 *         0 if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
