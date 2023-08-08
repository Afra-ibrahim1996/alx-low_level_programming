#include "main.h"

/**
 * create_array - function that creates an array of chars
 *
 * @size: size of array
 * @c: char
 * Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
