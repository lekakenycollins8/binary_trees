#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree:  pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. 
 * The value in the node must be passed as a parameter to this function.
 *
 * If tree or func is NULL, do nothing
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	/* call function on current node */
	func(tree->n);
	/* traverse left */
	binary_tree_preorder(tree->left, func);
	/* traverse right */
	binary_tree_preorder(tree->right, func);
}
