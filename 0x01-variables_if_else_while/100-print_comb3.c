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

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			if (!(a >= b))
			{
				putchar(a);
				putchar(b);
				if (a != 8 && b != 9 && a != b)
				{
					putchar(44);
					putchar(32);
				}
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}
