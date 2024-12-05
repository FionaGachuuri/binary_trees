#include "binary_trees.h"

/**
  * binary_tree_size -function that measures
  * the size of a binary tree
  * @tree: pointer to the node of the tree to measure the size
  * Return: if tree is NULL return 0
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_size(tree->left);
	size_t right = binary_tree_size(tree->right);

	return (left + right + 1);
}
