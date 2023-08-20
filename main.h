#ifndef _MAIN_H_FILE_
#define _MAIN_H_FILE_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct - Entry point
 * @fmt: char pointer of the format specifer
 * @i: integer pointer to function for the conversion format specifier
 */

typedef struct format
{
	char *fmt;
	int (*ptr)();
} format_match;

int printf_integer(va_list args);
int printf_decimal(va_list args);
int printf_37(void);
int printf_string(va_list val);
int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
