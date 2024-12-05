#include "binary_trees.h"

/**
  * binary_tree_is_perfect -checks if a binary tree is perfect
  * @tree: pointer to the root node of the tree to check
  * Return: height of tree, but 0 if tree is NULL
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
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

	if (left_height != right_height)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	return (0);
}
