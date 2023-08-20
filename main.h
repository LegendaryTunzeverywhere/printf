#ifndef _MAIN_H_FILE_
#define _MAIN_H_FILE_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct func - Entry point
 * @fmt: char pointer of the format specifer
 * @ptr: integer pointer to function for the conversion format specifier
 */

typedef struct func
{
	char *fmt;
	int (*ptr)();
} func_t;
int print_char(va_list num);
int print_string(va_list num);
int print_dec(va_list num);
int print_int(va_list ar_numlist);
int (*get_function(char s))(va_list num);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
