#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be evaluated
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int half;
	char t;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	half = len / 2;
	while (len != half)
	{
		t = s[len - 1];
		s[len - 1] = s[i];
		s[i] = t;
		i++;
		len--;
	}
}
