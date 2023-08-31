#include "binary_trees.h"

/**
 * binary_tree_size - measurethe size of the given  a binary-tree.
 *@tree:the  pointer to the root node of the tree to measure-size.
 * Return: if the  tree is NULL always  must return 0. nothing
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t n_left, n_right;

		n_left = binary_tree_size(tree->left);
		n_right = binary_tree_size(tree->right);
		return (1 + n_left + n_right);
	}
}
