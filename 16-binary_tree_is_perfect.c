#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * l_height - height of a binary tree
 * @tree: tree
 * Return: height of tree
*/
size_t l_height(const binary_tree_t *tree)
{
	size_t left_height = 0;

	if (tree == NULL)
		return (0);
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

	if (tree == NULL)
		return (0);
	if (tree->right)
		right_height = r_height(tree->right) + 1;
	return (right_height);
}

/**
 * count_leaves - counts the leaves in a bt
 * @tree: tree
 * Return: n of tree.
*/
size_t count_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	return (count_leaves(tree->right) + count_leaves(tree->left));
}


/**
 * count_tree_nodes - counts the nodes with at least 1 child
 * @tree: tree
 * Return: count.
*/
size_t count_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return count_tree_nodes(tree->right) + count_tree_nodes(tree->left) + 1;
}

/**
 * binary_tree_is_perfect - checking a bt is perfect
 * @tree: tree
 * Return: 0 || 1.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count_tree_node, count_tree_leave, n_nodes;
	if (!tree)
		return(0);
	count_tree_leave = count_leaves(tree);
	count_tree_node = count_tree_nodes(tree);
	
	n_nodes = (2 * count_tree_leave) - 1;
	printf("count_nodes  %d\n", count_tree_node);
	printf("n_nodes %d\n", n_nodes);
	return ((n_nodes == count_tree_node) && (r_height(tree) == l_height(tree)));
}