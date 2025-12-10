#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - print elements of tree using in-order traversal
 * @tree: tree to go through
 * @func: function to use
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* verifier que les pointeurs existent */
	if (!tree || !func)
		return;
	/*parcours du sous-arbre gauche*/
	binary_tree_inorder(tree->left, func);

        /* on traite la valeur du noeud en premier */
	func(tree->n);

	/* parcours du sous-arbre droit */
	binary_tree_inorder(tree->right, func);
}
