#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_balance - measures the balance factor of a bt
 * @tree: tree
 * Return: 0 if fail factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	
	if (tree->left && !tree->right)
		return (1);
	if (tree->right && !tree->left)
		return (1);
	return binary_tree_balance(tree->right) + binary_tree_balance(tree->left);
}