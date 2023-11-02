#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_trees_ancestor - find the lowest ancestor of a binary tree
 * @first: first node
 * @second: second node
 * Return: lowest ancestor.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent == second->parent->parent)
		return first->parent;
	return (binary_trees_ancestor(first->parent, second));
}
