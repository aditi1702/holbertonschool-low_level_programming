#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a 'dlistint_t' list
 * @h: Head node of the list to print
 *
 * Return: Number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
