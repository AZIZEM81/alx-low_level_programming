#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @start: starting index of the array
 * @end: ending index of the array
 */
void print_array(const int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: left index of the subarray to search
 * @right: right index of the subarray to search
 * @value: value to search for
 * Return: index where value is located or -1 if array is NULL or not found
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;
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
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located or -1 if array is NULL or not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound < size)
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, size - 1);

	return (binary_search(array, bound / 2, bound < size ? bound : size - 1, value));
}

