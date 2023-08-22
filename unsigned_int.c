#include "main.h"

/**
 * print_u - Entry point
 * @u: unsigned int to be printed.
 *
 * Description: prints an unsigned int in decimal.
 *
 * Return: number of digits printed.
 */
int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int b, c, d, sum_up;
	int add;

	d = va_arg(u, unsigned int);
	c = 1000000000;
	a[0] = d / c;
	for (b = 1; b < 10; b++)
	{
		c /= 10;
		a[b] = (d / c) % 10;
	}
	for (b = 0, sum_up = 0, add = 0; b < 10; b++)
	{
		sum_up += a[b];
		if (sum_up || b == 9)
		{
			_putchar('0' + a[b]);
			add++;
		}
	}
	return (add);
}
/**
 * print_o - takes an unsigned int and prints it in octal notation
 * @o: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(o, unsigned int);
	m = 1073741824; /* (8 ^ 10) */
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned in to print
 *
 * Return: number of digits printed
 *
int print_b(va_list b)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(b, unsigned int);
	m = 2147483648;
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
*/

/**
 * print_b - converts an unsigned int to binary and prints it
 * @b: unsigned int to print in binary
 *
 * Return: number of digits printed
 */
int print_b(va_list b)
{
    unsigned int n = va_arg(b, unsigned int);
    unsigned int a[32];
    int i, sum, count;

    // Convert to binary
    for (i = 0; i < 32; i++)
    {
        a[i] = n % 2;
        n /= 2;
    }

    // Print the binary representation
    for (i = 31, sum = 0, count = 0; i >= 0; i--)
    {
        sum += a[i];
        if (sum || i == 0)
        {
            _putchar('0' + a[i]);
            count++;
        }
    }
    return (count);
}
