#include <unistd.h>

/**
 * main - Print string to standard error
 *
 * Return: 1 for success, otherwise is failure
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
