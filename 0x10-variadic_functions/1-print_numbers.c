#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	for (i = 0 ; i < n ; i++)
	{
		printf("%d%c",va_arg(li, int), separator);
	}
	va_end(li);
	printf('\n');
}
