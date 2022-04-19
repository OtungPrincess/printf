#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
* print_function - Select case according to letter
* @args: va_list to print
* @c: character flag
* Return: NULL or case
*/

int print_function(char c, va_list *args)
{
	int i = 0;
	int len = 0;
	find_flag flags[] = {
			{'c', print_char},
			{'s', print_string},
			{'d', print_int},
			{'i', print_int},
			{'b', print_bin},
			{'\n', NULL}
	};
	while (flags[i].letter)
	{
	if (flags[i].letter == c)
	len = flags[i].prnt(args);

	i++;
	}
	if (c == '%')
	{
		_write('%');
		return (1);
	}
	return (len);
}
