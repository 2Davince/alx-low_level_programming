#include "lists.h"

/**
 * add_nodeint_end - Addition of new node at the end of  listint_t list.
 *
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * @n: The integer to be added to the new node.
 *
 * Return: new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
	{
	return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	    temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	}

	return (new_node);
}

