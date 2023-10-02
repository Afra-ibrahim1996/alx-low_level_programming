#include "main.h"

/**
 * _strlen - return to the length of a string
 * @s: the string
 *
* Return: integer length
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to creat
 * @text_content: text to write
 *
 * Return: 1 on success 0 on error
*/
int append_text_to_file(const char *filename, char *text_content)
{
}
