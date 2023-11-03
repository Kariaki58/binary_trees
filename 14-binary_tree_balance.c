#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * l_height - height of a binary tree
 * @tree: tree
 * Return: height of tree
*/
size_t l_height(const binary_tree_t *tree)
{
	size_t left_height = 0;

	if (tree->left)
		left_height = l_height(tree->left) + 1;
	return (left_height);
}

/**
 * r_height - height of a binary tree
 * @tree: tree
 * Return: height of tree
*/
size_t r_height(const binary_tree_t *tree)
{
	size_t right_height = 0;
	
	if (tree->right)
		right_height = r_height(tree->right) + 1;
	return (right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a bt
 * @tree: tree
 * Return: 0 if fail factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (l_height(tree) - r_height(tree));
}
