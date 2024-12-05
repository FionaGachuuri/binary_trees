#include "binary_trees.h"


/**
 * power - Computes the power of a number
 * @base: Base number
 * @exp: Exponent
 * Return: base raised to the power exp
 */

size_t power(size_t base, size_t exp)
{
	size_t result = 1;

	while (exp > 0)
	{
		result *= base;
		exp--;
	}

	return (result);
}


/**
  * binary_tree_is_perfect -function that checks if
  * a binary tree is perfect
  * @tree:  pointer to the root node of the tree to check
  * Return: 0 if tree is NULL and 1 if perfect
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree) - 1;
	size = binary_tree_size(tree);
	expected_size = power(2, height + 1) - 1;

	return (size == expected_size);
}



