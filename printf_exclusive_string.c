#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list args)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = va_arg(args, int);

	while (args / 16 != 0)
	{
		args /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
