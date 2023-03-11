#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: count of command-line arguments
 * @argv: array of strings containing arguments
 *
 * Return: Always 0, 1 if error
 */
int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
