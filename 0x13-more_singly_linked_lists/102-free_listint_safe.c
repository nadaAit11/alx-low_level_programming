#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: a double pointr to the head
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *actual, *new;
	size_t s = 0;

	if (head)
	{
		actual = head;
		new = actual->next;
		while (new)
		{
			free(actual);
			actual = new;
			new = new->next;
			s++;
		}
		free(actual);
	}
	return (s);
}
