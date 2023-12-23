#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node to the left of parent node
 *@parent: pointer to the first node in the tree
 *@value: the value for inserted node
 *Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
	return (NULL);
	if (parent->left != NULL)
	{
	new->left = parent->left;
	parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
