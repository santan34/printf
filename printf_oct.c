#include "main.h"

/**
 * print_oct_func - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int print_oct_func(va_list val)
{
	int loop_var;
	int *octal_array;
	int octal_counter = 0;
	unsigned int octal_num = va_arg(val, unsigned int);
	unsigned int temp_octal = octal_num;

	while (octal_num / 8 != 0)
	{
		octal_num /= 8;
		octal_counter++;
	}
	octal_counter++;
	octal_array = malloc(octal_counter * sizeof(int));

	for (loop_var = 0; loop_var < octal_counter; loop_var++)
	{
		octal_array[loop_var] = temp_octal % 8;
		temp_octal /= 8;
	}
	for (loop_var = octal_counter - 1; loop_var >= 0; loop_var--)
	{
		_putchar(octal_array[loop_var] + '0');
	}
	free(octal_array);
	return (octal_counter);
}