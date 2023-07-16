#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int firstDigit = 1, secondDigit;

	while (firstDigit <= 99)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar (' ')
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (fisrtDigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
