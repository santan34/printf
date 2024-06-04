#include "main.h"

/**
 * print_srev_func - function that prints a string in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string length
 */
int print_srev_func(va_list args)
{

	char *str = va_arg(args, char*);
	int str_len;
	int loop_var;

	if (str == NULL)
		str = "(null)";
	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	for (loop_var = str_len - 1; loop_var >= 0; loop_var--)
		_putchar(str[loop_var]);
	return (str_len);
}