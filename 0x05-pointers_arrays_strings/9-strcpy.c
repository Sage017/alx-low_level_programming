#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to buffer.
 * @src: pointer ro string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *ptr = dest;

	while (src[i] != '\0')
	{
		*ptr = src[i++];
		ptr++;
	}
	*ptr = '\0';

	return (dest);
}
