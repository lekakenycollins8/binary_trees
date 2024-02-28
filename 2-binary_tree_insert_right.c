#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure 
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	new_right_node = binary_tree_node(parent, value);
	if (parent == NULL)
	{
		return (NULL);
	}
	if (new_right_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}
	parent->right = new_right_node;
	return (new_right_node);
}
