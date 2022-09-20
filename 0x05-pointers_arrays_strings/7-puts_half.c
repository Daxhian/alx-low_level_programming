#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: accepts a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int len_i = len - 1;
	int n, i;

	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; i <= len_i; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len -1) / 2;
		for (i = n; i <= len_i; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
