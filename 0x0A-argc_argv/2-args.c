#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: count of command-line arguments
 * @argv: array of strings containing arguments
 *
 * Return: Always 0, 1 if error
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void) argc;
	(void) argv;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
