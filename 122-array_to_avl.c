#include "binary_trees.h"

/**
 * array_to_avl - builds an AVL tree
 *
 * @array: pointer to the first element
 * @size: number of elements in the array
 * Return: pointer to the root node of the AVL tree
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree;
	size_t i;

	tree = NULL;

	for (i = 0; i < size; i++)
	{
		avl_insert(&tree, array[i]);
	}

	if (i == size)
		return (tree);
	return (NULL);
}
