#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: character is accepted
*
* Return: Always 1 if character uppercase but 0 if otherwise
*/
int _isupper(int c)
{

	if  (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
