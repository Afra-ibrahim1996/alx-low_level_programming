#include "main.h"

/**
 * string_toupper - function that changes all lowercase letter to uppercase
 *
 * Description: change all letters in lowercase to uppercase
 *
 * @n: string
 *
 * Return: @n
*/

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
