#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - printing  listint_t linked list safely.
 * @head: pointer to the first node in the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *visited[1024] = {NULL};
	int i, found = 0;

	while (current != NULL)
	{
	found = 0;
	for (i = 0; i < 1024; i++)
	{
	if (visited[i] == current)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		found = 1;
		break;
	}
	}
		if (!found)
	{
		printf("[%p] %d\n", (void *)current, current->n);
	visited[count % 1024] = current;
	count++;
	}
	current = current->next;
	}

	return (count);
}

