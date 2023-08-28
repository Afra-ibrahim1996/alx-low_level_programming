#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked
 * @head: pointer to first node
 *
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
