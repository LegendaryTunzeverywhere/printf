#include "main.h"

/**
 * print_R - prints a string in rot13
 * @R: string to print
 *
 * Return: number of chars printed
 */
int print_R(va_list R)
{
	char *str;
	unsigned int a, b;
	int add = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotkey[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (a = 0; str[a]; a++)
	{
		for (b = 0; alpha[b]; b++)
		{
			if (alpha[b] == str[a])
			{
				_putchar(rotkey[b]);
				add++;
				break;
			}
		}
		if (!alpha[b])
		{
			_putchar(str[a]);
			add++;
		}
	}
	return (add);
}
