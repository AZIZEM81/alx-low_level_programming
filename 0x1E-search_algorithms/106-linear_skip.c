#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list
 * @list: pointer to the head of the skip list
 * @value: value to search for
 * Return: pointer to first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = list, *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (express->express && express->n < value)
	{
		prev = express;
		express = express->express;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	}

	if (express->express == NULL)
	{
		prev = express;
		while (express->next)
			express = express->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, express->index);

	while (prev && prev->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
