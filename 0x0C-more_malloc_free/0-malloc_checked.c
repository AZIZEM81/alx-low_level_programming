#include "main.h"

/**
* malloc_checked - cause normal process termination with a status value of 98
* @b: int
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
