#include "binary_trees.h"

/**
 * is_full_recursive - checks for fullness recursively
 * @tree: pointer to tree node to check
 *
 * Return: 0 0r 1 otherrwise
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (is_full_recursive(tree->left) && is_full_recursive(tree->right));
	}
	return (0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0, otherwise return 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (is_full_recursive(tree));
}

#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 or 1 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth;
	int right_depth;

	if (tree == NULL)
	{
		return (0);
	}
	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (binary_tree_is_full(tree) && left_depth == right_depth);
}

