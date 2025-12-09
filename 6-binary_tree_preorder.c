#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* verifier que les pointeurs existent */
	if (!tree || !func)
		return;
	/* on traite la valeur du noeud en premier */
	func(tree->n);

	/* parcours du sous-arbre gauche puis du sous-arbre droit */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
