#include "main.h"
/**
 * main - Entry point
 *@str: string
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
