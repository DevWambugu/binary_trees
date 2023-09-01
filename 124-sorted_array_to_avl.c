#include "binary_trees.h"

/**
 * _sorted_array_to_avl - helper func for sorted_array_to_avl
 * @array: pointer to the first element of the array to be converted
 * @start: starting index
 * @end: ending index
 * @parent: pointer to the parent node
 * Return: the newly created node
 */
avl_t *_sorted_array_to_avl(int *array, int start, int end, avl_t *parent)
{
	avl_t *new;
	int mid;

	if (start > end)
		return (NULL);
	mid = (start + end) / 2;
	new = calloc(1, sizeof(avl_t));
	if (!new)
		return (NULL);
	new->n = array[mid];
	new->parent = parent;
	new->left = _sorted_array_to_avl(array, start, mid - 1, new);
	new->right = _sorted_array_to_avl(array, mid + 1, end, new);
	return (new);
}


/**
 * sorted_array_to_avl - builds an AVL tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size:  number of element in the array
 * Return: pointer to the root node of the created AVL tree, or NULL on failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{

	if (!array)
		return (NULL);
	return (_sorted_array_to_avl(array, 0, size - 1, NULL));
}
