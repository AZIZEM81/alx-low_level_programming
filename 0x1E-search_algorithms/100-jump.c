#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array using Jump search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i < min(step, size); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 * Return: minimum of a and b
 */
size_t min(size_t a, size_t b)
{
	return (a < b ? a : b);
}
