#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *
 *Return:void
 */

void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h < 24)
	{
		if (m == 59)
		{
			m = 0;
			h++;
		}
		else
			m++;

		if (h < 10)
			_putchar('0');
		_putchar(h + '0');
		_putchar(':');
		if (m < 10)
			_putchar('0');
		_putchar(m + '0');
		_putchar('\n');
	}
}
