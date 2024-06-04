#include "main.h"

/**
 * print_unsigned_func - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_unsigned_func(va_list args)
{
	unsigned int uint_num = va_arg(args, unsigned int);
	int digit, last_digit = uint_num % 10, temp_uint, exp = 1;
	int char_count = 1;

	temp_uint = uint_num;

	if (last_digit < 0)
	{
		_putchar('-');
		temp_uint = -temp_uint;
		uint_num = -uint_num;
		last_digit = -last_digit;
		char_count++;
	}
	if (temp_uint > 0)
	{
		while (temp_uint / 10 != 0)
		{
			exp = exp * 10;
			temp_uint = temp_uint / 10;
		}
		temp_uint = uint_num;
		while (exp > 0)
		{
			digit = temp_uint / exp;
			_putchar(digit + '0');
			temp_uint = temp_uint - (digit * exp);
			exp = exp / 10;
			char_count++;
		}
	}
	_putchar(last_digit + '0');

	return (char_count);
}