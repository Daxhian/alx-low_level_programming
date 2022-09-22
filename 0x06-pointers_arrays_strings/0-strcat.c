#include "main.h"
#include <string.h>

/**
* _strcat - appends the source string to the destination string.
* @dest - specifty destination string
* @src - specify source string
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int len1 = strlen(src), len2 = strlen(dest);
	int i;

	for (i = 0; i < len1; i++)
	{
		dest[len2 + i] = src[i];
	}
	return(dest);
}
