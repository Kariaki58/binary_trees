#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a tree
 * @node: node
 * Return: return the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	if (node->parent->left == node)
		if (node->parent->parent->left)
			return (node->parent->parent->left);
	if (node->parent->right == node)
		if (node->parent->parent->right)
			return (node->parent->parent->right);
	return (NULL);
}
