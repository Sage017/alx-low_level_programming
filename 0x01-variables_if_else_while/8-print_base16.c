#include <stdio.h>

/**
 * main - Prints out the lower case alphabets then uppercase letters
 *
 * Return: 0 for success
 */
int main(void)
{
	int a = 48;
	char al = 'a';

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (al <= 'f')
	{
		putchar(al);
		al++;
	}
	putchar(10);
	return (0);
}
