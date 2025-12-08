#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	/* verifier si la valeur est = a 0 */
	if (value == 0)
	{
		return (NULL);
	}

	/* Allouer un espace memoire */
	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	/* Verifier si l'allocation Ãechoue */
	if (newnode != NULL)
	{
		newnode->n = value;
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
	}

	return (newnode);
}
