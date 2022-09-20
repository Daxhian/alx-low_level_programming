#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 *         starting with the first character, followed by a new line
 * @str: accepts a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
