#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int putchar(char c);
void puts(char *str);
void malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void calloc(unsigned int nmemb, unsigned int size);
int array_range(int min, int max);
void realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int atoi(const char *s);
void print_int(unsigned long int n);

#endif
