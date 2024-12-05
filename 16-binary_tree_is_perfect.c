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

/**
  * binary_tree_is_perfect -checks if a binary tree is perfect
  * @tree: pointer to the root node of the tree to check
  * Return: 1 if height of tree is perfect, 0 otherwise
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	size_t height, size, expected_size;


	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	expected_size = (1 << height) - 1;

	return (size == expected_size);
}
