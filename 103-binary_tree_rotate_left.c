#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_rotate_left - rotate a bt to the left
 * @tree: tree
 * Return: tree.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *to_right;

	if (!tree || !tree->right)
		return (NULL);

	to_right = tree->right;
	tree->right = to_right->left;
	to_right->parent = tree->parent;
	if (!tree->parent)
	{
	}
	else if (tree == tree->parent->right)
		tree->parent->right = to_right;
	else
		tree->parent->left = to_right;
	tree->parent = to_right;
	to_right->left = tree;

	return (to_right);
}
