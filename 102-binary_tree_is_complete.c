#include "binary_trees.h"
#include <stdio.h>
#include <stdio.h>

/**
 * binary_tree_is_complete - binary tree is complete
 * @tree: tree
 * Return: newnode.
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int rcount;
	int lcount;


	rcount = 0;
	lcount = 0;
	if (!tree)
		return (0);
	if (tree->left)
		lcount = 1 + binary_tree_is_complete(tree->left);
	if (tree->right)
		rcount = 1 + binary_tree_is_complete(tree->right);
	return (rcount == lcount);
}
