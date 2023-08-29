#include "binary_trees.h"
/**
*binary_tree_insert_left - inserts a child node to the left of parent
*@parent: pointer to the parent node
*@value: the value of the new child node
*
*Return: a pointer to the new child node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_insert_left *New_node;

	New_node = malloc(sizeof(binary_tree_insert_left));
	if (parent == NULL)
