#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer
 * @b: constant
 * @n: max byte used
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of element
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nememb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
