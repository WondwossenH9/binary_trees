#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: pointer to root node
 *
 * Return: number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number_of_leaves = 0;

	if (tree)
	{
		number_of_leaves += (!tree->left && !tree->right) ? 1 : 0;
		number_of_leaves += binary_tree_leaves(tree->left);
		number_of_leaves += binary_tree_leaves(tree->right);
	}
	return (number_of_leaves);
}
