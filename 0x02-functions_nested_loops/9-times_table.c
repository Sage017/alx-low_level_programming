#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Void
 */

void times_table(void)
{
	int a, b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (b > 0 && a * b <= 9)
			{
				_putchar(' ');
			}
			if (a * b > 9)
			{
				_putchar((a * b / 10) + '0');
				_putchar((a * b % 10) + '0');
			}
			else
			{
				_putchar((a * b) + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			b++;
		}
		a++;
	}
}
