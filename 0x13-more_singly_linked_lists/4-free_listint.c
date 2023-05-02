#include "lists.h"

/**
 * free_listint - Freeing  listint_t list.
 *
 * @head: A pointer to the head of the listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}

