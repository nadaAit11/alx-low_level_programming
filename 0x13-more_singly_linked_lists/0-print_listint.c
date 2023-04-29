#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a pointer to a list of inetegers
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%i\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
