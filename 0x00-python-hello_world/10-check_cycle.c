#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle
 * @list: Pointer to the list
 *
 * Return: 0 if no cycle, otherwise 1
 */

int check_cycle(listint_t *list)
{
	listint_t *head = list, *tail = list;

	while (head && head->next)
	{
		tail = tail->next;
		head = head->next->next;
		if (head == tail)
			return (1);
	}
	return (0);
}
