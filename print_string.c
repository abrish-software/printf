#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - print string.
 *
 * @args: argument.
 *
 * Return: character count.
 */

int *print_string(va_list args)
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
