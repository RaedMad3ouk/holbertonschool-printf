# printf Function
Project - C - printf

Recreate the printf function in C.
Installing

# Compile:

$ gcc -Wall -Werror -Wextra -pedantic *.c

# Authorized functions and macros

    write (man 2 write)
    malloc (man 3 malloc)
    free (man 3 free)
    va_start (man 3 va_start)
    va_end (man 3 va_end)
    va_copy (man 3 va_copy)
    va_arg (man 3 va_arg)

Tasks

Task 0 - function that produces output according to a format

Task 1 - Handle conversion specifiers "c", "s" , "%"

Task 2 - create a man page for our function

# File Structure
	printf.h - header file for the printf function
	handle_spec.c - check specifier type and return function
	_printf.c - function like printf
	parse_format_specifier.c 
							
							*print_percent - print percent
							 *print_string - prints a string
							 *print_char - prints a char		


# Authors
	Bedouihch Raed