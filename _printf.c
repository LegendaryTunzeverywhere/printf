#include "main.h"

/**
 * _printf - Entry point
 * @format: specifier to detect.
 * Description: a function that produces ouput according to format.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int m = -1;

	if (format)
	{
		int a;
		va_list num;
		int (*save)(va_list);

		va_start(num, format);
		m = 0;

		for (a = 0; format[a]; a++)
		{
			{
				if (format[a] == '%')
				{
					if (format[a + 1] == '%')
					{
						m += _putchar(format[a]);
						a++;
					}
					else if (format[a + 1])
					{
						save = get_function(format[a + 1]);
						m += save ? save(num) : (_putchar(format[a]) + _putchar(format[a + 1]));
						a++;
					}
				}
				else
					m += _putchar(format[a]);
			}
			va_end(num);
		}
	}
return (m);
}
