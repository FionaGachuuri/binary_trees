#include "binary_trees.h"

/**
  * binary_tree_delete -function that deletes an
  * entire binary tree
  * @tree: pointer to the root node of the tree to delete.
  */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(binary_tree_t->left);
	binary_tree_delete(binary_tree_t->right);
	printf("\n Deleting node: %d", binary_tree_t->data);
	free(tree);
}
