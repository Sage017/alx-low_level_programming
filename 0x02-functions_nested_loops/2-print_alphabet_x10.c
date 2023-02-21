#include "main.h"

/**
 * print_alphabet_x10 - Prints out the alphabet 10 times
 *
 * Return: No value
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 0;
	while (b < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
