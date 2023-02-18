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

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				if ((a < b && b < c && a < c)
				    && (a != b && b != c && a != c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(44);
						putchar(32);
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}
