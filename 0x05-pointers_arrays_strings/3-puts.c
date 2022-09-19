#include "main.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: accepts a string
 *
 * Return: void
 */
void _puts(char *str)
{
	int len = strlen(str); /* Variable get the length of string */
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
