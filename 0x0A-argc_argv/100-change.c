#include "main.h"

/**
 * main -  prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: count of command-line arguments
 * @argv: array of strings containing arguments
 *
 * Return: Always 0, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, cnt;
	int chg = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	(void) argc;
	(void) argv;

	if (argc == 2)
	{
		cnt = atoi(argv[1]);

		i = 0;
		if (cnt < 0)
		{
			printf("0\n");
			return (0);
		}
		while (cnt != 0)
		{
			chg += cnt / coins[i];
			cnt = cnt % coins[i++];
		}
		printf("%d\n", chg);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
