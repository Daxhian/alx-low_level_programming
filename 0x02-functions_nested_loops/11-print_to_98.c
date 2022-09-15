#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints natural numbers from n to 98 followed by new line
* @n: the first number is accepted
*
* Return: Always 0
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n--;
		}
	}
}
