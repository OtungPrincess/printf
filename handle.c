/*
 * File: handle.c
 * Auth: Oghenemeru Avwemoya
 * 	 Otung Princess
 */

#include "main.h"

unsigned char handle_length(const char *modifier, char *index);

/**
 * handle_length - this function matches length modifiers with their corresponding value.
 * @modifier: this points to a potential length modifier
 * @index: index counter
 *
 * Return: If a length modifier is matched - its corresponding value.
 * 	   Otherwise - 0.
 */
unsigned char handle_length(const char *modifier, char *index)
{
	if (*modifier == 'h')
	{
		(*index)++;
		return (SHORT);
	}

	else if (*modifier == 'l')
	{
		(*index)++;
		return (LONG);
	}

	return (0);
}
