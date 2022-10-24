#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index 
 * @head: head of the list
 * @index: emplacement of the node to delet
 * Return: pointr to head of list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0;

	listint_t *index1, *index2;

	index1 = *head;
	index2 = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(index2);
		return (1);
	}

	while (nodes != index)
	{
		if (nodes == index - 1)
		{
			index1 = index2;
		}
			index2 = index2->next;

		if (index2 == NULL)
		{
			return (-1);
		}
		nodes++;
	}
	index1->next = index2->next;
	free(index2);
	return (1);
}
