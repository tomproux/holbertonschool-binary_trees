#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	value = 0;

	/* Allouer un espace memoire */
	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	/* Verifier si l'allocation Ãechoue */
	while (newnode != NULL)
	{
		value++;
		newnode->n = value;
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
	}
	if (value != 0)
	{
		return (NULL);
	}
	return (newnode);
}
