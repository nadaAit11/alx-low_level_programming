#include <stdio.h>

/**
 * main - comb
 *
 * Return: always 0
 */
int main(void)
{

	int i;
	int j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			putchar(i + '0');
			putchar(' ');
			putchar(j + '0');
			if (i + j != 198)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
