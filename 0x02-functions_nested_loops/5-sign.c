#include "main.h"
#include <stdio.h>

/**
* print_sign - checks the sign of an integer
* @n - the interger value is received
*
* Retrun: Always 1 if n is positive
* Always 0 if n is 0
* Always -1 if n is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	else if (n == 0)
	{
		return (0);
		printf("0");
	}
	else
	{
		return (-1);
		printf("-");
	}
}