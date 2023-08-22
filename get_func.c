#include "main.h"

/**
 * get_function - Entry point
 * @s: array to check
 *
 * Description: search for formatter and return
 * the correct function
 * Return: return a function
 **/

int (*get_function(char s))(va_list)
{
	func_t funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"i", print_int},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{"b", print_b},
		{NULL, NULL}
	};

	int a;

	for (a = 0; funcs[a].fmt != NULL; a++)
	{
		if (*funcs[a].fmt == s)
			return (funcs[a].ptr);
	}
	return (NULL);
}
