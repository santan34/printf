#include "main.h"

/**
 * string_length - Returns the length of a string.
 * @str: Type char pointer
 * Return: length.
 */
int string_length(char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
		;
	return (length);

}

/**
 * string_length_const - Strlen function but applied for constant char pointer str
 * @str: Type char pointer
 * Return: length
 */
int string_length_const(const char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
		;
	return (length);
}