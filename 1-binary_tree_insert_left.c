#include "binary_trees.h"
/**
 *
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *new;
  new = malloc (sizeof(binary_tree_t));
  if (new == NULL)
    return (NULL);

  new->n = value;
  parent->left = new;
  new->right = parent;
  return (new);
}
