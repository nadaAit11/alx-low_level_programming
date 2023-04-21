#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of parameters
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list li;

	if (n == 0)
		return (0);

	va_start(li,n);

	for (i = 0 ; i < n ; i = va_arg(li, int))
	{
		s += i;
	}
	va_end(li);

	return (s);
}
