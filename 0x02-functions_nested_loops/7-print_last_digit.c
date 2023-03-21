#include "main.h"

/**
 * print_last_digit - print_last_digit
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	int m;
       	m = n % 10;

	if ( m < 0)
		m = -m;
	
	return (m);
}
