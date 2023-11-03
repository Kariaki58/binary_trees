#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * height - height of a binary tree
 * @tree: tree
 * Return: height of tree
*/
size_t height(const binary_tree_t *tree)
{
	size_t l_height, r_height, max_height;

	if (!tree)
		return (0);
	if (tree->left)
		l_height = 1 + height(tree->left);
	else
		l_height = 0;
	if (tree->right)
		r_height = 1 + height(tree->right);
	else
		r_height = 0;
	if (l_height > r_height)
		max_height = l_height;
	else
		max_height = r_height;
	return (max_height);
}

/**
 * binary_tree_balance - measures the balance factor of a bt
 * @tree: tree
 * Return: 0 if fail factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);
	if (tree->left)
		l_height = 1 + height(tree->left);
	else
		l_height = 0;
	if (tree->right)
		r_height = 1 + height(tree->right);
	else
		r_height = 0;
	return (l_height - r_height);
}
