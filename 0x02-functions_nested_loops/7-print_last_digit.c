#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 *@n: Number to be evaluated
 *
 * Return: Always last digit of n.
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return ((n % 10));
}
