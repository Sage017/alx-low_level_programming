#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Input to be evaluated
 *
 * Return: Always 1 for success
 * other wise, 0 for error.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
