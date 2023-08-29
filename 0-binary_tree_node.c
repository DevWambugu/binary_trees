#include "binary_trees.h"
/**
* binary_tree_node - creates a binary tree node
* @parent: pointer to the parent node
* @value: the value of the node
*
*Return: returns a pointer to the node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node;

	New_node = malloc(sizeof(binary_tree_t));
	if (New_node == NULL)
		return (NULL);

	New_node->n = value;
	New_node->parent = parent;
	New_node->left = NULL;
	New_node->right = NULL;
	return (New_node);
}
