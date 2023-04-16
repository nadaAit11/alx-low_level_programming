#include "main.h"
/**
 * factorial - returns the factorial of a given number;
 * @n: variable
 * Return: If n is lower than 0, -1, otherwise returns the factorial of n.
 */
int factorial(int n)
{
	int f = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	f = n * factorial(n - 1);
	return (f);
}
