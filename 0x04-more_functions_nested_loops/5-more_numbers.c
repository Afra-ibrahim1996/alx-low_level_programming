#include "main.h"

/**
 * print_more_numbers - that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 (success)
*/

void more_numbers(void)
{
	int num, raw, count;

	for (raw = 1; raw <= 10; raw++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
