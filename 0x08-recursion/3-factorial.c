#include "main.h"
/**
 * factorial - Returns the fac of a num. @n: number to return the factorial fr
 *
 * Return: Factorial of n.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
