#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always last digit of n.
 */
void jack_bauer(void)
{
	int a, b;

	while (a <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			_putchar((a / 10 ) + '0');
			_putchar((a % 10 ) + '0');
			_putchar(':');
			_putchar((b / 10 ) + '0');
			_putchar((b % 10 ) + '0');
			_putchar('\n');
		}
	}
}