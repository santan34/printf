#include "main.h"

/**
 * print_rot13_func - prints a string to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int print_rot13_func(va_list args)
{
	int loop_var1, loop_var2, char_count = 0;
	int found = 0;
	char *str = va_arg(args, char*);
	char *alpha_array = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *beta_array = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
		str = "(null)";
	for (loop_var1 = 0; str[loop_var1]; loop_var1++)
	{
		found = 0;
		for (loop_var2 = 0; alpha_array[loop_var2] && !found; loop_var2++)
		{
			if (str[loop_var1] == alpha_array[loop_var2])
			{
				_putchar(beta_array[loop_var2]);
				char_count++;
				found = 1;
			}
		}
		if (!found)
		{
			_putchar(str[loop_var1]);
			char_count++;
		}
	}
	return (char_count);
}