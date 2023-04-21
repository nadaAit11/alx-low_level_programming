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
	char *sep, *e;
	va_list li;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	va_start(li, n);

	for (i = 0 ; i < n ; i++)
	{
		e = va_arg(li, char *);

		if (e == NULL)
			e = "nil";
		if (i == 0)
			printf("%s", e);
		else
			printf("%s%s", sep, e);
	}
	va_end(li);
	printf("\n");
}
