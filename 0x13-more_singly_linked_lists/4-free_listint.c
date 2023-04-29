#include "lists.h"

/**
 * free_listint - frees listint_t list.
 * @head: pointer to the first element of the list.
 * Return: void
 **/

void free_listint(listint_t *head)
{
	listint_t *new, *actual;

	if (head)
	{
		actual = head;
		new = head->next;
		while (new)
		{
			free(actual);
			actual = new;
			new = new->next;
		}
		free(actual);
	}
}
