#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array to reverse
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
int i = 0;
int temp;
for (i = 0; i < n--; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
