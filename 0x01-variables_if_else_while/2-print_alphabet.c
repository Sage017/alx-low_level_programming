#include <stdio.h>

/**
 * main - Prints out the lower case alphabets
 *
 * Return: 0 for success
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar(10);
	return (0);
}
