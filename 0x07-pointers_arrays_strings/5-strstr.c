#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string to be search
 * @needle: the substring
 * Return: null
*/

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needel[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
