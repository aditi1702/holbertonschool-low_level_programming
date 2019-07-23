#include "binary_trees.h"

/**
 * binary_tree_is_root - Finds if a given node is a root in a binary tree
 * @node: Node to check
 *
 * Return: 1 if node is root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left != NULL) && (node->right != NULL))
		return (1);
	return (0);
}
