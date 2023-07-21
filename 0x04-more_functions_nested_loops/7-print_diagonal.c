#include "main.h"

/**
 * print_diagonle - print a diagonle line
 *
 * @n: is number of lines
*/
void print_diagonal(int n)
{
	int i, j;

		for (i = 0; i <= n; i++)
		{
			if (n < 1)
			{	
				for (j = 0; j < n; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
}

