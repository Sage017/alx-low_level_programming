#include <stdio.h>

/**
 * main - Prints out single digit numbers
 *
 * Return: 0 for success
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
