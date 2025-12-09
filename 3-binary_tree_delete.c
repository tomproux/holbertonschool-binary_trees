#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_delete- supprimer un binary tree entier
* @tree: pointeur root du binary tree
*
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
