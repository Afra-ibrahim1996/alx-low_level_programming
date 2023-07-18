#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Alwayes 0 (Success)
*/
void print_alphabet(void);
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	-putchar('\n');
	return (0);
}
