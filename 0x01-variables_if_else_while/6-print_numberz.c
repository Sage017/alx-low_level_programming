#include <stdio.h>

/**
 * main - Prints out single digit numbers using putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
