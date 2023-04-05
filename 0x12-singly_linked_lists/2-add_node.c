#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - adds a new node at the beginning
 * @head: double pointer
 * @str: new string
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len = 0;

	while (str[len])
		len++;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = (*head);
	(*head) = ptr;
	return (*head);
}
