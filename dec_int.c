#include "main.h"

/**
 * print_dec - Entry point
 * @num: stores the num of arguments.
 *
 * Description: print decimals
 * Return: print numbers.
 */
int print_dec(va_list num)
{
	unsigned int a1, a2, add, add2;
	int numbers;

	add = 0;

	numbers = va_arg(num, int);

	if (numbers < 0)
	{
		a1 = (numbers * -1);
		add += _putchar(45);
	}
	else
		a1 = numbers;

	a2 = a1;
	add2 = 1;
	while (a2 > 9)
	{
		a2 = a2 / 10;
		add2 = add2 * 10;
	}

	while (add2 >= 1)
	{
		add = add + _putchar(((a1 / add2) % 10) + '0');
		add2 = add2 / 10;
	}
	return (add);
}

/**
 * print_int - Entry point
 * @num: list of numbers
 *
 * Description: print integers
 * Return: numbers.
 */
int print_int(va_list num)
{
	return (print_dec(num));
}
