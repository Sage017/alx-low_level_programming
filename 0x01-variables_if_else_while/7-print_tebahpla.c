#include <stdio.h>

/**
 * main - Prints out the lower case alphabets in reverse
 *
 * Return: 0 for success
 */
int main(void)
{
	char al = 'z';

	while (al >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar(10);
	return (0);
}
