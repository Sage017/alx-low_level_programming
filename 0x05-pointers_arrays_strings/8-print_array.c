#include "main.h"
/**
 * print_array - prints n elements of an array of
 * integers, followed by a new line.
 * @a: string to be evaluated
 * @n: range of elemrnts to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[i]);
	}
	else
	{
		printf("\n");
		return;
	}
}
