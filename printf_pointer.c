#include "main.h"

/**
 * print_pointer_func - prints a hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_pointer_func(va_list val)
{
	void *pointer;
	char *null_str = "(nil)";
	unsigned long int address;
	int hex_len;
	int i;

	pointer = va_arg(val, void*);
	if (pointer == NULL)
	{
		for (i = 0; null_str[i] != '\0'; i++)
		{
			_putchar(null_str[i]);
		}
		return (i);
	}

	address = (unsigned long int)pointer;
	_putchar('0');
	_putchar('x');
	hex_len = print_HEX_aux_func(address);
	return (hex_len + 2);
}