#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: the number of arguments
 * @...: the integer oto print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list args;
	char *str;
	unsigned int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
		va_start(args, n);

		while (i--)
		{
			str = va_arg(ars, char *)
			printf("%s%s", (str ? str : "(nil)"),
					(i ? (separator ? separator : "") : "\n"));
		}
		va_end(args);
}
