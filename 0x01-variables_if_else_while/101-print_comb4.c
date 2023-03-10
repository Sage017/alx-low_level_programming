#include <stdio.h>

/**
 * main - Prints out the smallest combination with three digits
 *
 * Return: 0 for success
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				if ((a < b && b < c && a < c)
				    && (a != b && b != c && a != c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
