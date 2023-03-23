#include "main.h"

/**
 * print_line - print a diagonal
 * @n : number of characters
 * Return:void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
