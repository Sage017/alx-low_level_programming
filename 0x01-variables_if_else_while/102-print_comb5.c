#include <stdio.h>

/**
 * main - Prints out the smallest combination with four digits
 *
 * Return: 0 for success
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');
				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
