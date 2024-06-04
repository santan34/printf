#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format_str, ...)
{
	print_match matches[] = {
		{"%s", print_string_func}, {"%c", print_char_func},
		{"%%", print_37_func},
		{"%i", print_int_func}, {"%d", print_dec_func}, {"%r", print_srev_func},
		{"%R", print_rot13_func}, {"%b", print_bin_func}, {"%u", print_unsigned_func},
		{"%o", print_oct_func}, {"%x", print_hex_func}, {"%X", print_HEX_func},
		{"%S", print_exclusive_string_func}, {"%p", print_pointer_func}
	};

	va_list args_list;
	int index = 0, match_index, str_len = 0;

	va_start(args_list, format_str);
	if (format_str == NULL || (format_str[0] == '%' && format_str[1] == '\0'))
		return (-1);

Here:
	while (format_str[index] != '\0')
	{
		match_index = 13;
		while (match_index >= 0)
		{
			if (matches[match_index].id[0] == format_str[index] && matches[match_index].id[1] == format_str[index + 1])
			{
				str_len += matches[match_index].f(args_list);
				index = index + 2;
				goto Here;
			}
			match_index--;
		}
		_putchar(format_str[index]);
		str_len++;
		index++;
	}
	va_end(args_list);
	return (str_len);
}