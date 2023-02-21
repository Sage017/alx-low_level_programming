#include "main.h"

/**
 * _islower -  Checks for lowercase alphabetic character.
 * @c: Input to be evaluated
 *
 * Return: Always 1 for success
 * other wise, 0 for error.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
