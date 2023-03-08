#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: string to be evaluated
 *
 * Return: void
 */

void puts_half(char *str)
{
	int half;
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 1)
		half = (len - 1) / 2;
	else
		half = len / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
