#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_rotate_right - rotate a tree to the right
 * @tree: tree
 * Return: returns tree rotate
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *to_left;

	if (!tree || !tree->left)
		return (NULL);
	to_left = tree->left;
	if (to_left->right)
		to_left->right->parent = tree;
	tree->left = to_left->right;
	to_left->parent = tree->parent;
	if (!tree->parent)
	{}
	else if (tree == tree->parent->right)
		tree->parent->right = to_left;
	else
		tree->parent->left = to_left;
	tree->parent = to_left;
	to_left->right = tree;
	return (to_left);
}
