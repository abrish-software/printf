#include "main.h"
#include <unistd.h>

/**
 * print_s - A function that prints a string
 * @s: string to print
 * Return: i
 */
int print_s(va_list s)
{
	char *s;
	char *p;
	int len;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);

	return (_strcpy(p, s));
}
