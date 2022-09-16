#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: character is accepted
*
* Return: Always 1 if character uppercase but 0 if otherwise
*/
int _isupper(int c)
{

	if  (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
