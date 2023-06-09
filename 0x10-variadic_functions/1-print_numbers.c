#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
	char *sep;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(li, n);
	for (i = 0 ; i < n ; i++)
	{
		if (i == 0)
			printf("%d", va_arg(li, int));
		else
			printf("%s%d", sep, va_arg(li, int));
	}
	va_end(li);
	printf("\n");
}
