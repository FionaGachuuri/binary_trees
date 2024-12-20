#include "binary_trees.h"

/**
  * binary_tree_sibling -finds the sibling of a node
  * @node: pointer to the to find the sibling
  * Return: pointer to the sibling node
  * or NULL if  there is no sibling  or in e case of an invalid input
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
