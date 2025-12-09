#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_leaf- function that checks if a node is a leaf
* @node: pointeur sur une node a checker
* Return 1 if node is leaf (0 si NULL)
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
