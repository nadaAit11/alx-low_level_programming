#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	char i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
