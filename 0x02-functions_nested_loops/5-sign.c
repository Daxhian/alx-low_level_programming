#include "main.h"
#include <stdio.h>

/**
* print_sign - checks the sign of an integer
* @n: the value of the interger will be received
*
* Return: Always 1 if n is positive
*         Always 0 if n is 0
*         Always -1 if n is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
