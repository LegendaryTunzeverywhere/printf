#ifndef _MAIN_H_FILE_
#define _MAIN_H_FILE_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - Entry point
 * @c: char type to print
 * @f: print ints
 *
 * Description: prints specific formats.
 */
typedef struct format
{
	char *c;
	int (*f)(va_list);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

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
