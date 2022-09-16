#include "main.h"

/**
* print_line - draws a straigth line
* @n: number of columns to occupy
*
* Return: underscore
*/
void print_line(int n)
{
	int n, i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
