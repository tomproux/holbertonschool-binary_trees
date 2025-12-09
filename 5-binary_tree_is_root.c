#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_root- function that checks if a given node is a root
* @node: pointeur vers le node
* Return 0 (1 if is a root)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
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
