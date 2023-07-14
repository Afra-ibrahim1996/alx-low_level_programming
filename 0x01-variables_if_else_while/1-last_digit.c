#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less that 6.
 * Return: Alwayes 0 (Success)
*/

	int main(void)
{
	int n;

	stand(time(0));
	n = rand() - RAND_MAX / 2

	if ((n % 10) > 5)
	{
		printf("last digit od %d is %d and is greater than 5\n".
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("last digit od %d is %d and is less than 6 and not 0\n".
			n, n % 10);
	}
	else
	{
		printf("last digit od %d is %d and is 0\n".
			 n, n % 10);
	}
	return (0);
}
