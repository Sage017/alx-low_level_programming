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
	int c;
	int d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					if ((a + b) < (c + d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if ((a + b) != ('9' + '8'))
						{
							putchar(',');
							putchar(' ');
						}
					}
					d++;
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
