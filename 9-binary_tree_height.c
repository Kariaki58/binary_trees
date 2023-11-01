#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - height of a binary tree
 * @tree: tree
 * Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		right_height = binary_tree_height(tree->left) + 1;
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (right_height > left_height)
		return (right_height);
	return (left_height);
}
