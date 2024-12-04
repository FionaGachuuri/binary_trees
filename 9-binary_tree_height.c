#include "binary_trees.h"

/**
  * binary_tree_height -measures height of e  binary tree
  * @tree: pointer to the root node of the
  * tree to measure the height.
  * Return: height of the tree otherwise 0
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;


	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	else
		left_height = 0;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	else
		right_height = 0;

	return ((left_height > right_height) ? left_height : right_height);
}
