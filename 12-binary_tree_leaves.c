#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the leaves in a bt
 * @tree: tree
 * Return: n of tree.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
