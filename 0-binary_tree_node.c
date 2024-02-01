#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 *@parent: a pointer to the parent node of the node to be created
 *@value: the value of the new node
 * Return: Your function must return a pointer to the new node or
 * NULL if otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
