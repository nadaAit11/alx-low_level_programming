#include "main.h"

/**
 * print_numbers - prints 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
