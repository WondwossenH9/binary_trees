#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * @parent: pointer to the node to insert the right-child into
 * @value: value to store in the new node
 *
 * Return: NULL - if parent is NULL/error occurs, else pointer to new node
 *
 * Description: If parent has a right-child, new node
 *              takes its place and old right-child is set as
 *              the right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
