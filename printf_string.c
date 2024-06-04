#include "main.h"

/**
 * print_string_func - print a string.
 * @val: argument.
 * Return: the length of the string.
 */

int print_string_func(va_list val)
{
	char *str;
	int loop_var, str_len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		str_len = string_length(str);
		for (loop_var = 0; loop_var < str_len; loop_var++)
			_putchar(str[loop_var]);
		return (str_len);
	}
	else
	{
		str_len = string_length(str);
		for (loop_var = 0; loop_var < str_len; loop_var++)
			_putchar(str[loop_var]);
		return (str_len);
	}
}