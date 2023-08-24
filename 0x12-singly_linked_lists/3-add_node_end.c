#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: address of the first node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str);
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _strlen(new_head->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
