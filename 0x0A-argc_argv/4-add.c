#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: count of command-line arguments
 * @argv: array of strings containing arguments
 *
 * Return: Always 0, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	(void) argc;
	(void) argv;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (0);
				}
			}
			sum += atoi(argv[i++]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
