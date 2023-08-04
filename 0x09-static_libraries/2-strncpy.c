#include "main.h"

/**
 * _strncpy - function that copy strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of byte in @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
