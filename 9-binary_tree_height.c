#include "binary_trees.h"

/**
* binary_tree_height - this function calculates the height of a tree.
* @tree: this represents the tree whoose height is to be known.
* Return: Height of the tree or 0 if tree is NULL.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_node_height;

	size_t right_node_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_node_height = binary_tree_height((*tree).left);

	right_node_height = binary_tree_height((*tree).right);

	return ((left_node_height > right_node_height) ? left_node_height : right_node_height) + 1;
}
