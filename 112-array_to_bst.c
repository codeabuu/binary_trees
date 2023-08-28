#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of elements in the array
 * Return: A pointer to the root node of the created BST
 *         NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i = 0;
	bst_t *root = NULL;

	for (; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}

	return (root);
}
