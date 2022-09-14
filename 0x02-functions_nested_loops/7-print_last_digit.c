#include "main.h"
#include <stdio.h>

/**
* print_last_digit - Prints last didgit of the argument
* @n: the argument (an integer) is accepted
*
* Return: the last digit of the integer
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
