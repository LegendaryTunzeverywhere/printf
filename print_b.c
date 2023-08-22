#include "main.h"

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
