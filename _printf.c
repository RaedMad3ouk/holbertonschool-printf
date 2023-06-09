#include "main.h"

/**
 * _printf - check the code
 * @format: fromat of the function.
 * Return: EXIT_SUCCESS.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int num = 0;
	int i = 0;
	int j;

	type_s type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{0, NULL},
	};

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; type[j].spec; j++)
			{
				if (format[i] == type[j].c)
				{
					num += type[j].spec(args);
					break;
				}
			}
		}
		else
		{
			num += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (num);
}