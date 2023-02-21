#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: input to be evaluated
 *
 * Return: Always absolute value of integer
 */
int _abs(int n)
{
    if (n > 0)
	    return (n);
    else if (n < 0)
	    return (n * -1);
    else if (n == 0)
	    return (0);
}
