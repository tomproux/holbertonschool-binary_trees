#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right- permet de creer une branche a droite
* @parent: pointeur du node parent
* @value: valeur de la nouvelle branche
* Return: newnode
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* verifie si parent == NULL*/
	if (parent == NULL || value == 0)
		return (NULL);

	/*alloue un espace memoire*/
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* verifie le cas ou le parent a deja un enfant droite*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
