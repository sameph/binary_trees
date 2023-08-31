#include "binary_trees.h"
/**
 * binary_tree_height - measure-height of-binary-tree.
 *@tree: The  pointer to the root-node of tree to measure- height.
 * Return: if the  tree is NULL and  always function must return 0.or nothing
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
/**
 * binary_tree_size - measure-size of  the  binary-tree.
 *@tree: the  pointer to the root node of the tree to measure-size.
 * Return: if the  tree is NULL and  always  must return 0.or nothing
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
/**
 * binary_tree_is_perfect - checks- binary tree- perfect.
 *@tree:  the pointer to the root node of the tree- check.
 * Return: ifthe tree is NULl and always the  function must return 0.or nothing
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	perfect_size = (1 << (h + 1)) - 1;
	if (perfect_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
