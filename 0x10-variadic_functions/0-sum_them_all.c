#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters
 * @... : the integers to sum
 *
 * Return: The sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);

	return (s);
}
