#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep;
	va_list li;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	va_start(li, n);

	for (i = 0 ; i < n ; i++)
	{
		if (va_arg(li, int) == NULL)
			printf("nil");
		if (i == 0)
			printf("%d", va_arg(li, int));
		else
			printf("%s%d", sep, va_arg(li, int));
	}
	va_end(li);
	printf("\n");
}
