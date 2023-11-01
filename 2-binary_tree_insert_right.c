#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_insert_right - insert to the right of a binary tree
 * @parent: parent of the tree
 * @value: value
 * Return: newnode.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	if (parent == NULL)
	{
		free(newnode);
		free(parent);
		return (NULL);
	}
	newnode->right = NULL;
	newnode->right = NULL;
	newnode->n = value;
	if (parent->right)
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->parent = parent;
		newnode->right = temp;
		temp->parent = newnode;
	}
	else
	{
		parent->right = newnode;
		newnode->parent = parent;
	}
	return (newnode);
}
