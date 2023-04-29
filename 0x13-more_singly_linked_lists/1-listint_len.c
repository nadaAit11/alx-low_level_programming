#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
