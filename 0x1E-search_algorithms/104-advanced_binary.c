#include "search_algos.h"

/**
 * advanced_binary_recursive - recursive helper functio
 * @array: pointer to the first element of the array
 * @left: left index of the subarray
 * @right: right index of the subarray
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] < value))
		return (mid);

	if (array[mid] >= value)
		return (advanced_binary_recursive(array, left, mid, value));

	return (advanced_binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array using search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
