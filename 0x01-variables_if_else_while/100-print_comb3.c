#include <stdio.h>

/**
 * main - Prints out the smallest combination with two digits
 *
 * Return: 0 for success
 */
int main(void)
{
	int a;
	int b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			if (!(a >= b))
			{
				putchar(a);
				putchar(b);
				if (a != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}
