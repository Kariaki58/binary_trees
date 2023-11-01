#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - find the size of a tree
 * @tree: tree
 * Return: size of a tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 1;
	if (!tree)
		return (0);
	size = binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1;
	return (size);
}
