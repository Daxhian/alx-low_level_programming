#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string
 * @str: accepts a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
