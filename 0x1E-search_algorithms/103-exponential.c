#include "search_algos.h"

/**
 * exponential_search - searches for a value using Exponential search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - searches for a value using Binary search
 * @array: pointer to the first element of the array
 * @low: starting index of the search range
 * @high: ending index of the search range
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (size_t i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
