#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isalpha - Checks if the argument is an alphabet
* @c: the interger value is received
*
* Return: Always 1 if argument is an alphabet
* Always 0 if argument is not an alphabet
*/
int _isalpha(int c)
{
	int checker = isalpha(c);
	int alpha = 1;
	int non_alpha = 0;

	if (checker > 0)
	{
		return (alpha);
	}
	else
	{
		return (non_alpha);
	}
}
