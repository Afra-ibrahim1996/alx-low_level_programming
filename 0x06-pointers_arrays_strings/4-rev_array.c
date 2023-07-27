#include "main.h"

/**
 * reverse_arry - reverse the content of an arry of integer
 * @a: an arry of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
*/

void reverse_arry(int  *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
