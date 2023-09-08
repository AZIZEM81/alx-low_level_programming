#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program writes a specified message to the standard output.
 * Return: 1 (failure)
 */

int main(void)
{char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
