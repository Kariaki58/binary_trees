#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: node position
 * Return: 0 | 1
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}