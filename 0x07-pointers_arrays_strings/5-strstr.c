#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
	char *l = haystack;
	char *p = needle;

	for (*l != '\0'; *l++)
	{
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (*l);
	}
	return (0);
}
