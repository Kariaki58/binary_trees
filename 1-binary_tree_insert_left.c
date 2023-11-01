#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - insert node to the left of the treee
 * @parent: parent of the tree
 * @value: value of the node
 * Return: newnode
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;
	if (parent->left)
	{
		temp = parent->left;
		parent->left = newnode;
		newnode->parent = parent;
		newnode->left = temp;
		temp->parent = newnode;
		printf("%d\n", temp->n);
	}
	else
	{
		parent->left = newnode;
		newnode->parent = parent;
	}
	return (newnode);
}
