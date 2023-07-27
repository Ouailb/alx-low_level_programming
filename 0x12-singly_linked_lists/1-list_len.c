#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t ct = 0;

	for (; h != NULL; ct++)
	{
		h = h->next;
	}

	return (ct);
}
