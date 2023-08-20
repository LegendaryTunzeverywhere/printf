#include "main.h"

/**
 * _printf - Entry point
 * @format: specifier to detect.
 * Description: a function that produces ouput according to format.
 *
 * Return: the number of characters printed.
 */
int _printf(const char * const format, ...)
{
	format_match f[] = {
		{"%c", printf_char},
		{"%s", printf_string},
		{"%%", printf_37}, {"%d", printf_decimal},
		{"%i", printf_integer}
	};
	va_list args;
	int a = 0, b, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Link:
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (f[b].fmt[0] == format[a] && f[b].fmt[1] == format[a + 1])
			{
				len += f[b].ptr(args);
				a = a + 2;
				goto Link;
			}
			b--;
		}
		_putchar(format[a]);
		len++;
		a++;
	}
	va_end(args);
	return (len);
}
