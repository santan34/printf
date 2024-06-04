#include "main.h"

/**
 * print_int_func - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int_func(va_list args)
{
	int integer = va_arg(args, int);
	int digit, last_digit= integer % 10, temp_integer, exp = 1;
	int char_count = 1;

	temp_integer = integer;

	if (last_digit < 0)
	{
		_putchar('-');
		temp_integer = -temp_integer;
		integer = -integer;
		last_digit = -last_digit;
		char_count++;
	}
	if (temp_integer > 0)
	{
		while (temp_integer / 10 != 0)
		{
			exp = exp * 10;
			temp_integer = temp_integer / 10;
		}
		temp_integer = integer;
		while (exp > 0)
		{
			digit = temp_integer / exp;
			_putchar(digit + '0');
			temp_integer = temp_integer - (digit * exp);
			exp = exp / 10;
			char_count++;
		}
	}
	_putchar(last_digit + '0');

	return (char_count);
}

/**
 * print_dec_func - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_dec_func(va_list args)
{
	int decimal = va_arg(args, int);
	int digit, last_digit = decimal % 10, temp_decimal, exp = 1;
	int char_count = 1;

	temp_decimal = decimal;

	if (last_digit < 0)
	{
		_putchar('-');
		temp_decimal = -temp_decimal;
		decimal = -decimal;
		last_digit = -last_digit;
		char_count++;
	}
	if (temp_decimal > 0)
	{
		while (temp_decimal / 10 != 0)
		{
			exp = exp * 10;
			temp_decimal = temp_decimal / 10;
		}
		temp_decimal = decimal;
		while (exp > 0)
		{
			digit = temp_decimal / exp;
			_putchar(digit + '0');
			temp_decimal = temp_decimal - (digit * exp);
			exp = exp / 10;
			char_count++;
		}
	}
	_putchar(last_digit + '0');

	return (char_count);
}