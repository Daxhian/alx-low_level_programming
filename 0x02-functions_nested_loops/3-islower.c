#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* int _islower - checks if the argument is lower or upper case
*
* Return: Always 1 if argument is lower
* If argument is upper case returns 0
*/
int _islower(int c)
{
	int c;
	int checker = islower(c);
	int lower = 1;
	int upper = 0;

	if (checker > 0)
	{
		return ("%d", lower);
	}
	else
	{
		return ("%d", upper);
	}
}
