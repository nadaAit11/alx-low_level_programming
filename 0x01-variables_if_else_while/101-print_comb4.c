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
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i + 1 ; j < 10 ; j++)
		{
			for (k = j + 1 ; k < 10 ; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
