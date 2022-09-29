#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - it creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: the value to put
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode)
	{
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->parent = parent;
	}

	return (newNode);
}
