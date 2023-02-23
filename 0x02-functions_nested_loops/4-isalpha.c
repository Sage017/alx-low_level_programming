#include "main.h"

/**
 * _isalpha -  Checks for alphabetic character
 * @c: Input to be evaluated
 *
 * Return: Always 1 for success
 * other wise, 0 for error.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
