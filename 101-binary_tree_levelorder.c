#include "binary_trees.h"
#include <stdlib.h>

/**
 * tree_size - find the size of a tree
 * @tree: tree
 * Return: size of tree
 */
size_t tree_size(binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}

/**
 * conversion - conversion
 * @tree: tree
 * @array: tree array
 * @i: i
 */
void conversion(binary_tree_t *tree, int *array, int i)
{
	if (!tree)
		return;
	array[i] = tree->n;
	if (tree->left)
		conversion(tree->left, array, 2 * i + 1);
	if (tree->right)
		conversion(tree->right, array, 2 * i + 2);
}

/**
 * binary_tree_levelorder - get node at a level
 * @tree: tree
 * @func: func
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int size, i;
	int *array;

	if (!tree || !func)
		return;
	i = 0;
	size = tree_size((binary_tree_t *)tree);
	array = malloc(size * sizeof(int));
	conversion((binary_tree_t *)tree, array, 0);
	
	while (i < size)
	{
		func(array[i]);
		i++;
	}
	free(array);
}
