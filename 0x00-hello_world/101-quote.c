#include <unistd.h>

/**
 * main - Print string to standard error
 *
 * Return: 1 for success, otherwise is failure
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59 , 2, stderr);
	return (1);
}
