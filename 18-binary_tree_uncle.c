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
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	grandparent =  node->parent->parent;

	if (!grandparent->left || !grandparent->right)
		return (NULL);
	if (grandparent->left == node->parent)
		return (grandparent->right);
	return (grandparent->left);
}
