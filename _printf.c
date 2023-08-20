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
	int add = -1;

	if (format)
	{
		int a;
		va_list num;
		int (*saveptr)(va_list);

		va_start(num, format);
		add =0;

		for (a = 0; format[a]; a++)
		{
			{
				if (format[a] == '%')
				{
					if (format[a + 1] == '%')
					{
						add += _putchar(format[a]);
						a++;
					}
					else if (format[a + 1])
					{
						saveptr = get_function(format[a + 1]);
						add += saveptr ? saveptr(num) : (_putchar(format[a]) + _putchar(format[a + 1]));
						a++;
					}
				}
				else
					add += _putchar(format[a]);
			}
			va_end(num);
		}
	}
return (add);
}
