#include "search_algos.h"

/**
 * interpolation_search - searches for a value using Interpolation search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;
	double f;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		f = (double)(high - low) / (array[high] - array[low]);
		pos = low + (f * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	f = (double)(high - low) / (array[high] - array[low]);
	pos = low + (f * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
