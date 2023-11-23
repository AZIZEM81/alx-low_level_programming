#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int my_putchar(char c);
void my_puts(const char *str);
void malloc_checked(unsigned int size);
char *my_strnconcat(const char *s1, const char *s2, unsigned int n);
int my_array_range(int min, int max);
void my_realloc(void **ptr, unsigned int new_size);
int my_atoi(const char *s);
void my_print_int(unsigned long int n);

#endif
