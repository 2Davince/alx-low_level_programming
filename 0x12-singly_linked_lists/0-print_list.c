#include <stdio.h>
#include "lists.h"

/**
 * print_list - printing all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	printf("[%u] ", h->len);
		if (h->str)
			printf("%s\n", h->str);
		else
	printf("(nil)\n");

		h = h->next;
			count++;
	}

		return (count);
}

