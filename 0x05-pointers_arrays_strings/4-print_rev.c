#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be evaluated
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (len != -1)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
