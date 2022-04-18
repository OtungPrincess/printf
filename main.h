#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flag -flag object
 * @letter: flag char
 * @prnt: print function pointer
 * Descriptions: contains flag letter and corresponding print function
 **/
typedef struct flag
{
	char letter;
	int (*prnt)(va_list *);
} find_flag;

int _printf(const char *format, ...);
int print_function(char c, va_list *args);
int p_string(char *s);
int _write(char c);

int print_string(va_list *args);
int print_char(va_list *args);

#endif
