#include "binary_trees.h"

/**
* binary_tree_is_avl - finds if a binary tree is an avl
* @tree: pointer to the root node of the tree
*
* Return: 1 if tree is avl
*         0 otherwise
*/
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (btia_helper(tree, INT_MIN, INT_MAX));
}

/**
* btia_helper - helper that finds if a binary tree is an avl
* @tree: pointer to the root node of the tree
* @min: minimum value
* @max: maximum value
*
* Return: 1 if tree is avl
*         0 otherwise
*/
int btia_helper(const binary_tree_t *tree, int min, int max)
{
	int path_l, path_r;

	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	path_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	path_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (abs(path_l - path_r) > 1)
		return (0);

	return (btia_helper(tree->left, min, tree->n - 1) &&
		btia_helper(tree->right, tree->n + 1, max));
	/* This is part of the BST check logic */
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: tree to measure the height of
*
* Return: height of the tree
*         0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
