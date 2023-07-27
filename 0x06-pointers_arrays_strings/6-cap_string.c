#include "main.h"

/**
 * *cap_string - function that capitalize all words of string
 *
 * @str: string to return
 *
 * Return: @str
*/

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (str[index] >= 97 && str[index] <= 122)
			index++;

		if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == ')' ||
			str[index - 1] == '(' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			index == 0)

			str[index] -= 32;

	}
	return (str);
}
