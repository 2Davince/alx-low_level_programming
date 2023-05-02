#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 *
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The data (n) of the deleted node, or 0 for empty list.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}

