#include <stdio.h>

/**
 * main - Prints out the lower case alphabets then uppercase letters
 *
 * Return: 0 for success
 */
int main(void)
{
	char a = 'a';
	char al = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (al <= 'Z')
	{
		putchar(al);
		al++;
	}
	putchar(10);
	return (0);
}
