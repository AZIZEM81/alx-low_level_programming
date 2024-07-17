#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted ah
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
	high = min(bound, size - 1);

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array + low, high - low + 1, value) + (int)low);
}

/**
 * binary_search - binary search implementation
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
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
