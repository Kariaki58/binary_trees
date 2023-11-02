#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree
 * Return: 0 || 1 for true
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int rcount;
	int lcount;


	rcount = 0;
	lcount = 0;
	if (!tree)
		return (0);
	if (tree->left)
		lcount = 1 + binary_tree_is_full(tree->left);
	if (tree->right)
		rcount = 1 + binary_tree_is_full(tree->right);
	return (rcount == lcount);
}
