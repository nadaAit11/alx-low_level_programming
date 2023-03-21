#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(c[i]);
		i++
	}
	printf("\n");
	return (0);
}
