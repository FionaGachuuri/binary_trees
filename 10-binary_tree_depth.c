#include "binary_trees.h"
/**
 * binary_tree_depth - depth of specified node from root
 * @tree: node to measure the depth
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
