#include "main.h"
/**
 * print_char_func - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int print_char_func(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}