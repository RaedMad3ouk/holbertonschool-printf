#include "printf.h"

/**
 * print_percent - print percent
 * @arg: argument
 * Return: int
 */

int print_percent(va_list arg)
{
	(void)arg;
	putchar('%');
	return (1);
}

/**
 * print_string - prints a string
 * @arg: argument
 * Return: string
 */

int print_string(va_list arg)
{
	int i = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	if (str[i] == '\0')
	{
		return (1);
	}

	while (str[i])

	{
		putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_char - prints a char
 *@arg: argument
 *
 * Return: character
 */
int print_char(va_list arg)
{
	putchar(va_arg(arg, int));
	return (1);
}
