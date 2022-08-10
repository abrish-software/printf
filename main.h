#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/*prototypes*/
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/*Conversion specifiers*/
int print_char(va_list args);
int print_string(va_list args);
int print_digit(va_list args);
int print_mod(va_list args);
int print_rev_string(va_list args);
int printf_bin(va_list args);
int printf_HEX(va_list args);
int printf_hex(va_list args);
int printf_oct(va_list args);
int printf_unsigned(va_list args);
#endif
