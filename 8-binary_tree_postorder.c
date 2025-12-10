#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - print elements of tree using post-order traversal
 * @tree: tree to go through
 * @func: function to use
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* verifier que les pointeurs existent */
	if (!tree || !func)
		return;

        /* parcours du sous-arbre gauche puis du sous-arbre droit */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	/* on traite la valeur du noeud en premier */
        func(tree->n);
}
