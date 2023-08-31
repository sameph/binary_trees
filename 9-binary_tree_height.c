#include "binary_trees.h"

/**
 * binary_tree_height - measure  height of the  binary-tree.
 *@tree: the  pointer to the root-node of the tree measure the height.
 * Return: if tree is NULL,  function must return 0.(nothing)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
