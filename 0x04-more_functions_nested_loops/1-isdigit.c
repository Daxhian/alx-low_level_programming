#include "main.h"

/**
* _isdigit - checks  for a digit (0 through 9)
* @c: integer is assigned
*
* Return: Always 1 if trye and 0 if false
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
