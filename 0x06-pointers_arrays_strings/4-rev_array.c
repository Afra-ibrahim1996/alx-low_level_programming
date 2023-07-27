#include "main.h"

/**
 * reverse_arry - reverse the content of an arry of integer
 * @a: an arry of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
*/

void reverse_arry(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
