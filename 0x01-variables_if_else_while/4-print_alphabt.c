#include <stdio.h>

/**
 * main - Prints out the lower case alphabets but not q and e
 *
 * Return: 0 for success
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (!(a == 'e' || a == 'q'))
			putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
