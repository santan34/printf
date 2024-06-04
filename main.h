#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} print_match;

int print_pointer_func(va_list val);
int print_hex_aux_func(unsigned long int num);
int print_exclusive_string_func(va_list val);
int print_HEX_func(va_list val);
int print_HEX_aux_func(unsigned long int num);
int print_hex_func(va_list val);
int print_hex_aux_func(unsigned long int num);
int print_oct_func(va_list val);
int print_unsigned_func(va_list args);
int print_bin_func(va_list val);
int print_srev_func(va_list args);
int print_rot13_func(va_list args);
int print_int_func(va_list args);
int print_dec_func(va_list args);
int str_len_func(char *s);
int str_cpy_func(char *dest, char *src);
int str_len_c_func(const char *s);
int rev_string_func(char *s);
int str_len_c_func(const char *s);
int string_length(char *str);
int print_37_func(void);
int print_char_func(va_list val);
int print_string_func(va_list val);
int _putchar(char c);
int _printf(const char * const format_str, ...);
int print_func(const char *format, ...);

#endif