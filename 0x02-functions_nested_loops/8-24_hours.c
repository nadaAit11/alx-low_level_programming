#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *
 *Return:void
 */

void jack_bauer(void)
{
	int s = 0;
	int m = 0;
	int h = 0;
	
	while (h < 24)
	{
	if (s == 9)
	{
		m++;
		s=0;
		if (m == 59)
		{
			s = 0;
			m = 0;
			h++;
		}
	}
	s++;
	if (h < 10)
		_putchar('0');
	_putchar(h + '0');
	_putchar(':');
	_putchar(m + '0');
	_putchar(s + '0');
	_putchar('\n');
	}
}
