#include "main.h"
#include <string.h>

/**
 * main - Prints out _putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	char put[] = "_putchar\n";
	int i = 0;

	while (i < (int)strlen(put))
	{
		_putchar(put[i]);
		i++;
	}
	return (0);
}
