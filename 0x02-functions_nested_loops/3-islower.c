#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _islower - checks if the argument is lower or upper case
* @c: the interger value is received
*
* Return: Always 1 if argument is lower
* If argument is upper case returns 0
*/
int _islower(int c)
{
	int checker = islower(c);
	int lower = 1;
	int upper = 0;

	if (checker > 0)
	{
		return (lower);
	}
	else
	{
		return (upper);
	}
}
