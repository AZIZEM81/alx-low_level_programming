#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list using Jump search
 * @list: pointer to the head of the list
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if not fd
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = NULL, *current = list;

	if (list == NULL || size == 0)
		return (NULL);

	while (current->n < value && current->index + 1 < size)
	{
		prev = current;
		for (size_t i = 0; i < step && current->next; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev ? prev->index : 0, current->index);

	if (prev == NULL)
		prev = list;
	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
