#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a bt
 * @tree: tree
 * Return: n of tree.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leave_count;

	leave_count = 0;
	if (!tree)
		return (leave_count);
	if (tree->left)
		leave_count++;
	if (tree->right)
		leave_count++;
	if (tree->right == NULL && tree->left == NULL)
		leave_count++;
	return (leave_count);
}
