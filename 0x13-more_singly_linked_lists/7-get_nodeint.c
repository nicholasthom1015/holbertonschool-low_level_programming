#include "lists.h"

/**
 * get_nodeint_at_index - locates given node of listint_t linked list
 * @head: pointer to head of listint_t list
 * @index: index of node to locate
 *
 * Return: if node does not exist - NULL
 *	otherwise - located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		return (NULL);

		head = head->next;
	}

	return (head);
}
