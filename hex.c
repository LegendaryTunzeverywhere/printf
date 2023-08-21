#include "main.h"

/**
 * print_hexa - Entry point
 * @i: unsigned int to print
 * @c: determinant of printing
 *
 * Return: number of digits printed on screen.
 */
int print_hexa(unsigned int i, unsigned int c)
{
	unsigned int a[8];
	unsigned int n, m, add;
	char diff;
	int count;

	m = 268435456; /* 16 raise to the power of 7 */
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = i / m;
	for (n = 1; n < 8; n++)
	{
		m /= 16;
		a[n] = (i / m) % 16;
	}
	for (n = 0, add = 0, count = 0; n < 8; n++)
	{
		add += a[n];
		if (add || n == 7)
		{
			if (a[n] < 10)
				_putchar('0' + a[n]);
			else
				_putchar('0' + diff + a[n]);
			count++;
		}
	}
	return (count);
}

/**
 * print_x - Entry point
 * @x: unsigned int to print
 *
 * Description: takes an unsigned int and prints in lowercase.
 * Return: number of digits.
 */
int print_x(va_list x)
{
	return (print_hexa(va_arg(x, unsigned int), 0));
}

/**
 * print_X - Entry point
 * @X: unsigned int to print.
 *
 * Description: takes an unsigned int and prints it in uppercase.
 * Return: number of digits.
 */
int print_X(va_list X)
{
	return (print_hexa(va_arg(X, unsigned int), 1));
}

/**
 * power - Entry point
 * @num: base to exponent
 * @exponent: number of exponent
 *
 * Description: calculate exponential.
 * Return: num raise to exponent
 */
static unsigned long power(unsigned int num, unsigned int exponent)
{
	unsigned int a;
	unsigned long answer = num;

	for (a = 1; a < exponent; a++)
	{
		answer *= num;
	}
	return (answer);
}

/**
 * print_p - Entry point
 * @p: address to print
 *
 * Description: prints an address.
 * Return: number of characters to print.
 */
int print_p(va_list p)
{
	int add = 0;
	unsigned int a[16];
	unsigned int b, sum_up;
	unsigned long x, y;
	char *str = "(nill)";

	x = va_arg(p, unsigned long);
	if (x == 0)
	{
		for (b = 0; str[b]; b++)
		{
			_putchar(str[b]);
			add++;
		}
		return (add);
	}
	_putchar('0');
	_putchar('x');
	add = 2;
	y = power(16, 15);
	a[0] = x / y;
	for (b = 1; b < 16; b++)
	{
		sum_up += a[b];
		if (sum_up || b == 15)
		{
			if (a[b] < 10)
				_putchar('0' + a[b]);
			else
				_putchar('0' + ('a' - ':') + a[b]);
			add++;
		}
	}
	return (add);
}
