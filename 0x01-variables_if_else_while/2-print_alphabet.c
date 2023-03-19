#include <stdio.h>

/**
 * main - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
