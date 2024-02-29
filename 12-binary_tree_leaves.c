#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, return 0 otherwise return leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf;
	size_t right_leaf;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);
	return (left_leaf + right_leaf);
}
