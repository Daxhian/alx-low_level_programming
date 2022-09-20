#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: accepts a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s); /* Variable to get the length of string */
	int i;

	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
