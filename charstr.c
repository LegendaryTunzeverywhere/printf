#include "main.h"

/**
 * print_char - Entry point
 * @num: stores a list of characters
 *
 * Description: print chars
 * Return: number of parameters printed.
 */
int print_char(va_list num)
{
	int x = va_arg(num, int);

	return (_putchar(x));
}

/**
 * print_string - Entry point
 * @num: stores the list of strings
 *
 * Description: print strings.
 * Return: total number of parameters printed.
 */
int print_string(va_list num)
{
	int y, add = 0;
	char *str;

	str = va_arg(num, char *);
	if (str == NULL)
		str = "(null)";

	for (y = 0; str[y]; y++)
		add += _putchar(str[y]);

	return (add);
}
