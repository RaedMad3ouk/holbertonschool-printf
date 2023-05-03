#ifndef PRINTF_H
#define PRINTF_H

#define BUFSIZE 1024
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * struct spec_types - Struct to get function of specifier
 * @spec: specifier
 * @f: The function associated
 */

typedef struct spec_types
{
	char *spec;
	char *(*f)();
} s_types;

int _printf(const char *format, ...);
int get_format_func(char c, va_list args);
int custom_printf(const char *format, ...);
int print_percent(va_list arg);
int print_string(va_list arg);
int print_char(va_list arg);


#endif
