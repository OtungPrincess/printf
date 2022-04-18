#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_string - makes object into string
 * @args: va_list object
 * Return: chars printed
 **/
int print_string(va_list *args)
{
	return (p_string(va_arg(*args, char *)));
}

/**
 * print_char - makes object into char
 * @args: va_list object
 * Return: chars printed
 **/
int print_char(va_list *args)
{
	return (_write(va_arg(*args, int)));
}
