#include "main.h"

/**
 * print_square - print a the square using the character #
 *
 * @size: is the size of the square
 *
 * Return: 0 Success
*/

void print_square(int size)
{
	int row, colume;

	for (row = 1; row <= size; row++)
	{
		for (colume = 1; coulme <= size; coulmn++)
			_putchar('#');
		_putshar('\n');
	}
}
