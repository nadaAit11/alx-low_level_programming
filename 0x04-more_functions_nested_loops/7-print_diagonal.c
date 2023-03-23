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
			while (n--)
				_putchar(' ');

			_putchar('_');
		}
	}
	_putchar('\n');
}
