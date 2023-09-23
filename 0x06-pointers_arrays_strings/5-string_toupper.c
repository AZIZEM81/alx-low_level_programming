#include "main.h"

/**
 * string_toupper - Changes all lowercase characters to uppercase in a string
 * @str: The input string
 *
 * Return: A pointer to the modified string (str)
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
return (str);
}
