#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer
 * @str: string
 * Return: Address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp = *head;
	unsigned int a = 0;

	while (str[a])
		a++;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = a;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
