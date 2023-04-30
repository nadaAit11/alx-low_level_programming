#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t s = 0;
	listint_t *temp = head;

	if (!head)
		exit(98);
	while (temp)
	{
		printf("%i", temp->n);
		temp = temp->next;
		s++;
	}
	return (s);
}
