#include "printf.h"
#include <stddef.h>

/**
 * handle_spec - check specifier type and return function
 *@s: type to check
 *Return: pointer to function to use
 */


char *(*handle_spec(char s))(va_list)
{
	int i;

	s_types spec_types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
		};


	for (i = 0; spec_types[i].spec; i++)
		if (s == *spec_types[i].spec)
			return (spec_types[i].f);

	return (spec_types[i].f);

}
