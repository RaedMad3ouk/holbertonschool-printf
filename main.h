#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * struct print_fn_s - check the code
 * @c: character
 * @fn: function pointer
 * Return: Always 0.
*/
typedef struct spec_types
{
	char c;
	int (*spec)(va_list);
} type_s;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
