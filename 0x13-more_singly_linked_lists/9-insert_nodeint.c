#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at any index.
 * @head: pointer.
 * @idx: index at which node is added to.
 * @n: value.
 *
 * Return: new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
