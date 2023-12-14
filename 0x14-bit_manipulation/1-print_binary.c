#include "main.h"

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = 1UL << (sizeof(unsigned long int) * 8 - 1);
	char flag = 0;

	while (divisor > 0)
	{
		if (n & divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

