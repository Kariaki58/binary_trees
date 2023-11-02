#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * depth_node - depth_node of the tree
 * @node: node
 * Return: depth_node.
*/
size_t depth_node(const binary_tree_t *node)
{
	int depth = 0;

	if (!node)
		return (0);
	if (node->parent)
	{
		depth = depth_node(node->parent) + 1;
	}
	return (depth);
}

/**
 * binary_trees_ancestor - find the lowest ancestor of a binary tree
 * @first: first node
 * @second: second node
 * Return: lowest ancestor.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	int depth_1, depth2;

	if (!first || !second)
		return (NULL);

	depth_1 = depth_node(first);
	depth2 = depth_node(second);
	while (depth_1 > depth2)
	{
		first = first->parent;
		depth_1--;
	}
	while (depth2 > depth_1)
	{
		second = second->parent;
		depth2--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
