#include "main.h"

/**
 * print_char - Entry point
 * @val: argument.
 * Description: prints a char.
 *
 * Return: 1.
 */
int print_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
