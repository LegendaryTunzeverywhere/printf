#include "main.h"

/**
 * print_c - Entry point
 * @c: print char
 *
 * Description: print characters
 * Return: always 1
 */
int print_c(va_list c)
{
	char a = (char)va_arg(c, int);

	_putchar(a);
	return (1);
}

/**
 * print_s - Entry point
 * @s: string to print
 *
 * Description: prints a string
 * Return: number of characters printed
 */
int print_s(va_list s)
{
	int add;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (add = 0; str[add]; add++)
	{
		_putchar(str[add]);
	}
	return (add);
}

/**
 * hex_print - Entry point
 * @c: char to print
 *
 * Description: prints a character's ascii value.
 *
 * Return: number of chars printed.
 */
static int hex_print(char c)
{
	int add;
	char diff = 'A' - ':';
	char z[2];

	z[0] = c / 16;
	z[1] = c % 16;
	for (add = 0; add < 2; add++)
	{
		if (z[add] >= 10)
			_putchar('0' + diff + z[add]);
		else
			_putchar('0' + z[add]);
	}
	return (add);
}

/**
 * print_S - Entry point
 * @S: string to print
 *
 * Description: prints a string and non printable characters on ascii.
 * Return: number of chars printed.
 */
int print_S(va_list S)
{
	unsigned int a;
	int add = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a]; a++)
	{
		if (str[a] < 32 || str[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			add += 2;
			add += hex_print(str[a]);
		}
		else
		{
			_putchar(str[a]);
			add++;
		}
	}
	return (add);
}

/**
 * print_r - Entry point
 * @r: string to print.
 * Description: prints a string in reverse
 *
 * Return: numbers of chars printed
 */
int print_r(va_list r)
{
	char *str;
	int a, add = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (a = 0; str[a]; a++)
		;
	for (a -= 1; a >= 0; a--)
	{
		_putchar(str[a]);
		add++;
	}
	return (add);
}
