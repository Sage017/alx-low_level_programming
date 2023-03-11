#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: count of command-line arguments
 * @argv: array of strings containing arguments
 *
 * Return: Always 0, 1 if error
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argc;
	(void) argv;

	if (argc == 3)
	{
		i =  atoi(argv[1]) *  atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
