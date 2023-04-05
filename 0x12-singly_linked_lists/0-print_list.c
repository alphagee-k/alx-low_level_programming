#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list -  function that prints all the elements of a list_t list
 * @h: pointer
 * Return: nr of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (0)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
