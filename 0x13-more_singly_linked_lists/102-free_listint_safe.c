#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to the head of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	while (current)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);

		if (temp <= current)
			break;
	}

	*h = NULL;
	return (count);
}

