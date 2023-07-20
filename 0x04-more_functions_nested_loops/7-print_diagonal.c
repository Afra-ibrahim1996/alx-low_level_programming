#include "main.h"

/**
 * print_diagonle - print a diagonle line
 *
 * @n: is number of lines
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < n; j++)
			{
				if (j == i)
				_putchar('\\');
				else if (j < i)
				_putchar (' ');
			}
			_putchar('\n');
		}
	}
}
