#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to pointer to the list
 * @number: Number to be inserted in the list
 *
 * Return: Address of the new node,
 * Otherwise, NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (temp == NULL || temp->n >= number)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	while (temp && temp->next && temp->next->n < number)
		temp = temp->next;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
