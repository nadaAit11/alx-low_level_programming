#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n : number of characters
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0; j < n ; j++)
			{
				if (i == j)
					_putchar('\\');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
