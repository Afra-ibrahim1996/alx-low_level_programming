#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_list_loop_fl - find the loopin a link list
 * @head: linked list to sersh
 *
 * Return: address of node where loop starts
*/
listint_t *find_list_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end_next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer of the first node
 *
 * Return: nmber of node freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = find_list_loop_fl(*h);
	for (len = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
